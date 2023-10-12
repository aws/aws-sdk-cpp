/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Method.h>
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
      namespace MethodMapper
      {

        static constexpr uint32_t GET__HASH = ConstExprHashingUtils::HashString("GET");
        static constexpr uint32_t HEAD_HASH = ConstExprHashingUtils::HashString("HEAD");
        static constexpr uint32_t POST_HASH = ConstExprHashingUtils::HashString("POST");
        static constexpr uint32_t PUT_HASH = ConstExprHashingUtils::HashString("PUT");
        static constexpr uint32_t PATCH_HASH = ConstExprHashingUtils::HashString("PATCH");
        static constexpr uint32_t OPTIONS_HASH = ConstExprHashingUtils::HashString("OPTIONS");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        Method GetMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GET__HASH)
          {
            return Method::GET_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return Method::HEAD;
          }
          else if (hashCode == POST_HASH)
          {
            return Method::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return Method::PUT;
          }
          else if (hashCode == PATCH_HASH)
          {
            return Method::PATCH;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return Method::OPTIONS;
          }
          else if (hashCode == DELETE__HASH)
          {
            return Method::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Method>(hashCode);
          }

          return Method::NOT_SET;
        }

        Aws::String GetNameForMethod(Method enumValue)
        {
          switch(enumValue)
          {
          case Method::NOT_SET:
            return {};
          case Method::GET_:
            return "GET";
          case Method::HEAD:
            return "HEAD";
          case Method::POST:
            return "POST";
          case Method::PUT:
            return "PUT";
          case Method::PATCH:
            return "PATCH";
          case Method::OPTIONS:
            return "OPTIONS";
          case Method::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MethodMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
