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

#include <aws/comprehend/model/DocumentClassifierMode.h>
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
      namespace DocumentClassifierModeMapper
      {

        static const int MULTI_CLASS_HASH = HashingUtils::HashString("MULTI_CLASS");
        static const int MULTI_LABEL_HASH = HashingUtils::HashString("MULTI_LABEL");


        DocumentClassifierMode GetDocumentClassifierModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_CLASS_HASH)
          {
            return DocumentClassifierMode::MULTI_CLASS;
          }
          else if (hashCode == MULTI_LABEL_HASH)
          {
            return DocumentClassifierMode::MULTI_LABEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentClassifierMode>(hashCode);
          }

          return DocumentClassifierMode::NOT_SET;
        }

        Aws::String GetNameForDocumentClassifierMode(DocumentClassifierMode enumValue)
        {
          switch(enumValue)
          {
          case DocumentClassifierMode::MULTI_CLASS:
            return "MULTI_CLASS";
          case DocumentClassifierMode::MULTI_LABEL:
            return "MULTI_LABEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentClassifierModeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
