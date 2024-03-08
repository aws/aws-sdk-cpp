/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/AugmentedManifestsDocumentTypeFormat.h>
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
      namespace AugmentedManifestsDocumentTypeFormatMapper
      {

        static const int PLAIN_TEXT_DOCUMENT_HASH = HashingUtils::HashString("PLAIN_TEXT_DOCUMENT");
        static const int SEMI_STRUCTURED_DOCUMENT_HASH = HashingUtils::HashString("SEMI_STRUCTURED_DOCUMENT");


        AugmentedManifestsDocumentTypeFormat GetAugmentedManifestsDocumentTypeFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_DOCUMENT_HASH)
          {
            return AugmentedManifestsDocumentTypeFormat::PLAIN_TEXT_DOCUMENT;
          }
          else if (hashCode == SEMI_STRUCTURED_DOCUMENT_HASH)
          {
            return AugmentedManifestsDocumentTypeFormat::SEMI_STRUCTURED_DOCUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AugmentedManifestsDocumentTypeFormat>(hashCode);
          }

          return AugmentedManifestsDocumentTypeFormat::NOT_SET;
        }

        Aws::String GetNameForAugmentedManifestsDocumentTypeFormat(AugmentedManifestsDocumentTypeFormat enumValue)
        {
          switch(enumValue)
          {
          case AugmentedManifestsDocumentTypeFormat::NOT_SET:
            return {};
          case AugmentedManifestsDocumentTypeFormat::PLAIN_TEXT_DOCUMENT:
            return "PLAIN_TEXT_DOCUMENT";
          case AugmentedManifestsDocumentTypeFormat::SEMI_STRUCTURED_DOCUMENT:
            return "SEMI_STRUCTURED_DOCUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AugmentedManifestsDocumentTypeFormatMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
