/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/SecurityPolicy.h>
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
      namespace SecurityPolicyMapper
      {

        static const int TLS_1_0_HASH = HashingUtils::HashString("TLS_1_0");
        static const int TLS_1_2_HASH = HashingUtils::HashString("TLS_1_2");


        SecurityPolicy GetSecurityPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS_1_0_HASH)
          {
            return SecurityPolicy::TLS_1_0;
          }
          else if (hashCode == TLS_1_2_HASH)
          {
            return SecurityPolicy::TLS_1_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityPolicy>(hashCode);
          }

          return SecurityPolicy::NOT_SET;
        }

        Aws::String GetNameForSecurityPolicy(SecurityPolicy enumValue)
        {
          switch(enumValue)
          {
          case SecurityPolicy::TLS_1_0:
            return "TLS_1_0";
          case SecurityPolicy::TLS_1_2:
            return "TLS_1_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityPolicyMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
