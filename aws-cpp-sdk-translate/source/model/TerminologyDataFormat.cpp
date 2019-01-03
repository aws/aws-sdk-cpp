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

#include <aws/translate/model/TerminologyDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace TerminologyDataFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int TMX_HASH = HashingUtils::HashString("TMX");


        TerminologyDataFormat GetTerminologyDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return TerminologyDataFormat::CSV;
          }
          else if (hashCode == TMX_HASH)
          {
            return TerminologyDataFormat::TMX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TerminologyDataFormat>(hashCode);
          }

          return TerminologyDataFormat::NOT_SET;
        }

        Aws::String GetNameForTerminologyDataFormat(TerminologyDataFormat enumValue)
        {
          switch(enumValue)
          {
          case TerminologyDataFormat::CSV:
            return "CSV";
          case TerminologyDataFormat::TMX:
            return "TMX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TerminologyDataFormatMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
