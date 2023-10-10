/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ThirdPartyFirewallAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace ThirdPartyFirewallAssociationStatusMapper
      {

        static const int ONBOARDING_HASH = HashingUtils::HashString("ONBOARDING");
        static const int ONBOARD_COMPLETE_HASH = HashingUtils::HashString("ONBOARD_COMPLETE");
        static const int OFFBOARDING_HASH = HashingUtils::HashString("OFFBOARDING");
        static const int OFFBOARD_COMPLETE_HASH = HashingUtils::HashString("OFFBOARD_COMPLETE");
        static const int NOT_EXIST_HASH = HashingUtils::HashString("NOT_EXIST");


        ThirdPartyFirewallAssociationStatus GetThirdPartyFirewallAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONBOARDING_HASH)
          {
            return ThirdPartyFirewallAssociationStatus::ONBOARDING;
          }
          else if (hashCode == ONBOARD_COMPLETE_HASH)
          {
            return ThirdPartyFirewallAssociationStatus::ONBOARD_COMPLETE;
          }
          else if (hashCode == OFFBOARDING_HASH)
          {
            return ThirdPartyFirewallAssociationStatus::OFFBOARDING;
          }
          else if (hashCode == OFFBOARD_COMPLETE_HASH)
          {
            return ThirdPartyFirewallAssociationStatus::OFFBOARD_COMPLETE;
          }
          else if (hashCode == NOT_EXIST_HASH)
          {
            return ThirdPartyFirewallAssociationStatus::NOT_EXIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThirdPartyFirewallAssociationStatus>(hashCode);
          }

          return ThirdPartyFirewallAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForThirdPartyFirewallAssociationStatus(ThirdPartyFirewallAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ThirdPartyFirewallAssociationStatus::NOT_SET:
            return {};
          case ThirdPartyFirewallAssociationStatus::ONBOARDING:
            return "ONBOARDING";
          case ThirdPartyFirewallAssociationStatus::ONBOARD_COMPLETE:
            return "ONBOARD_COMPLETE";
          case ThirdPartyFirewallAssociationStatus::OFFBOARDING:
            return "OFFBOARDING";
          case ThirdPartyFirewallAssociationStatus::OFFBOARD_COMPLETE:
            return "OFFBOARD_COMPLETE";
          case ThirdPartyFirewallAssociationStatus::NOT_EXIST:
            return "NOT_EXIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThirdPartyFirewallAssociationStatusMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
