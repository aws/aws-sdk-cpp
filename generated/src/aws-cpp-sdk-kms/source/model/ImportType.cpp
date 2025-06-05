/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ImportType.h>
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
      namespace ImportTypeMapper
      {

        static const int NEW_KEY_MATERIAL_HASH = HashingUtils::HashString("NEW_KEY_MATERIAL");
        static const int EXISTING_KEY_MATERIAL_HASH = HashingUtils::HashString("EXISTING_KEY_MATERIAL");


        ImportType GetImportTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_KEY_MATERIAL_HASH)
          {
            return ImportType::NEW_KEY_MATERIAL;
          }
          else if (hashCode == EXISTING_KEY_MATERIAL_HASH)
          {
            return ImportType::EXISTING_KEY_MATERIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportType>(hashCode);
          }

          return ImportType::NOT_SET;
        }

        Aws::String GetNameForImportType(ImportType enumValue)
        {
          switch(enumValue)
          {
          case ImportType::NOT_SET:
            return {};
          case ImportType::NEW_KEY_MATERIAL:
            return "NEW_KEY_MATERIAL";
          case ImportType::EXISTING_KEY_MATERIAL:
            return "EXISTING_KEY_MATERIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
