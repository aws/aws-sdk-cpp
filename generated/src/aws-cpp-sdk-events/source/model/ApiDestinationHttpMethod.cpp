/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ApiDestinationHttpMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvents
  {
    namespace Model
    {
      namespace ApiDestinationHttpMethodMapper
      {

        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int HEAD_HASH = HashingUtils::HashString("HEAD");
        static const int OPTIONS_HASH = HashingUtils::HashString("OPTIONS");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int PATCH_HASH = HashingUtils::HashString("PATCH");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        ApiDestinationHttpMethod GetApiDestinationHttpMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace CloudWatchEvents
} // namespace Aws
