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

        static const int CreateGrant_HASH = HashingUtils::HashString("CreateGrant");
        static const int Decrypt_HASH = HashingUtils::HashString("Decrypt");
        static const int DescribeKey_HASH = HashingUtils::HashString("DescribeKey");
        static const int Encrypt_HASH = HashingUtils::HashString("Encrypt");
        static const int GenerateDataKey_HASH = HashingUtils::HashString("GenerateDataKey");
        static const int GenerateDataKeyPair_HASH = HashingUtils::HashString("GenerateDataKeyPair");
        static const int GenerateDataKeyPairWithoutPlaintext_HASH = HashingUtils::HashString("GenerateDataKeyPairWithoutPlaintext");
        static const int GenerateDataKeyWithoutPlaintext_HASH = HashingUtils::HashString("GenerateDataKeyWithoutPlaintext");
        static const int GetPublicKey_HASH = HashingUtils::HashString("GetPublicKey");
        static const int ReEncryptFrom_HASH = HashingUtils::HashString("ReEncryptFrom");
        static const int ReEncryptTo_HASH = HashingUtils::HashString("ReEncryptTo");
        static const int RetireGrant_HASH = HashingUtils::HashString("RetireGrant");
        static const int Sign_HASH = HashingUtils::HashString("Sign");
        static const int Verify_HASH = HashingUtils::HashString("Verify");


        KmsGrantOperation GetKmsGrantOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
