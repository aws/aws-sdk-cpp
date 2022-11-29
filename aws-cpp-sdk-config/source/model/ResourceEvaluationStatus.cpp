/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceEvaluationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ResourceEvaluationStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        ResourceEvaluationStatus GetResourceEvaluationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceEvaluationStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceEvaluationStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ResourceEvaluationStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceEvaluationStatus>(hashCode);
          }

          return ResourceEvaluationStatus::NOT_SET;
        }

        Aws::String GetNameForResourceEvaluationStatus(ResourceEvaluationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceEvaluationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceEvaluationStatus::FAILED:
            return "FAILED";
          case ResourceEvaluationStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceEvaluationStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
