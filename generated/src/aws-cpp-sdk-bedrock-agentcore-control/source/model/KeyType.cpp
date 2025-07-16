/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace KeyTypeMapper
      {

        static const int CustomerManagedKey_HASH = HashingUtils::HashString("CustomerManagedKey");
        static const int ServiceManagedKey_HASH = HashingUtils::HashString("ServiceManagedKey");


        KeyType GetKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CustomerManagedKey_HASH)
          {
            return KeyType::CustomerManagedKey;
          }
          else if (hashCode == ServiceManagedKey_HASH)
          {
            return KeyType::ServiceManagedKey;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyType>(hashCode);
          }

          return KeyType::NOT_SET;
        }

        Aws::String GetNameForKeyType(KeyType enumValue)
        {
          switch(enumValue)
          {
          case KeyType::NOT_SET:
            return {};
          case KeyType::CustomerManagedKey:
            return "CustomerManagedKey";
          case KeyType::ServiceManagedKey:
            return "ServiceManagedKey";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
