/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExportFilterName.h>
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
      namespace ExportFilterNameMapper
      {

        static const int ExportResourceType_HASH = HashingUtils::HashString("ExportResourceType");


        ExportFilterName GetExportFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExportResourceType_HASH)
          {
            return ExportFilterName::ExportResourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportFilterName>(hashCode);
          }

          return ExportFilterName::NOT_SET;
        }

        Aws::String GetNameForExportFilterName(ExportFilterName enumValue)
        {
          switch(enumValue)
          {
          case ExportFilterName::NOT_SET:
            return {};
          case ExportFilterName::ExportResourceType:
            return "ExportResourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
