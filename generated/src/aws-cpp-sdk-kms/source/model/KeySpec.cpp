/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeySpec.h>
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
      namespace KeySpecMapper
      {

        static constexpr uint32_t RSA_2048_HASH = ConstExprHashingUtils::HashString("RSA_2048");
        static constexpr uint32_t RSA_3072_HASH = ConstExprHashingUtils::HashString("RSA_3072");
        static constexpr uint32_t RSA_4096_HASH = ConstExprHashingUtils::HashString("RSA_4096");
        static constexpr uint32_t ECC_NIST_P256_HASH = ConstExprHashingUtils::HashString("ECC_NIST_P256");
        static constexpr uint32_t ECC_NIST_P384_HASH = ConstExprHashingUtils::HashString("ECC_NIST_P384");
        static constexpr uint32_t ECC_NIST_P521_HASH = ConstExprHashingUtils::HashString("ECC_NIST_P521");
        static constexpr uint32_t ECC_SECG_P256K1_HASH = ConstExprHashingUtils::HashString("ECC_SECG_P256K1");
        static constexpr uint32_t SYMMETRIC_DEFAULT_HASH = ConstExprHashingUtils::HashString("SYMMETRIC_DEFAULT");
        static constexpr uint32_t HMAC_224_HASH = ConstExprHashingUtils::HashString("HMAC_224");
        static constexpr uint32_t HMAC_256_HASH = ConstExprHashingUtils::HashString("HMAC_256");
        static constexpr uint32_t HMAC_384_HASH = ConstExprHashingUtils::HashString("HMAC_384");
        static constexpr uint32_t HMAC_512_HASH = ConstExprHashingUtils::HashString("HMAC_512");
        static constexpr uint32_t SM2_HASH = ConstExprHashingUtils::HashString("SM2");


        KeySpec GetKeySpecForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_2048_HASH)
          {
            return KeySpec::RSA_2048;
          }
          else if (hashCode == RSA_3072_HASH)
          {
            return KeySpec::RSA_3072;
          }
          else if (hashCode == RSA_4096_HASH)
          {
            return KeySpec::RSA_4096;
          }
          else if (hashCode == ECC_NIST_P256_HASH)
          {
            return KeySpec::ECC_NIST_P256;
          }
          else if (hashCode == ECC_NIST_P384_HASH)
          {
            return KeySpec::ECC_NIST_P384;
          }
          else if (hashCode == ECC_NIST_P521_HASH)
          {
            return KeySpec::ECC_NIST_P521;
          }
          else if (hashCode == ECC_SECG_P256K1_HASH)
          {
            return KeySpec::ECC_SECG_P256K1;
          }
          else if (hashCode == SYMMETRIC_DEFAULT_HASH)
          {
            return KeySpec::SYMMETRIC_DEFAULT;
          }
          else if (hashCode == HMAC_224_HASH)
          {
            return KeySpec::HMAC_224;
          }
          else if (hashCode == HMAC_256_HASH)
          {
            return KeySpec::HMAC_256;
          }
          else if (hashCode == HMAC_384_HASH)
          {
            return KeySpec::HMAC_384;
          }
          else if (hashCode == HMAC_512_HASH)
          {
            return KeySpec::HMAC_512;
          }
          else if (hashCode == SM2_HASH)
          {
            return KeySpec::SM2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeySpec>(hashCode);
          }

          return KeySpec::NOT_SET;
        }

        Aws::String GetNameForKeySpec(KeySpec enumValue)
        {
          switch(enumValue)
          {
          case KeySpec::NOT_SET:
            return {};
          case KeySpec::RSA_2048:
            return "RSA_2048";
          case KeySpec::RSA_3072:
            return "RSA_3072";
          case KeySpec::RSA_4096:
            return "RSA_4096";
          case KeySpec::ECC_NIST_P256:
            return "ECC_NIST_P256";
          case KeySpec::ECC_NIST_P384:
            return "ECC_NIST_P384";
          case KeySpec::ECC_NIST_P521:
            return "ECC_NIST_P521";
          case KeySpec::ECC_SECG_P256K1:
            return "ECC_SECG_P256K1";
          case KeySpec::SYMMETRIC_DEFAULT:
            return "SYMMETRIC_DEFAULT";
          case KeySpec::HMAC_224:
            return "HMAC_224";
          case KeySpec::HMAC_256:
            return "HMAC_256";
          case KeySpec::HMAC_384:
            return "HMAC_384";
          case KeySpec::HMAC_512:
            return "HMAC_512";
          case KeySpec::SM2:
            return "SM2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeySpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
