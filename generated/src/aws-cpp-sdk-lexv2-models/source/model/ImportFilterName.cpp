/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace ImportFilterNameMapper
      {

        static const int ImportResourceType_HASH = HashingUtils::HashString("ImportResourceType");


        ImportFilterName GetImportFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ImportResourceType_HASH)
          {
            return ImportFilterName::ImportResourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportFilterName>(hashCode);
          }

          return ImportFilterName::NOT_SET;
        }

        Aws::String GetNameForImportFilterName(ImportFilterName enumValue)
        {
          switch(enumValue)
          {
          case ImportFilterName::NOT_SET:
            return {};
          case ImportFilterName::ImportResourceType:
            return "ImportResourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
