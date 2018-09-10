﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace RedirectActionStatusCodeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
