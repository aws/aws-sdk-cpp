/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/OverallDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace OverallDeploymentStatusMapper
      {

        static const int PENDING_DEPLOYMENT_HASH = HashingUtils::HashString("PENDING_DEPLOYMENT");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_VALIDATION_HASH = HashingUtils::HashString("FAILED_VALIDATION");
        static const int FAILED_DEPLOYMENT_HASH = HashingUtils::HashString("FAILED_DEPLOYMENT");


        OverallDeploymentStatus GetOverallDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_DEPLOYMENT_HASH)
          {
            return OverallDeploymentStatus::PENDING_DEPLOYMENT;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return OverallDeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return OverallDeploymentStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_VALIDATION_HASH)
          {
            return OverallDeploymentStatus::FAILED_VALIDATION;
          }
          else if (hashCode == FAILED_DEPLOYMENT_HASH)
          {
            return OverallDeploymentStatus::FAILED_DEPLOYMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverallDeploymentStatus>(hashCode);
          }

          return OverallDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForOverallDeploymentStatus(OverallDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case OverallDeploymentStatus::NOT_SET:
            return {};
          case OverallDeploymentStatus::PENDING_DEPLOYMENT:
            return "PENDING_DEPLOYMENT";
          case OverallDeploymentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OverallDeploymentStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case OverallDeploymentStatus::FAILED_VALIDATION:
            return "FAILED_VALIDATION";
          case OverallDeploymentStatus::FAILED_DEPLOYMENT:
            return "FAILED_DEPLOYMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverallDeploymentStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
