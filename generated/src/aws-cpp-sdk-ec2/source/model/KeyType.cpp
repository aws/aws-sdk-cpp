/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace KeyTypeMapper
      {

        static const int rsa_HASH = HashingUtils::HashString("rsa");
        static const int ed25519_HASH = HashingUtils::HashString("ed25519");


        KeyType GetKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == rsa_HASH)
          {
            return KeyType::rsa;
          }
          else if (hashCode == ed25519_HASH)
          {
            return KeyType::ed25519;
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
          case KeyType::rsa:
            return "rsa";
          case KeyType::ed25519:
            return "ed25519";
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
  } // namespace EC2
} // namespace Aws
