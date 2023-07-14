/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogEncryptionMode.h>
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
      namespace CatalogEncryptionModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE-KMS");


        CatalogEncryptionMode GetCatalogEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CatalogEncryptionMode::DISABLED;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return CatalogEncryptionMode::SSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CatalogEncryptionMode>(hashCode);
          }

          return CatalogEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForCatalogEncryptionMode(CatalogEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case CatalogEncryptionMode::DISABLED:
            return "DISABLED";
          case CatalogEncryptionMode::SSE_KMS:
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

      } // namespace CatalogEncryptionModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
