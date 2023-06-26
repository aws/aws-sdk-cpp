/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/EncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace EncryptionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        EncryptionType GetEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return EncryptionType::NONE;
          }
          else if (hashCode == AES256_HASH)
          {
            return EncryptionType::AES256;
          }
          else if (hashCode == aws_kms_HASH)
          {
            return EncryptionType::aws_kms;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return EncryptionType::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionType>(hashCode);
          }

          return EncryptionType::NOT_SET;
        }

        Aws::String GetNameForEncryptionType(EncryptionType enumValue)
        {
          switch(enumValue)
          {
          case EncryptionType::NONE:
            return "NONE";
          case EncryptionType::AES256:
            return "AES256";
          case EncryptionType::aws_kms:
            return "aws:kms";
          case EncryptionType::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
