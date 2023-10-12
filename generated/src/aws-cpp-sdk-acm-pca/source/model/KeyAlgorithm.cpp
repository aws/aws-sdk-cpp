/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/KeyAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace KeyAlgorithmMapper
      {

        static constexpr uint32_t RSA_2048_HASH = ConstExprHashingUtils::HashString("RSA_2048");
        static constexpr uint32_t RSA_4096_HASH = ConstExprHashingUtils::HashString("RSA_4096");
        static constexpr uint32_t EC_prime256v1_HASH = ConstExprHashingUtils::HashString("EC_prime256v1");
        static constexpr uint32_t EC_secp384r1_HASH = ConstExprHashingUtils::HashString("EC_secp384r1");


        KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_2048_HASH)
          {
            return KeyAlgorithm::RSA_2048;
          }
          else if (hashCode == RSA_4096_HASH)
          {
            return KeyAlgorithm::RSA_4096;
          }
          else if (hashCode == EC_prime256v1_HASH)
          {
            return KeyAlgorithm::EC_prime256v1;
          }
          else if (hashCode == EC_secp384r1_HASH)
          {
            return KeyAlgorithm::EC_secp384r1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyAlgorithm>(hashCode);
          }

          return KeyAlgorithm::NOT_SET;
        }

        Aws::String GetNameForKeyAlgorithm(KeyAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case KeyAlgorithm::NOT_SET:
            return {};
          case KeyAlgorithm::RSA_2048:
            return "RSA_2048";
          case KeyAlgorithm::RSA_4096:
            return "RSA_4096";
          case KeyAlgorithm::EC_prime256v1:
            return "EC_prime256v1";
          case KeyAlgorithm::EC_secp384r1:
            return "EC_secp384r1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyAlgorithmMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
