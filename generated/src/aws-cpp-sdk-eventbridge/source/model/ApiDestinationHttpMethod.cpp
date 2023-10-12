/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ApiDestinationHttpMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace ApiDestinationHttpMethodMapper
      {

        static constexpr uint32_t POST_HASH = ConstExprHashingUtils::HashString("POST");
        static constexpr uint32_t GET__HASH = ConstExprHashingUtils::HashString("GET");
        static constexpr uint32_t HEAD_HASH = ConstExprHashingUtils::HashString("HEAD");
        static constexpr uint32_t OPTIONS_HASH = ConstExprHashingUtils::HashString("OPTIONS");
        static constexpr uint32_t PUT_HASH = ConstExprHashingUtils::HashString("PUT");
        static constexpr uint32_t PATCH_HASH = ConstExprHashingUtils::HashString("PATCH");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        ApiDestinationHttpMethod GetApiDestinationHttpMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POST_HASH)
          {
            return ApiDestinationHttpMethod::POST;
          }
          else if (hashCode == GET__HASH)
          {
            return ApiDestinationHttpMethod::GET_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return ApiDestinationHttpMethod::HEAD;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return ApiDestinationHttpMethod::OPTIONS;
          }
          else if (hashCode == PUT_HASH)
          {
            return ApiDestinationHttpMethod::PUT;
          }
          else if (hashCode == PATCH_HASH)
          {
            return ApiDestinationHttpMethod::PATCH;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ApiDestinationHttpMethod::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiDestinationHttpMethod>(hashCode);
          }

          return ApiDestinationHttpMethod::NOT_SET;
        }

        Aws::String GetNameForApiDestinationHttpMethod(ApiDestinationHttpMethod enumValue)
        {
          switch(enumValue)
          {
          case ApiDestinationHttpMethod::NOT_SET:
            return {};
          case ApiDestinationHttpMethod::POST:
            return "POST";
          case ApiDestinationHttpMethod::GET_:
            return "GET";
          case ApiDestinationHttpMethod::HEAD:
            return "HEAD";
          case ApiDestinationHttpMethod::OPTIONS:
            return "OPTIONS";
          case ApiDestinationHttpMethod::PUT:
            return "PUT";
          case ApiDestinationHttpMethod::PATCH:
            return "PATCH";
          case ApiDestinationHttpMethod::DELETE_:
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

      } // namespace ApiDestinationHttpMethodMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
