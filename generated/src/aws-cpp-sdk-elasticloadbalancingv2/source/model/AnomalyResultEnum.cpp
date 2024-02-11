/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AnomalyResultEnum.h>
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
      namespace AnomalyResultEnumMapper
      {

        static const int anomalous_HASH = HashingUtils::HashString("anomalous");
        static const int normal_HASH = HashingUtils::HashString("normal");


        AnomalyResultEnum GetAnomalyResultEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == anomalous_HASH)
          {
            return AnomalyResultEnum::anomalous;
          }
          else if (hashCode == normal_HASH)
          {
            return AnomalyResultEnum::normal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyResultEnum>(hashCode);
          }

          return AnomalyResultEnum::NOT_SET;
        }

        Aws::String GetNameForAnomalyResultEnum(AnomalyResultEnum enumValue)
        {
          switch(enumValue)
          {
          case AnomalyResultEnum::NOT_SET:
            return {};
          case AnomalyResultEnum::anomalous:
            return "anomalous";
          case AnomalyResultEnum::normal:
            return "normal";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyResultEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
