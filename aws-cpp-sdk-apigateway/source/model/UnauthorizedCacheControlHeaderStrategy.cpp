/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/UnauthorizedCacheControlHeaderStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace UnauthorizedCacheControlHeaderStrategyMapper
      {

        static const int FAIL_WITH_403_HASH = HashingUtils::HashString("FAIL_WITH_403");
        static const int SUCCEED_WITH_RESPONSE_HEADER_HASH = HashingUtils::HashString("SUCCEED_WITH_RESPONSE_HEADER");
        static const int SUCCEED_WITHOUT_RESPONSE_HEADER_HASH = HashingUtils::HashString("SUCCEED_WITHOUT_RESPONSE_HEADER");


        UnauthorizedCacheControlHeaderStrategy GetUnauthorizedCacheControlHeaderStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAIL_WITH_403_HASH)
          {
            return UnauthorizedCacheControlHeaderStrategy::FAIL_WITH_403;
          }
          else if (hashCode == SUCCEED_WITH_RESPONSE_HEADER_HASH)
          {
            return UnauthorizedCacheControlHeaderStrategy::SUCCEED_WITH_RESPONSE_HEADER;
          }
          else if (hashCode == SUCCEED_WITHOUT_RESPONSE_HEADER_HASH)
          {
            return UnauthorizedCacheControlHeaderStrategy::SUCCEED_WITHOUT_RESPONSE_HEADER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnauthorizedCacheControlHeaderStrategy>(hashCode);
          }

          return UnauthorizedCacheControlHeaderStrategy::NOT_SET;
        }

        Aws::String GetNameForUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy enumValue)
        {
          switch(enumValue)
          {
          case UnauthorizedCacheControlHeaderStrategy::FAIL_WITH_403:
            return "FAIL_WITH_403";
          case UnauthorizedCacheControlHeaderStrategy::SUCCEED_WITH_RESPONSE_HEADER:
            return "SUCCEED_WITH_RESPONSE_HEADER";
          case UnauthorizedCacheControlHeaderStrategy::SUCCEED_WITHOUT_RESPONSE_HEADER:
            return "SUCCEED_WITHOUT_RESPONSE_HEADER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UnauthorizedCacheControlHeaderStrategyMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
