/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InstanceOnboardingJobStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaigns
  {
    namespace Model
    {
      namespace InstanceOnboardingJobStatusCodeMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        InstanceOnboardingJobStatusCode GetInstanceOnboardingJobStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return InstanceOnboardingJobStatusCode::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return InstanceOnboardingJobStatusCode::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return InstanceOnboardingJobStatusCode::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceOnboardingJobStatusCode>(hashCode);
          }

          return InstanceOnboardingJobStatusCode::NOT_SET;
        }

        Aws::String GetNameForInstanceOnboardingJobStatusCode(InstanceOnboardingJobStatusCode enumValue)
        {
          switch(enumValue)
          {
          case InstanceOnboardingJobStatusCode::NOT_SET:
            return {};
          case InstanceOnboardingJobStatusCode::IN_PROGRESS:
            return "IN_PROGRESS";
          case InstanceOnboardingJobStatusCode::SUCCEEDED:
            return "SUCCEEDED";
          case InstanceOnboardingJobStatusCode::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceOnboardingJobStatusCodeMapper
    } // namespace Model
  } // namespace ConnectCampaigns
} // namespace Aws
