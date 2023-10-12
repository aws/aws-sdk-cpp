/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlAllowMethodsValues.h>
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
      namespace ResponseHeadersPolicyAccessControlAllowMethodsValuesMapper
      {

        static constexpr uint32_t GET__HASH = ConstExprHashingUtils::HashString("GET");
        static constexpr uint32_t POST_HASH = ConstExprHashingUtils::HashString("POST");
        static constexpr uint32_t OPTIONS_HASH = ConstExprHashingUtils::HashString("OPTIONS");
        static constexpr uint32_t PUT_HASH = ConstExprHashingUtils::HashString("PUT");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t PATCH_HASH = ConstExprHashingUtils::HashString("PATCH");
        static constexpr uint32_t HEAD_HASH = ConstExprHashingUtils::HashString("HEAD");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        ResponseHeadersPolicyAccessControlAllowMethodsValues GetResponseHeadersPolicyAccessControlAllowMethodsValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GET__HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::GET_;
          }
          else if (hashCode == POST_HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::POST;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::OPTIONS;
          }
          else if (hashCode == PUT_HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::PUT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::DELETE_;
          }
          else if (hashCode == PATCH_HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::PATCH;
          }
          else if (hashCode == HEAD_HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::HEAD;
          }
          else if (hashCode == ALL_HASH)
          {
            return ResponseHeadersPolicyAccessControlAllowMethodsValues::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponseHeadersPolicyAccessControlAllowMethodsValues>(hashCode);
          }

          return ResponseHeadersPolicyAccessControlAllowMethodsValues::NOT_SET;
        }

        Aws::String GetNameForResponseHeadersPolicyAccessControlAllowMethodsValues(ResponseHeadersPolicyAccessControlAllowMethodsValues enumValue)
        {
          switch(enumValue)
          {
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::NOT_SET:
            return {};
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::GET_:
            return "GET";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::POST:
            return "POST";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::OPTIONS:
            return "OPTIONS";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::PUT:
            return "PUT";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::DELETE_:
            return "DELETE";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::PATCH:
            return "PATCH";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::HEAD:
            return "HEAD";
          case ResponseHeadersPolicyAccessControlAllowMethodsValues::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResponseHeadersPolicyAccessControlAllowMethodsValuesMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
