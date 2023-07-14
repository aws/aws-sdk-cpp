/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectionOAuthHttpMethod.h>
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
      namespace ConnectionOAuthHttpMethodMapper
      {

        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int PUT_HASH = HashingUtils::HashString("PUT");


        ConnectionOAuthHttpMethod GetConnectionOAuthHttpMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GET__HASH)
          {
            return ConnectionOAuthHttpMethod::GET_;
          }
          else if (hashCode == POST_HASH)
          {
            return ConnectionOAuthHttpMethod::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return ConnectionOAuthHttpMethod::PUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionOAuthHttpMethod>(hashCode);
          }

          return ConnectionOAuthHttpMethod::NOT_SET;
        }

        Aws::String GetNameForConnectionOAuthHttpMethod(ConnectionOAuthHttpMethod enumValue)
        {
          switch(enumValue)
          {
          case ConnectionOAuthHttpMethod::GET_:
            return "GET";
          case ConnectionOAuthHttpMethod::POST:
            return "POST";
          case ConnectionOAuthHttpMethod::PUT:
            return "PUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionOAuthHttpMethodMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
