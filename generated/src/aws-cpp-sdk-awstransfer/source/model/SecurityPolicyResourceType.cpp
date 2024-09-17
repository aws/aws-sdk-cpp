/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SecurityPolicyResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace SecurityPolicyResourceTypeMapper
      {

        static const int SERVER_HASH = HashingUtils::HashString("SERVER");
        static const int CONNECTOR_HASH = HashingUtils::HashString("CONNECTOR");


        SecurityPolicyResourceType GetSecurityPolicyResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_HASH)
          {
            return SecurityPolicyResourceType::SERVER;
          }
          else if (hashCode == CONNECTOR_HASH)
          {
            return SecurityPolicyResourceType::CONNECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityPolicyResourceType>(hashCode);
          }

          return SecurityPolicyResourceType::NOT_SET;
        }

        Aws::String GetNameForSecurityPolicyResourceType(SecurityPolicyResourceType enumValue)
        {
          switch(enumValue)
          {
          case SecurityPolicyResourceType::NOT_SET:
            return {};
          case SecurityPolicyResourceType::SERVER:
            return "SERVER";
          case SecurityPolicyResourceType::CONNECTOR:
            return "CONNECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityPolicyResourceTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
