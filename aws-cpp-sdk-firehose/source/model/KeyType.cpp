/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace KeyTypeMapper
      {

        static const int AWS_OWNED_CMK_HASH = HashingUtils::HashString("AWS_OWNED_CMK");
        static const int CUSTOMER_MANAGED_CMK_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_CMK");


        KeyType GetKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_OWNED_CMK_HASH)
          {
            return KeyType::AWS_OWNED_CMK;
          }
          else if (hashCode == CUSTOMER_MANAGED_CMK_HASH)
          {
            return KeyType::CUSTOMER_MANAGED_CMK;
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
          case KeyType::AWS_OWNED_CMK:
            return "AWS_OWNED_CMK";
          case KeyType::CUSTOMER_MANAGED_CMK:
            return "CUSTOMER_MANAGED_CMK";
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
  } // namespace Firehose
} // namespace Aws
