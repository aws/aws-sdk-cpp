/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetAdministrativeOverrideStateEnum.h>
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
      namespace TargetAdministrativeOverrideStateEnumMapper
      {

        static const int unknown_HASH = HashingUtils::HashString("unknown");
        static const int no_override_HASH = HashingUtils::HashString("no_override");
        static const int zonal_shift_active_HASH = HashingUtils::HashString("zonal_shift_active");
        static const int zonal_shift_delegated_to_dns_HASH = HashingUtils::HashString("zonal_shift_delegated_to_dns");


        TargetAdministrativeOverrideStateEnum GetTargetAdministrativeOverrideStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unknown_HASH)
          {
            return TargetAdministrativeOverrideStateEnum::unknown;
          }
          else if (hashCode == no_override_HASH)
          {
            return TargetAdministrativeOverrideStateEnum::no_override;
          }
          else if (hashCode == zonal_shift_active_HASH)
          {
            return TargetAdministrativeOverrideStateEnum::zonal_shift_active;
          }
          else if (hashCode == zonal_shift_delegated_to_dns_HASH)
          {
            return TargetAdministrativeOverrideStateEnum::zonal_shift_delegated_to_dns;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetAdministrativeOverrideStateEnum>(hashCode);
          }

          return TargetAdministrativeOverrideStateEnum::NOT_SET;
        }

        Aws::String GetNameForTargetAdministrativeOverrideStateEnum(TargetAdministrativeOverrideStateEnum enumValue)
        {
          switch(enumValue)
          {
          case TargetAdministrativeOverrideStateEnum::NOT_SET:
            return {};
          case TargetAdministrativeOverrideStateEnum::unknown:
            return "unknown";
          case TargetAdministrativeOverrideStateEnum::no_override:
            return "no_override";
          case TargetAdministrativeOverrideStateEnum::zonal_shift_active:
            return "zonal_shift_active";
          case TargetAdministrativeOverrideStateEnum::zonal_shift_delegated_to_dns:
            return "zonal_shift_delegated_to_dns";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetAdministrativeOverrideStateEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
