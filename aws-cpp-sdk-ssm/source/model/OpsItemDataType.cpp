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

#include <aws/ssm/model/OpsItemDataType.h>
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
      namespace OpsItemDataTypeMapper
      {

        static const int SearchableString_HASH = HashingUtils::HashString("SearchableString");
        static const int String_HASH = HashingUtils::HashString("String");


        OpsItemDataType GetOpsItemDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SearchableString_HASH)
          {
            return OpsItemDataType::SearchableString;
          }
          else if (hashCode == String_HASH)
          {
            return OpsItemDataType::String;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemDataType>(hashCode);
          }

          return OpsItemDataType::NOT_SET;
        }

        Aws::String GetNameForOpsItemDataType(OpsItemDataType enumValue)
        {
          switch(enumValue)
          {
          case OpsItemDataType::SearchableString:
            return "SearchableString";
          case OpsItemDataType::String:
            return "String";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemDataTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
