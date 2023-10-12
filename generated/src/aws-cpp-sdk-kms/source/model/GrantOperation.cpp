/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GrantOperation.h>
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
      namespace GrantOperationMapper
      {

        static constexpr uint32_t Decrypt_HASH = ConstExprHashingUtils::HashString("Decrypt");
        static constexpr uint32_t Encrypt_HASH = ConstExprHashingUtils::HashString("Encrypt");
        static constexpr uint32_t GenerateDataKey_HASH = ConstExprHashingUtils::HashString("GenerateDataKey");
        static constexpr uint32_t GenerateDataKeyWithoutPlaintext_HASH = ConstExprHashingUtils::HashString("GenerateDataKeyWithoutPlaintext");
        static constexpr uint32_t ReEncryptFrom_HASH = ConstExprHashingUtils::HashString("ReEncryptFrom");
        static constexpr uint32_t ReEncryptTo_HASH = ConstExprHashingUtils::HashString("ReEncryptTo");
        static constexpr uint32_t Sign_HASH = ConstExprHashingUtils::HashString("Sign");
        static constexpr uint32_t Verify_HASH = ConstExprHashingUtils::HashString("Verify");
        static constexpr uint32_t GetPublicKey_HASH = ConstExprHashingUtils::HashString("GetPublicKey");
        static constexpr uint32_t CreateGrant_HASH = ConstExprHashingUtils::HashString("CreateGrant");
        static constexpr uint32_t RetireGrant_HASH = ConstExprHashingUtils::HashString("RetireGrant");
        static constexpr uint32_t DescribeKey_HASH = ConstExprHashingUtils::HashString("DescribeKey");
        static constexpr uint32_t GenerateDataKeyPair_HASH = ConstExprHashingUtils::HashString("GenerateDataKeyPair");
        static constexpr uint32_t GenerateDataKeyPairWithoutPlaintext_HASH = ConstExprHashingUtils::HashString("GenerateDataKeyPairWithoutPlaintext");
        static constexpr uint32_t GenerateMac_HASH = ConstExprHashingUtils::HashString("GenerateMac");
        static constexpr uint32_t VerifyMac_HASH = ConstExprHashingUtils::HashString("VerifyMac");


        GrantOperation GetGrantOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Decrypt_HASH)
          {
            return GrantOperation::Decrypt;
          }
          else if (hashCode == Encrypt_HASH)
          {
            return GrantOperation::Encrypt;
          }
          else if (hashCode == GenerateDataKey_HASH)
          {
            return GrantOperation::GenerateDataKey;
          }
          else if (hashCode == GenerateDataKeyWithoutPlaintext_HASH)
          {
            return GrantOperation::GenerateDataKeyWithoutPlaintext;
          }
          else if (hashCode == ReEncryptFrom_HASH)
          {
            return GrantOperation::ReEncryptFrom;
          }
          else if (hashCode == ReEncryptTo_HASH)
          {
            return GrantOperation::ReEncryptTo;
          }
          else if (hashCode == Sign_HASH)
          {
            return GrantOperation::Sign;
          }
          else if (hashCode == Verify_HASH)
          {
            return GrantOperation::Verify;
          }
          else if (hashCode == GetPublicKey_HASH)
          {
            return GrantOperation::GetPublicKey;
          }
          else if (hashCode == CreateGrant_HASH)
          {
            return GrantOperation::CreateGrant;
          }
          else if (hashCode == RetireGrant_HASH)
          {
            return GrantOperation::RetireGrant;
          }
          else if (hashCode == DescribeKey_HASH)
          {
            return GrantOperation::DescribeKey;
          }
          else if (hashCode == GenerateDataKeyPair_HASH)
          {
            return GrantOperation::GenerateDataKeyPair;
          }
          else if (hashCode == GenerateDataKeyPairWithoutPlaintext_HASH)
          {
            return GrantOperation::GenerateDataKeyPairWithoutPlaintext;
          }
          else if (hashCode == GenerateMac_HASH)
          {
            return GrantOperation::GenerateMac;
          }
          else if (hashCode == VerifyMac_HASH)
          {
            return GrantOperation::VerifyMac;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GrantOperation>(hashCode);
          }

          return GrantOperation::NOT_SET;
        }

        Aws::String GetNameForGrantOperation(GrantOperation enumValue)
        {
          switch(enumValue)
          {
          case GrantOperation::NOT_SET:
            return {};
          case GrantOperation::Decrypt:
            return "Decrypt";
          case GrantOperation::Encrypt:
            return "Encrypt";
          case GrantOperation::GenerateDataKey:
            return "GenerateDataKey";
          case GrantOperation::GenerateDataKeyWithoutPlaintext:
            return "GenerateDataKeyWithoutPlaintext";
          case GrantOperation::ReEncryptFrom:
            return "ReEncryptFrom";
          case GrantOperation::ReEncryptTo:
            return "ReEncryptTo";
          case GrantOperation::Sign:
            return "Sign";
          case GrantOperation::Verify:
            return "Verify";
          case GrantOperation::GetPublicKey:
            return "GetPublicKey";
          case GrantOperation::CreateGrant:
            return "CreateGrant";
          case GrantOperation::RetireGrant:
            return "RetireGrant";
          case GrantOperation::DescribeKey:
            return "DescribeKey";
          case GrantOperation::GenerateDataKeyPair:
            return "GenerateDataKeyPair";
          case GrantOperation::GenerateDataKeyPairWithoutPlaintext:
            return "GenerateDataKeyPairWithoutPlaintext";
          case GrantOperation::GenerateMac:
            return "GenerateMac";
          case GrantOperation::VerifyMac:
            return "VerifyMac";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GrantOperationMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
