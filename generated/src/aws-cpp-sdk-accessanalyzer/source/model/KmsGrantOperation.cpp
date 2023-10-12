/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/KmsGrantOperation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace KmsGrantOperationMapper
      {

        static constexpr uint32_t CreateGrant_HASH = ConstExprHashingUtils::HashString("CreateGrant");
        static constexpr uint32_t Decrypt_HASH = ConstExprHashingUtils::HashString("Decrypt");
        static constexpr uint32_t DescribeKey_HASH = ConstExprHashingUtils::HashString("DescribeKey");
        static constexpr uint32_t Encrypt_HASH = ConstExprHashingUtils::HashString("Encrypt");
        static constexpr uint32_t GenerateDataKey_HASH = ConstExprHashingUtils::HashString("GenerateDataKey");
        static constexpr uint32_t GenerateDataKeyPair_HASH = ConstExprHashingUtils::HashString("GenerateDataKeyPair");
        static constexpr uint32_t GenerateDataKeyPairWithoutPlaintext_HASH = ConstExprHashingUtils::HashString("GenerateDataKeyPairWithoutPlaintext");
        static constexpr uint32_t GenerateDataKeyWithoutPlaintext_HASH = ConstExprHashingUtils::HashString("GenerateDataKeyWithoutPlaintext");
        static constexpr uint32_t GetPublicKey_HASH = ConstExprHashingUtils::HashString("GetPublicKey");
        static constexpr uint32_t ReEncryptFrom_HASH = ConstExprHashingUtils::HashString("ReEncryptFrom");
        static constexpr uint32_t ReEncryptTo_HASH = ConstExprHashingUtils::HashString("ReEncryptTo");
        static constexpr uint32_t RetireGrant_HASH = ConstExprHashingUtils::HashString("RetireGrant");
        static constexpr uint32_t Sign_HASH = ConstExprHashingUtils::HashString("Sign");
        static constexpr uint32_t Verify_HASH = ConstExprHashingUtils::HashString("Verify");


        KmsGrantOperation GetKmsGrantOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateGrant_HASH)
          {
            return KmsGrantOperation::CreateGrant;
          }
          else if (hashCode == Decrypt_HASH)
          {
            return KmsGrantOperation::Decrypt;
          }
          else if (hashCode == DescribeKey_HASH)
          {
            return KmsGrantOperation::DescribeKey;
          }
          else if (hashCode == Encrypt_HASH)
          {
            return KmsGrantOperation::Encrypt;
          }
          else if (hashCode == GenerateDataKey_HASH)
          {
            return KmsGrantOperation::GenerateDataKey;
          }
          else if (hashCode == GenerateDataKeyPair_HASH)
          {
            return KmsGrantOperation::GenerateDataKeyPair;
          }
          else if (hashCode == GenerateDataKeyPairWithoutPlaintext_HASH)
          {
            return KmsGrantOperation::GenerateDataKeyPairWithoutPlaintext;
          }
          else if (hashCode == GenerateDataKeyWithoutPlaintext_HASH)
          {
            return KmsGrantOperation::GenerateDataKeyWithoutPlaintext;
          }
          else if (hashCode == GetPublicKey_HASH)
          {
            return KmsGrantOperation::GetPublicKey;
          }
          else if (hashCode == ReEncryptFrom_HASH)
          {
            return KmsGrantOperation::ReEncryptFrom;
          }
          else if (hashCode == ReEncryptTo_HASH)
          {
            return KmsGrantOperation::ReEncryptTo;
          }
          else if (hashCode == RetireGrant_HASH)
          {
            return KmsGrantOperation::RetireGrant;
          }
          else if (hashCode == Sign_HASH)
          {
            return KmsGrantOperation::Sign;
          }
          else if (hashCode == Verify_HASH)
          {
            return KmsGrantOperation::Verify;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KmsGrantOperation>(hashCode);
          }

          return KmsGrantOperation::NOT_SET;
        }

        Aws::String GetNameForKmsGrantOperation(KmsGrantOperation enumValue)
        {
          switch(enumValue)
          {
          case KmsGrantOperation::NOT_SET:
            return {};
          case KmsGrantOperation::CreateGrant:
            return "CreateGrant";
          case KmsGrantOperation::Decrypt:
            return "Decrypt";
          case KmsGrantOperation::DescribeKey:
            return "DescribeKey";
          case KmsGrantOperation::Encrypt:
            return "Encrypt";
          case KmsGrantOperation::GenerateDataKey:
            return "GenerateDataKey";
          case KmsGrantOperation::GenerateDataKeyPair:
            return "GenerateDataKeyPair";
          case KmsGrantOperation::GenerateDataKeyPairWithoutPlaintext:
            return "GenerateDataKeyPairWithoutPlaintext";
          case KmsGrantOperation::GenerateDataKeyWithoutPlaintext:
            return "GenerateDataKeyWithoutPlaintext";
          case KmsGrantOperation::GetPublicKey:
            return "GetPublicKey";
          case KmsGrantOperation::ReEncryptFrom:
            return "ReEncryptFrom";
          case KmsGrantOperation::ReEncryptTo:
            return "ReEncryptTo";
          case KmsGrantOperation::RetireGrant:
            return "RetireGrant";
          case KmsGrantOperation::Sign:
            return "Sign";
          case KmsGrantOperation::Verify:
            return "Verify";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KmsGrantOperationMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
