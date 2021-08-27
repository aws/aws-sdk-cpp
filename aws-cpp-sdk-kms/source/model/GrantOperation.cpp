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

        static const int Decrypt_HASH = HashingUtils::HashString("Decrypt");
        static const int Encrypt_HASH = HashingUtils::HashString("Encrypt");
        static const int GenerateDataKey_HASH = HashingUtils::HashString("GenerateDataKey");
        static const int GenerateDataKeyWithoutPlaintext_HASH = HashingUtils::HashString("GenerateDataKeyWithoutPlaintext");
        static const int ReEncryptFrom_HASH = HashingUtils::HashString("ReEncryptFrom");
        static const int ReEncryptTo_HASH = HashingUtils::HashString("ReEncryptTo");
        static const int Sign_HASH = HashingUtils::HashString("Sign");
        static const int Verify_HASH = HashingUtils::HashString("Verify");
        static const int GetPublicKey_HASH = HashingUtils::HashString("GetPublicKey");
        static const int CreateGrant_HASH = HashingUtils::HashString("CreateGrant");
        static const int RetireGrant_HASH = HashingUtils::HashString("RetireGrant");
        static const int DescribeKey_HASH = HashingUtils::HashString("DescribeKey");
        static const int GenerateDataKeyPair_HASH = HashingUtils::HashString("GenerateDataKeyPair");
        static const int GenerateDataKeyPairWithoutPlaintext_HASH = HashingUtils::HashString("GenerateDataKeyPairWithoutPlaintext");


        GrantOperation GetGrantOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
