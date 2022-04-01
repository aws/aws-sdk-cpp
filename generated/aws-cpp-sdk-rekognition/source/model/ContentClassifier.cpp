/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ContentClassifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace ContentClassifierMapper
      {

        static const int FreeOfPersonallyIdentifiableInformation_HASH = HashingUtils::HashString("FreeOfPersonallyIdentifiableInformation");
        static const int FreeOfAdultContent_HASH = HashingUtils::HashString("FreeOfAdultContent");


        ContentClassifier GetContentClassifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FreeOfPersonallyIdentifiableInformation_HASH)
          {
            return ContentClassifier::FreeOfPersonallyIdentifiableInformation;
          }
          else if (hashCode == FreeOfAdultContent_HASH)
          {
            return ContentClassifier::FreeOfAdultContent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentClassifier>(hashCode);
          }

          return ContentClassifier::NOT_SET;
        }

        Aws::String GetNameForContentClassifier(ContentClassifier enumValue)
        {
          switch(enumValue)
          {
          case ContentClassifier::FreeOfPersonallyIdentifiableInformation:
            return "FreeOfPersonallyIdentifiableInformation";
          case ContentClassifier::FreeOfAdultContent:
            return "FreeOfAdultContent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentClassifierMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
