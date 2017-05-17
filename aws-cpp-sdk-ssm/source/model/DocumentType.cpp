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

#include <aws/ssm/model/DocumentType.h>
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
      namespace DocumentTypeMapper
      {

        static const int Command_HASH = HashingUtils::HashString("Command");
        static const int Policy_HASH = HashingUtils::HashString("Policy");
        static const int Automation_HASH = HashingUtils::HashString("Automation");


        DocumentType GetDocumentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Command_HASH)
          {
            return DocumentType::Command;
          }
          else if (hashCode == Policy_HASH)
          {
            return DocumentType::Policy;
          }
          else if (hashCode == Automation_HASH)
          {
            return DocumentType::Automation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentType>(hashCode);
          }

          return DocumentType::NOT_SET;
        }

        Aws::String GetNameForDocumentType(DocumentType enumValue)
        {
          switch(enumValue)
          {
          case DocumentType::Command:
            return "Command";
          case DocumentType::Policy:
            return "Policy";
          case DocumentType::Automation:
            return "Automation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DocumentTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
