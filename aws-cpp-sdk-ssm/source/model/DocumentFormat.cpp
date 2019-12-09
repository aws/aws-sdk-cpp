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

#include <aws/ssm/model/DocumentFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentFormatMapper
      {

        static const int YAML_HASH = HashingUtils::HashString("YAML");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        DocumentFormat GetDocumentFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YAML_HASH)
          {
            return DocumentFormat::YAML;
          }
          else if (hashCode == JSON_HASH)
          {
            return DocumentFormat::JSON;
          }
          else if (hashCode == TEXT_HASH)
          {
            return DocumentFormat::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentFormat>(hashCode);
          }

          return DocumentFormat::NOT_SET;
        }

        Aws::String GetNameForDocumentFormat(DocumentFormat enumValue)
        {
          switch(enumValue)
          {
          case DocumentFormat::YAML:
            return "YAML";
          case DocumentFormat::JSON:
            return "JSON";
          case DocumentFormat::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentFormatMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
