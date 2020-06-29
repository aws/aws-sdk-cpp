/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace DocumentHashTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
