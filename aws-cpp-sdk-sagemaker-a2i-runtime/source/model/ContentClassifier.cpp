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

#include <aws/sagemaker-a2i-runtime/model/ContentClassifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AugmentedAIRuntime
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
  } // namespace AugmentedAIRuntime
} // namespace Aws
