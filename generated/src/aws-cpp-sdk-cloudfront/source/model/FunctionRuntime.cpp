/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FunctionRuntime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace FunctionRuntimeMapper
      {

        static const int cloudfront_js_1_0_HASH = HashingUtils::HashString("cloudfront-js-1.0");
        static const int cloudfront_js_2_0_HASH = HashingUtils::HashString("cloudfront-js-2.0");


        FunctionRuntime GetFunctionRuntimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cloudfront_js_1_0_HASH)
          {
            return FunctionRuntime::cloudfront_js_1_0;
          }
          else if (hashCode == cloudfront_js_2_0_HASH)
          {
            return FunctionRuntime::cloudfront_js_2_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FunctionRuntime>(hashCode);
          }

          return FunctionRuntime::NOT_SET;
        }

        Aws::String GetNameForFunctionRuntime(FunctionRuntime enumValue)
        {
          switch(enumValue)
          {
          case FunctionRuntime::NOT_SET:
            return {};
          case FunctionRuntime::cloudfront_js_1_0:
            return "cloudfront-js-1.0";
          case FunctionRuntime::cloudfront_js_2_0:
            return "cloudfront-js-2.0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FunctionRuntimeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
