/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/EncryptionModeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace EncryptionModeValueMapper
      {

        static const int sse_s3_HASH = HashingUtils::HashString("sse-s3");
        static const int sse_kms_HASH = HashingUtils::HashString("sse-kms");


        EncryptionModeValue GetEncryptionModeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sse_s3_HASH)
          {
            return EncryptionModeValue::sse_s3;
          }
          else if (hashCode == sse_kms_HASH)
          {
            return EncryptionModeValue::sse_kms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionModeValue>(hashCode);
          }

          return EncryptionModeValue::NOT_SET;
        }

        Aws::String GetNameForEncryptionModeValue(EncryptionModeValue enumValue)
        {
          switch(enumValue)
          {
          case EncryptionModeValue::sse_s3:
            return "sse-s3";
          case EncryptionModeValue::sse_kms:
            return "sse-kms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionModeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
