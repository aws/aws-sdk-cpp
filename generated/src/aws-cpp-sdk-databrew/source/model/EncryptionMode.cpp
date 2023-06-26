/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/EncryptionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace EncryptionModeMapper
      {

        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE-KMS");
        static const int SSE_S3_HASH = HashingUtils::HashString("SSE-S3");


        EncryptionMode GetEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSE_KMS_HASH)
          {
            return EncryptionMode::SSE_KMS;
          }
          else if (hashCode == SSE_S3_HASH)
          {
            return EncryptionMode::SSE_S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionMode>(hashCode);
          }

          return EncryptionMode::NOT_SET;
        }

        Aws::String GetNameForEncryptionMode(EncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case EncryptionMode::SSE_KMS:
            return "SSE-KMS";
          case EncryptionMode::SSE_S3:
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

      } // namespace EncryptionModeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
