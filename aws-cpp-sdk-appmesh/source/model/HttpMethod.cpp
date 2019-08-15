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

        static const int connect_HASH = HashingUtils::HashString("connect");
        static const int delete__HASH = HashingUtils::HashString("delete");
        static const int get_HASH = HashingUtils::HashString("get");
        static const int head_HASH = HashingUtils::HashString("head");
        static const int options_HASH = HashingUtils::HashString("options");
        static const int patch_HASH = HashingUtils::HashString("patch");
        static const int post_HASH = HashingUtils::HashString("post");
        static const int put_HASH = HashingUtils::HashString("put");
        static const int trace_HASH = HashingUtils::HashString("trace");


        HttpMethod GetHttpMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == connect_HASH)
          {
            return HttpMethod::connect;
          }
          else if (hashCode == delete__HASH)
          {
            return HttpMethod::delete_;
          }
          else if (hashCode == get_HASH)
          {
            return HttpMethod::get;
          }
          else if (hashCode == head_HASH)
          {
            return HttpMethod::head;
          }
          else if (hashCode == options_HASH)
          {
            return HttpMethod::options;
          }
          else if (hashCode == patch_HASH)
          {
            return HttpMethod::patch;
          }
          else if (hashCode == post_HASH)
          {
            return HttpMethod::post;
          }
          else if (hashCode == put_HASH)
          {
            return HttpMethod::put;
          }
          else if (hashCode == trace_HASH)
          {
            return HttpMethod::trace;
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
          case HttpMethod::connect:
            return "connect";
          case HttpMethod::delete_:
            return "delete";
          case HttpMethod::get:
            return "get";
          case HttpMethod::head:
            return "head";
          case HttpMethod::options:
            return "options";
          case HttpMethod::patch:
            return "patch";
          case HttpMethod::post:
            return "post";
          case HttpMethod::put:
            return "put";
          case HttpMethod::trace:
            return "trace";
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
