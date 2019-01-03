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

#include <aws/glue/model/Language.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace LanguageMapper
      {

        static const int PYTHON_HASH = HashingUtils::HashString("PYTHON");
        static const int SCALA_HASH = HashingUtils::HashString("SCALA");


        Language GetLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PYTHON_HASH)
          {
            return Language::PYTHON;
          }
          else if (hashCode == SCALA_HASH)
          {
            return Language::SCALA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Language>(hashCode);
          }

          return Language::NOT_SET;
        }

        Aws::String GetNameForLanguage(Language enumValue)
        {
          switch(enumValue)
          {
          case Language::PYTHON:
            return "PYTHON";
          case Language::SCALA:
            return "SCALA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
