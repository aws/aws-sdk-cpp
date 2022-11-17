/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int QUERIES_HASH = HashingUtils::HashString("QUERIES");
        static const int SIGNATURES_HASH = HashingUtils::HashString("SIGNATURES");


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
          else if (hashCode == QUERIES_HASH)
          {
            return FeatureType::QUERIES;
          }
          else if (hashCode == SIGNATURES_HASH)
          {
            return FeatureType::SIGNATURES;
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
          case FeatureType::QUERIES:
            return "QUERIES";
          case FeatureType::SIGNATURES:
            return "SIGNATURES";
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
