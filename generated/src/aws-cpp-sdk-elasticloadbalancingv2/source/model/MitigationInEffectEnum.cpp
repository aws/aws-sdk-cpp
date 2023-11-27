/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/MitigationInEffectEnum.h>
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
      namespace MitigationInEffectEnumMapper
      {

        static const int yes_HASH = HashingUtils::HashString("yes");
        static const int no_HASH = HashingUtils::HashString("no");


        MitigationInEffectEnum GetMitigationInEffectEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == yes_HASH)
          {
            return MitigationInEffectEnum::yes;
          }
          else if (hashCode == no_HASH)
          {
            return MitigationInEffectEnum::no;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MitigationInEffectEnum>(hashCode);
          }

          return MitigationInEffectEnum::NOT_SET;
        }

        Aws::String GetNameForMitigationInEffectEnum(MitigationInEffectEnum enumValue)
        {
          switch(enumValue)
          {
          case MitigationInEffectEnum::NOT_SET:
            return {};
          case MitigationInEffectEnum::yes:
            return "yes";
          case MitigationInEffectEnum::no:
            return "no";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MitigationInEffectEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
