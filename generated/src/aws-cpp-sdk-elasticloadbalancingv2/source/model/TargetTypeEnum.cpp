/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetTypeEnum.h>
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
      namespace TargetTypeEnumMapper
      {

        static constexpr uint32_t instance_HASH = ConstExprHashingUtils::HashString("instance");
        static constexpr uint32_t ip_HASH = ConstExprHashingUtils::HashString("ip");
        static constexpr uint32_t lambda_HASH = ConstExprHashingUtils::HashString("lambda");
        static constexpr uint32_t alb_HASH = ConstExprHashingUtils::HashString("alb");


        TargetTypeEnum GetTargetTypeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instance_HASH)
          {
            return TargetTypeEnum::instance;
          }
          else if (hashCode == ip_HASH)
          {
            return TargetTypeEnum::ip;
          }
          else if (hashCode == lambda_HASH)
          {
            return TargetTypeEnum::lambda;
          }
          else if (hashCode == alb_HASH)
          {
            return TargetTypeEnum::alb;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetTypeEnum>(hashCode);
          }

          return TargetTypeEnum::NOT_SET;
        }

        Aws::String GetNameForTargetTypeEnum(TargetTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case TargetTypeEnum::NOT_SET:
            return {};
          case TargetTypeEnum::instance:
            return "instance";
          case TargetTypeEnum::ip:
            return "ip";
          case TargetTypeEnum::lambda:
            return "lambda";
          case TargetTypeEnum::alb:
            return "alb";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetTypeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
