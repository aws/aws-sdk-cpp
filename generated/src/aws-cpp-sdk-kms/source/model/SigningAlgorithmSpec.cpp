/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/SigningAlgorithmSpec.h>
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
      namespace SigningAlgorithmSpecMapper
      {

        static constexpr uint32_t RSASSA_PSS_SHA_256_HASH = ConstExprHashingUtils::HashString("RSASSA_PSS_SHA_256");
        static constexpr uint32_t RSASSA_PSS_SHA_384_HASH = ConstExprHashingUtils::HashString("RSASSA_PSS_SHA_384");
        static constexpr uint32_t RSASSA_PSS_SHA_512_HASH = ConstExprHashingUtils::HashString("RSASSA_PSS_SHA_512");
        static constexpr uint32_t RSASSA_PKCS1_V1_5_SHA_256_HASH = ConstExprHashingUtils::HashString("RSASSA_PKCS1_V1_5_SHA_256");
        static constexpr uint32_t RSASSA_PKCS1_V1_5_SHA_384_HASH = ConstExprHashingUtils::HashString("RSASSA_PKCS1_V1_5_SHA_384");
        static constexpr uint32_t RSASSA_PKCS1_V1_5_SHA_512_HASH = ConstExprHashingUtils::HashString("RSASSA_PKCS1_V1_5_SHA_512");
        static constexpr uint32_t ECDSA_SHA_256_HASH = ConstExprHashingUtils::HashString("ECDSA_SHA_256");
        static constexpr uint32_t ECDSA_SHA_384_HASH = ConstExprHashingUtils::HashString("ECDSA_SHA_384");
        static constexpr uint32_t ECDSA_SHA_512_HASH = ConstExprHashingUtils::HashString("ECDSA_SHA_512");
        static constexpr uint32_t SM2DSA_HASH = ConstExprHashingUtils::HashString("SM2DSA");


        SigningAlgorithmSpec GetSigningAlgorithmSpecForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSASSA_PSS_SHA_256_HASH)
          {
            return SigningAlgorithmSpec::RSASSA_PSS_SHA_256;
          }
          else if (hashCode == RSASSA_PSS_SHA_384_HASH)
          {
            return SigningAlgorithmSpec::RSASSA_PSS_SHA_384;
          }
          else if (hashCode == RSASSA_PSS_SHA_512_HASH)
          {
            return SigningAlgorithmSpec::RSASSA_PSS_SHA_512;
          }
          else if (hashCode == RSASSA_PKCS1_V1_5_SHA_256_HASH)
          {
            return SigningAlgorithmSpec::RSASSA_PKCS1_V1_5_SHA_256;
          }
          else if (hashCode == RSASSA_PKCS1_V1_5_SHA_384_HASH)
          {
            return SigningAlgorithmSpec::RSASSA_PKCS1_V1_5_SHA_384;
          }
          else if (hashCode == RSASSA_PKCS1_V1_5_SHA_512_HASH)
          {
            return SigningAlgorithmSpec::RSASSA_PKCS1_V1_5_SHA_512;
          }
          else if (hashCode == ECDSA_SHA_256_HASH)
          {
            return SigningAlgorithmSpec::ECDSA_SHA_256;
          }
          else if (hashCode == ECDSA_SHA_384_HASH)
          {
            return SigningAlgorithmSpec::ECDSA_SHA_384;
          }
          else if (hashCode == ECDSA_SHA_512_HASH)
          {
            return SigningAlgorithmSpec::ECDSA_SHA_512;
          }
          else if (hashCode == SM2DSA_HASH)
          {
            return SigningAlgorithmSpec::SM2DSA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningAlgorithmSpec>(hashCode);
          }

          return SigningAlgorithmSpec::NOT_SET;
        }

        Aws::String GetNameForSigningAlgorithmSpec(SigningAlgorithmSpec enumValue)
        {
          switch(enumValue)
          {
          case SigningAlgorithmSpec::NOT_SET:
            return {};
          case SigningAlgorithmSpec::RSASSA_PSS_SHA_256:
            return "RSASSA_PSS_SHA_256";
          case SigningAlgorithmSpec::RSASSA_PSS_SHA_384:
            return "RSASSA_PSS_SHA_384";
          case SigningAlgorithmSpec::RSASSA_PSS_SHA_512:
            return "RSASSA_PSS_SHA_512";
          case SigningAlgorithmSpec::RSASSA_PKCS1_V1_5_SHA_256:
            return "RSASSA_PKCS1_V1_5_SHA_256";
          case SigningAlgorithmSpec::RSASSA_PKCS1_V1_5_SHA_384:
            return "RSASSA_PKCS1_V1_5_SHA_384";
          case SigningAlgorithmSpec::RSASSA_PKCS1_V1_5_SHA_512:
            return "RSASSA_PKCS1_V1_5_SHA_512";
          case SigningAlgorithmSpec::ECDSA_SHA_256:
            return "ECDSA_SHA_256";
          case SigningAlgorithmSpec::ECDSA_SHA_384:
            return "ECDSA_SHA_384";
          case SigningAlgorithmSpec::ECDSA_SHA_512:
            return "ECDSA_SHA_512";
          case SigningAlgorithmSpec::SM2DSA:
            return "SM2DSA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningAlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
