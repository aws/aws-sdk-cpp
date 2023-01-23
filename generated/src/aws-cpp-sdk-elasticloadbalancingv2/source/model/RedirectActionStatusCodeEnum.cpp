/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RedirectActionStatusCodeEnum.h>
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
      namespace RedirectActionStatusCodeEnumMapper
      {

        static const int HTTP_301_HASH = HashingUtils::HashString("HTTP_301");
        static const int HTTP_302_HASH = HashingUtils::HashString("HTTP_302");


        RedirectActionStatusCodeEnum GetRedirectActionStatusCodeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_301_HASH)
          {
            return RedirectActionStatusCodeEnum::HTTP_301;
          }
          else if (hashCode == HTTP_302_HASH)
          {
            return RedirectActionStatusCodeEnum::HTTP_302;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedirectActionStatusCodeEnum>(hashCode);
          }

          return RedirectActionStatusCodeEnum::NOT_SET;
        }

        Aws::String GetNameForRedirectActionStatusCodeEnum(RedirectActionStatusCodeEnum enumValue)
        {
          switch(enumValue)
          {
          case RedirectActionStatusCodeEnum::HTTP_301:
            return "HTTP_301";
          case RedirectActionStatusCodeEnum::HTTP_302:
            return "HTTP_302";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedirectActionStatusCodeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
