/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MLUserDataEncryptionModeString.h>
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
      namespace MLUserDataEncryptionModeStringMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE-KMS");


        MLUserDataEncryptionModeString GetMLUserDataEncryptionModeStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return MLUserDataEncryptionModeString::DISABLED;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return MLUserDataEncryptionModeString::SSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MLUserDataEncryptionModeString>(hashCode);
          }

          return MLUserDataEncryptionModeString::NOT_SET;
        }

        Aws::String GetNameForMLUserDataEncryptionModeString(MLUserDataEncryptionModeString enumValue)
        {
          switch(enumValue)
          {
          case MLUserDataEncryptionModeString::DISABLED:
            return "DISABLED";
          case MLUserDataEncryptionModeString::SSE_KMS:
            return "SSE-KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MLUserDataEncryptionModeStringMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
