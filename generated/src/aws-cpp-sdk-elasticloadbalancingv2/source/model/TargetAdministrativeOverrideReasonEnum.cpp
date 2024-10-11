/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetAdministrativeOverrideReasonEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace TargetAdministrativeOverrideReasonEnumMapper
      {

        static const int AdministrativeOverride_Unknown_HASH = HashingUtils::HashString("AdministrativeOverride.Unknown");
        static const int AdministrativeOverride_NoOverride_HASH = HashingUtils::HashString("AdministrativeOverride.NoOverride");
        static const int AdministrativeOverride_ZonalShiftActive_HASH = HashingUtils::HashString("AdministrativeOverride.ZonalShiftActive");
        static const int AdministrativeOverride_ZonalShiftDelegatedToDns_HASH = HashingUtils::HashString("AdministrativeOverride.ZonalShiftDelegatedToDns");


        TargetAdministrativeOverrideReasonEnum GetTargetAdministrativeOverrideReasonEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AdministrativeOverride_Unknown_HASH)
          {
            return TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_Unknown;
          }
          else if (hashCode == AdministrativeOverride_NoOverride_HASH)
          {
            return TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_NoOverride;
          }
          else if (hashCode == AdministrativeOverride_ZonalShiftActive_HASH)
          {
            return TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_ZonalShiftActive;
          }
          else if (hashCode == AdministrativeOverride_ZonalShiftDelegatedToDns_HASH)
          {
            return TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_ZonalShiftDelegatedToDns;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetAdministrativeOverrideReasonEnum>(hashCode);
          }

          return TargetAdministrativeOverrideReasonEnum::NOT_SET;
        }

        Aws::String GetNameForTargetAdministrativeOverrideReasonEnum(TargetAdministrativeOverrideReasonEnum enumValue)
        {
          switch(enumValue)
          {
          case TargetAdministrativeOverrideReasonEnum::NOT_SET:
            return {};
          case TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_Unknown:
            return "AdministrativeOverride.Unknown";
          case TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_NoOverride:
            return "AdministrativeOverride.NoOverride";
          case TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_ZonalShiftActive:
            return "AdministrativeOverride.ZonalShiftActive";
          case TargetAdministrativeOverrideReasonEnum::AdministrativeOverride_ZonalShiftDelegatedToDns:
            return "AdministrativeOverride.ZonalShiftDelegatedToDns";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetAdministrativeOverrideReasonEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
