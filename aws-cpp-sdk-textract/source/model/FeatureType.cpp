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

#include <aws/textract/model/FeatureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace FeatureTypeMapper
      {

        static const int TABLES_HASH = HashingUtils::HashString("TABLES");
        static const int FORMS_HASH = HashingUtils::HashString("FORMS");


        FeatureType GetFeatureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLES_HASH)
          {
            return FeatureType::TABLES;
          }
          else if (hashCode == FORMS_HASH)
          {
            return FeatureType::FORMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureType>(hashCode);
          }

          return FeatureType::NOT_SET;
        }

        Aws::String GetNameForFeatureType(FeatureType enumValue)
        {
          switch(enumValue)
          {
          case FeatureType::TABLES:
            return "TABLES";
          case FeatureType::FORMS:
            return "FORMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
