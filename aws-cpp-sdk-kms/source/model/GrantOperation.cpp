/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int CreateGrant_HASH = HashingUtils::HashString("CreateGrant");
        static const int RetireGrant_HASH = HashingUtils::HashString("RetireGrant");
        static const int DescribeKey_HASH = HashingUtils::HashString("DescribeKey");


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
          case GrantOperation::CreateGrant:
            return "CreateGrant";
          case GrantOperation::RetireGrant:
            return "RetireGrant";
          case GrantOperation::DescribeKey:
            return "DescribeKey";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GrantOperationMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
