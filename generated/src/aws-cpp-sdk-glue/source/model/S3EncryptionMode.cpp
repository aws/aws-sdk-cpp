/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3EncryptionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace S3EncryptionModeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t SSE_KMS_HASH = ConstExprHashingUtils::HashString("SSE-KMS");
        static constexpr uint32_t SSE_S3_HASH = ConstExprHashingUtils::HashString("SSE-S3");


        S3EncryptionMode GetS3EncryptionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return S3EncryptionMode::DISABLED;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return S3EncryptionMode::SSE_KMS;
          }
          else if (hashCode == SSE_S3_HASH)
          {
            return S3EncryptionMode::SSE_S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3EncryptionMode>(hashCode);
          }

          return S3EncryptionMode::NOT_SET;
        }

        Aws::String GetNameForS3EncryptionMode(S3EncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case S3EncryptionMode::NOT_SET:
            return {};
          case S3EncryptionMode::DISABLED:
            return "DISABLED";
          case S3EncryptionMode::SSE_KMS:
            return "SSE-KMS";
          case S3EncryptionMode::SSE_S3:
            return "SSE-S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3EncryptionModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
