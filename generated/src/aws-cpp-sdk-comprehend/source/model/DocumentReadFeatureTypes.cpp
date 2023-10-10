/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentReadFeatureTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DocumentReadFeatureTypesMapper
      {

        static const int TABLES_HASH = HashingUtils::HashString("TABLES");
        static const int FORMS_HASH = HashingUtils::HashString("FORMS");


        DocumentReadFeatureTypes GetDocumentReadFeatureTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLES_HASH)
          {
            return DocumentReadFeatureTypes::TABLES;
          }
          else if (hashCode == FORMS_HASH)
          {
            return DocumentReadFeatureTypes::FORMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentReadFeatureTypes>(hashCode);
          }

          return DocumentReadFeatureTypes::NOT_SET;
        }

        Aws::String GetNameForDocumentReadFeatureTypes(DocumentReadFeatureTypes enumValue)
        {
          switch(enumValue)
          {
          case DocumentReadFeatureTypes::NOT_SET:
            return {};
          case DocumentReadFeatureTypes::TABLES:
            return "TABLES";
          case DocumentReadFeatureTypes::FORMS:
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

      } // namespace DocumentReadFeatureTypesMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
