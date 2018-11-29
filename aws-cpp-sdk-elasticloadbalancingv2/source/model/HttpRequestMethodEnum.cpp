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

#include <aws/elasticloadbalancingv2/model/HttpRequestMethodEnum.h>
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
      namespace HttpRequestMethodEnumMapper
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


        HttpRequestMethodEnum GetHttpRequestMethodEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GET__HASH)
          {
            return HttpRequestMethodEnum::GET_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return HttpRequestMethodEnum::HEAD;
          }
          else if (hashCode == POST_HASH)
          {
            return HttpRequestMethodEnum::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return HttpRequestMethodEnum::PUT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return HttpRequestMethodEnum::DELETE_;
          }
          else if (hashCode == CONNECT_HASH)
          {
            return HttpRequestMethodEnum::CONNECT;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return HttpRequestMethodEnum::OPTIONS;
          }
          else if (hashCode == TRACE_HASH)
          {
            return HttpRequestMethodEnum::TRACE;
          }
          else if (hashCode == PATCH_HASH)
          {
            return HttpRequestMethodEnum::PATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpRequestMethodEnum>(hashCode);
          }

          return HttpRequestMethodEnum::NOT_SET;
        }

        Aws::String GetNameForHttpRequestMethodEnum(HttpRequestMethodEnum enumValue)
        {
          switch(enumValue)
          {
          case HttpRequestMethodEnum::GET_:
            return "GET";
          case HttpRequestMethodEnum::HEAD:
            return "HEAD";
          case HttpRequestMethodEnum::POST:
            return "POST";
          case HttpRequestMethodEnum::PUT:
            return "PUT";
          case HttpRequestMethodEnum::DELETE_:
            return "DELETE";
          case HttpRequestMethodEnum::CONNECT:
            return "CONNECT";
          case HttpRequestMethodEnum::OPTIONS:
            return "OPTIONS";
          case HttpRequestMethodEnum::TRACE:
            return "TRACE";
          case HttpRequestMethodEnum::PATCH:
            return "PATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HttpRequestMethodEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
