/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyEncryptionMechanism.h>
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
      namespace KeyEncryptionMechanismMapper
      {

        static const int RSAES_OAEP_SHA_256_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_256");


        KeyEncryptionMechanism GetKeyEncryptionMechanismForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSAES_OAEP_SHA_256_HASH)
          {
            return KeyEncryptionMechanism::RSAES_OAEP_SHA_256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyEncryptionMechanism>(hashCode);
          }

          return KeyEncryptionMechanism::NOT_SET;
        }

        Aws::String GetNameForKeyEncryptionMechanism(KeyEncryptionMechanism enumValue)
        {
          switch(enumValue)
          {
          case KeyEncryptionMechanism::NOT_SET:
            return {};
          case KeyEncryptionMechanism::RSAES_OAEP_SHA_256:
            return "RSAES_OAEP_SHA_256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyEncryptionMechanismMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
