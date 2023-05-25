/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerDataFormat.h>
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
      namespace EntityRecognizerDataFormatMapper
      {

        static const int COMPREHEND_CSV_HASH = HashingUtils::HashString("COMPREHEND_CSV");
        static const int AUGMENTED_MANIFEST_HASH = HashingUtils::HashString("AUGMENTED_MANIFEST");


        EntityRecognizerDataFormat GetEntityRecognizerDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPREHEND_CSV_HASH)
          {
            return EntityRecognizerDataFormat::COMPREHEND_CSV;
          }
          else if (hashCode == AUGMENTED_MANIFEST_HASH)
          {
            return EntityRecognizerDataFormat::AUGMENTED_MANIFEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityRecognizerDataFormat>(hashCode);
          }

          return EntityRecognizerDataFormat::NOT_SET;
        }

        Aws::String GetNameForEntityRecognizerDataFormat(EntityRecognizerDataFormat enumValue)
        {
          switch(enumValue)
          {
          case EntityRecognizerDataFormat::COMPREHEND_CSV:
            return "COMPREHEND_CSV";
          case EntityRecognizerDataFormat::AUGMENTED_MANIFEST:
            return "AUGMENTED_MANIFEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityRecognizerDataFormatMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
