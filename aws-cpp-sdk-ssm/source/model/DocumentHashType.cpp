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
#include <aws/ssm/model/DocumentHashType.h>
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
      namespace DocumentHashTypeMapper
      {

        static const int Sha256_HASH = HashingUtils::HashString("Sha256");
        static const int Sha1_HASH = HashingUtils::HashString("Sha1");


        DocumentHashType GetDocumentHashTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sha256_HASH)
          {
            return DocumentHashType::Sha256;
          }
          else if (hashCode == Sha1_HASH)
          {
            return DocumentHashType::Sha1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentHashType>(hashCode);
          }

          return DocumentHashType::NOT_SET;
        }

        Aws::String GetNameForDocumentHashType(DocumentHashType enumValue)
        {
          switch(enumValue)
          {
          case DocumentHashType::Sha256:
            return "Sha256";
          case DocumentHashType::Sha1:
            return "Sha1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DocumentHashTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
