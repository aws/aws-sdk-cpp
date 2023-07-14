/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchComplianceDataState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchComplianceDataStateMapper
      {

        static const int INSTALLED_HASH = HashingUtils::HashString("INSTALLED");
        static const int INSTALLED_OTHER_HASH = HashingUtils::HashString("INSTALLED_OTHER");
        static const int INSTALLED_PENDING_REBOOT_HASH = HashingUtils::HashString("INSTALLED_PENDING_REBOOT");
        static const int INSTALLED_REJECTED_HASH = HashingUtils::HashString("INSTALLED_REJECTED");
        static const int MISSING_HASH = HashingUtils::HashString("MISSING");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PatchComplianceDataState GetPatchComplianceDataStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTALLED_HASH)
          {
            return PatchComplianceDataState::INSTALLED;
          }
          else if (hashCode == INSTALLED_OTHER_HASH)
          {
            return PatchComplianceDataState::INSTALLED_OTHER;
          }
          else if (hashCode == INSTALLED_PENDING_REBOOT_HASH)
          {
            return PatchComplianceDataState::INSTALLED_PENDING_REBOOT;
          }
          else if (hashCode == INSTALLED_REJECTED_HASH)
          {
            return PatchComplianceDataState::INSTALLED_REJECTED;
          }
          else if (hashCode == MISSING_HASH)
          {
            return PatchComplianceDataState::MISSING;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return PatchComplianceDataState::NOT_APPLICABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PatchComplianceDataState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchComplianceDataState>(hashCode);
          }

          return PatchComplianceDataState::NOT_SET;
        }

        Aws::String GetNameForPatchComplianceDataState(PatchComplianceDataState enumValue)
        {
          switch(enumValue)
          {
          case PatchComplianceDataState::INSTALLED:
            return "INSTALLED";
          case PatchComplianceDataState::INSTALLED_OTHER:
            return "INSTALLED_OTHER";
          case PatchComplianceDataState::INSTALLED_PENDING_REBOOT:
            return "INSTALLED_PENDING_REBOOT";
          case PatchComplianceDataState::INSTALLED_REJECTED:
            return "INSTALLED_REJECTED";
          case PatchComplianceDataState::MISSING:
            return "MISSING";
          case PatchComplianceDataState::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case PatchComplianceDataState::FAILED:
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

      } // namespace PatchComplianceDataStateMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
