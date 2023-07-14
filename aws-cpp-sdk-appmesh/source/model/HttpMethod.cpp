/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace HttpMethodMapper
      {

        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int HEAD_HASH = HashingUtils::HashString("HEAD");
        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int CONNECT_HASH = HashingUtils::HashString("CONNECT");
        static const int OPTIONS_HASH = HashingUtils::HashString("OPTIONS");
        static const int TRACE_HASH = HashingUtils::HashString("TRACE");
        static const int PATCH_HASH = HashingUtils::HashString("PATCH");


        HttpMethod GetHttpMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GET__HASH)
          {
            return HttpMethod::GET_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return HttpMethod::HEAD;
          }
          else if (hashCode == POST_HASH)
          {
            return HttpMethod::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return HttpMethod::PUT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return HttpMethod::DELETE_;
          }
          else if (hashCode == CONNECT_HASH)
          {
            return HttpMethod::CONNECT;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return HttpMethod::OPTIONS;
          }
          else if (hashCode == TRACE_HASH)
          {
            return HttpMethod::TRACE;
          }
          else if (hashCode == PATCH_HASH)
          {
            return HttpMethod::PATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpMethod>(hashCode);
          }

          return HttpMethod::NOT_SET;
        }

        Aws::String GetNameForHttpMethod(HttpMethod enumValue)
        {
          switch(enumValue)
          {
          case HttpMethod::GET_:
            return "GET";
          case HttpMethod::HEAD:
            return "HEAD";
          case HttpMethod::POST:
            return "POST";
          case HttpMethod::PUT:
            return "PUT";
          case HttpMethod::DELETE_:
            return "DELETE";
          case HttpMethod::CONNECT:
            return "CONNECT";
          case HttpMethod::OPTIONS:
            return "OPTIONS";
          case HttpMethod::TRACE:
            return "TRACE";
          case HttpMethod::PATCH:
            return "PATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpMethodMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
