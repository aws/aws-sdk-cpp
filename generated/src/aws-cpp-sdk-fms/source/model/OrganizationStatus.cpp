/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/OrganizationStatus.h>
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
      namespace OrganizationStatusMapper
      {

        static constexpr uint32_t ONBOARDING_HASH = ConstExprHashingUtils::HashString("ONBOARDING");
        static constexpr uint32_t ONBOARDING_COMPLETE_HASH = ConstExprHashingUtils::HashString("ONBOARDING_COMPLETE");
        static constexpr uint32_t OFFBOARDING_HASH = ConstExprHashingUtils::HashString("OFFBOARDING");
        static constexpr uint32_t OFFBOARDING_COMPLETE_HASH = ConstExprHashingUtils::HashString("OFFBOARDING_COMPLETE");


        OrganizationStatus GetOrganizationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONBOARDING_HASH)
          {
            return OrganizationStatus::ONBOARDING;
          }
          else if (hashCode == ONBOARDING_COMPLETE_HASH)
          {
            return OrganizationStatus::ONBOARDING_COMPLETE;
          }
          else if (hashCode == OFFBOARDING_HASH)
          {
            return OrganizationStatus::OFFBOARDING;
          }
          else if (hashCode == OFFBOARDING_COMPLETE_HASH)
          {
            return OrganizationStatus::OFFBOARDING_COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationStatus>(hashCode);
          }

          return OrganizationStatus::NOT_SET;
        }

        Aws::String GetNameForOrganizationStatus(OrganizationStatus enumValue)
        {
          switch(enumValue)
          {
          case OrganizationStatus::NOT_SET:
            return {};
          case OrganizationStatus::ONBOARDING:
            return "ONBOARDING";
          case OrganizationStatus::ONBOARDING_COMPLETE:
            return "ONBOARDING_COMPLETE";
          case OrganizationStatus::OFFBOARDING:
            return "OFFBOARDING";
          case OrganizationStatus::OFFBOARDING_COMPLETE:
            return "OFFBOARDING_COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationStatusMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
