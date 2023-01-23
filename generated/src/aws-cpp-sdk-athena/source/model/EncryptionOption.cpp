/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/EncryptionOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace EncryptionOptionMapper
      {

        static const int SSE_S3_HASH = HashingUtils::HashString("SSE_S3");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE_KMS");
        static const int CSE_KMS_HASH = HashingUtils::HashString("CSE_KMS");


        EncryptionOption GetEncryptionOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSE_S3_HASH)
          {
            return EncryptionOption::SSE_S3;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return EncryptionOption::SSE_KMS;
          }
          else if (hashCode == CSE_KMS_HASH)
          {
            return EncryptionOption::CSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionOption>(hashCode);
          }

          return EncryptionOption::NOT_SET;
        }

        Aws::String GetNameForEncryptionOption(EncryptionOption enumValue)
        {
          switch(enumValue)
          {
          case EncryptionOption::SSE_S3:
            return "SSE_S3";
          case EncryptionOption::SSE_KMS:
            return "SSE_KMS";
          case EncryptionOption::CSE_KMS:
            return "CSE_KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionOptionMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
