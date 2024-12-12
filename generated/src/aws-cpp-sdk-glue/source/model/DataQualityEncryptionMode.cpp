/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityEncryptionMode.h>
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
      namespace DataQualityEncryptionModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE-KMS");


        DataQualityEncryptionMode GetDataQualityEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return DataQualityEncryptionMode::DISABLED;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return DataQualityEncryptionMode::SSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataQualityEncryptionMode>(hashCode);
          }

          return DataQualityEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForDataQualityEncryptionMode(DataQualityEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case DataQualityEncryptionMode::NOT_SET:
            return {};
          case DataQualityEncryptionMode::DISABLED:
            return "DISABLED";
          case DataQualityEncryptionMode::SSE_KMS:
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

      } // namespace DataQualityEncryptionModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
