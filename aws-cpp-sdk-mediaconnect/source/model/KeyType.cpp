/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace KeyTypeMapper
      {

        static const int speke_HASH = HashingUtils::HashString("speke");
        static const int static_key_HASH = HashingUtils::HashString("static-key");


        KeyType GetKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == speke_HASH)
          {
            return KeyType::speke;
          }
          else if (hashCode == static_key_HASH)
          {
            return KeyType::static_key;
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
          case KeyType::speke:
            return "speke";
          case KeyType::static_key:
            return "static-key";
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
  } // namespace MediaConnect
} // namespace Aws
