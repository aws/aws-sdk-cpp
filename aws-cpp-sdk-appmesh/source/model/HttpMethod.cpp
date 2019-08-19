/*
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

        static const int CONNECT_HASH = HashingUtils::HashString("CONNECT");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int HEAD_HASH = HashingUtils::HashString("HEAD");
        static const int OPTIONS_HASH = HashingUtils::HashString("OPTIONS");
        static const int PATCH_HASH = HashingUtils::HashString("PATCH");
        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int TRACE_HASH = HashingUtils::HashString("TRACE");


        HttpMethod GetHttpMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECT_HASH)
          {
            return HttpMethod::CONNECT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return HttpMethod::DELETE_;
          }
          else if (hashCode == GET__HASH)
          {
            return HttpMethod::GET_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return HttpMethod::HEAD;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return HttpMethod::OPTIONS;
          }
          else if (hashCode == PATCH_HASH)
          {
            return HttpMethod::PATCH;
          }
          else if (hashCode == POST_HASH)
          {
            return HttpMethod::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return HttpMethod::PUT;
          }
          else if (hashCode == TRACE_HASH)
          {
            return HttpMethod::TRACE;
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
          case HttpMethod::CONNECT:
            return "CONNECT";
          case HttpMethod::DELETE_:
            return "DELETE";
          case HttpMethod::GET_:
            return "GET";
          case HttpMethod::HEAD:
            return "HEAD";
          case HttpMethod::OPTIONS:
            return "OPTIONS";
          case HttpMethod::PATCH:
            return "PATCH";
          case HttpMethod::POST:
            return "POST";
          case HttpMethod::PUT:
            return "PUT";
          case HttpMethod::TRACE:
            return "TRACE";
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
