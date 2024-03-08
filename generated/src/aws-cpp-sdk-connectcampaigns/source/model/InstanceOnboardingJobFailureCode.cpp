/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InstanceOnboardingJobFailureCode.h>
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
      namespace InstanceOnboardingJobFailureCodeMapper
      {

        static const int EVENT_BRIDGE_ACCESS_DENIED_HASH = HashingUtils::HashString("EVENT_BRIDGE_ACCESS_DENIED");
        static const int EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED");
        static const int IAM_ACCESS_DENIED_HASH = HashingUtils::HashString("IAM_ACCESS_DENIED");
        static const int KMS_ACCESS_DENIED_HASH = HashingUtils::HashString("KMS_ACCESS_DENIED");
        static const int KMS_KEY_NOT_FOUND_HASH = HashingUtils::HashString("KMS_KEY_NOT_FOUND");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        InstanceOnboardingJobFailureCode GetInstanceOnboardingJobFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_BRIDGE_ACCESS_DENIED_HASH)
          {
            return InstanceOnboardingJobFailureCode::EVENT_BRIDGE_ACCESS_DENIED;
          }
          else if (hashCode == EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED_HASH)
          {
            return InstanceOnboardingJobFailureCode::EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED;
          }
          else if (hashCode == IAM_ACCESS_DENIED_HASH)
          {
            return InstanceOnboardingJobFailureCode::IAM_ACCESS_DENIED;
          }
          else if (hashCode == KMS_ACCESS_DENIED_HASH)
          {
            return InstanceOnboardingJobFailureCode::KMS_ACCESS_DENIED;
          }
          else if (hashCode == KMS_KEY_NOT_FOUND_HASH)
          {
            return InstanceOnboardingJobFailureCode::KMS_KEY_NOT_FOUND;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return InstanceOnboardingJobFailureCode::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceOnboardingJobFailureCode>(hashCode);
          }

          return InstanceOnboardingJobFailureCode::NOT_SET;
        }

        Aws::String GetNameForInstanceOnboardingJobFailureCode(InstanceOnboardingJobFailureCode enumValue)
        {
          switch(enumValue)
          {
          case InstanceOnboardingJobFailureCode::NOT_SET:
            return {};
          case InstanceOnboardingJobFailureCode::EVENT_BRIDGE_ACCESS_DENIED:
            return "EVENT_BRIDGE_ACCESS_DENIED";
          case InstanceOnboardingJobFailureCode::EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED:
            return "EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED";
          case InstanceOnboardingJobFailureCode::IAM_ACCESS_DENIED:
            return "IAM_ACCESS_DENIED";
          case InstanceOnboardingJobFailureCode::KMS_ACCESS_DENIED:
            return "KMS_ACCESS_DENIED";
          case InstanceOnboardingJobFailureCode::KMS_KEY_NOT_FOUND:
            return "KMS_KEY_NOT_FOUND";
          case InstanceOnboardingJobFailureCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceOnboardingJobFailureCodeMapper
    } // namespace Model
  } // namespace ConnectCampaigns
} // namespace Aws
