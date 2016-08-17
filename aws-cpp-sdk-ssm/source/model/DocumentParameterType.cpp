/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/DocumentParameterType.h>
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
      namespace DocumentParameterTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int StringList_HASH = HashingUtils::HashString("StringList");


        DocumentParameterType GetDocumentParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return DocumentParameterType::String;
          }
          else if (hashCode == StringList_HASH)
          {
            return DocumentParameterType::StringList;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentParameterType>(hashCode);
          }

          return DocumentParameterType::NOT_SET;
        }

        Aws::String GetNameForDocumentParameterType(DocumentParameterType enumValue)
        {
          switch(enumValue)
          {
          case DocumentParameterType::String:
            return "String";
          case DocumentParameterType::StringList:
            return "StringList";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DocumentParameterTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
