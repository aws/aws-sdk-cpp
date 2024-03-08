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

        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int OPTIONS_HASH = HashingUtils::HashString("OPTIONS");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int PATCH_HASH = HashingUtils::HashString("PATCH");
        static const int HEAD_HASH = HashingUtils::HashString("HEAD");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ResponseHeadersPolicyAccessControlAllowMethodsValues GetResponseHeadersPolicyAccessControlAllowMethodsValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
