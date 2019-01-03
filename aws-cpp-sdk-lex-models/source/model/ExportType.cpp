/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
