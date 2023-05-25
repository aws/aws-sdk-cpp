/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyManagerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace KeyManagerTypeMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");


        KeyManagerType GetKeyManagerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return KeyManagerType::AWS;
          }
          else if (hashCode == CUSTOMER_HASH)
          {
            return KeyManagerType::CUSTOMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyManagerType>(hashCode);
          }

          return KeyManagerType::NOT_SET;
        }

        Aws::String GetNameForKeyManagerType(KeyManagerType enumValue)
        {
          switch(enumValue)
          {
          case KeyManagerType::AWS:
            return "AWS";
          case KeyManagerType::CUSTOMER:
            return "CUSTOMER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyManagerTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
