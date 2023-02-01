/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ExportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ExportTypeMapper
      {

        static const int ALEXA_SKILLS_KIT_HASH = HashingUtils::HashString("ALEXA_SKILLS_KIT");
        static const int LEX_HASH = HashingUtils::HashString("LEX");


        ExportType GetExportTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALEXA_SKILLS_KIT_HASH)
          {
            return ExportType::ALEXA_SKILLS_KIT;
          }
          else if (hashCode == LEX_HASH)
          {
            return ExportType::LEX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportType>(hashCode);
          }

          return ExportType::NOT_SET;
        }

        Aws::String GetNameForExportType(ExportType enumValue)
        {
          switch(enumValue)
          {
          case ExportType::ALEXA_SKILLS_KIT:
            return "ALEXA_SKILLS_KIT";
          case ExportType::LEX:
            return "LEX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
