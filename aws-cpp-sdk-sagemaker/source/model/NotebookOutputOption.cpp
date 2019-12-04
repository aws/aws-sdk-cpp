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

#include <aws/sagemaker/model/NotebookOutputOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace NotebookOutputOptionMapper
      {

        static const int Allowed_HASH = HashingUtils::HashString("Allowed");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        NotebookOutputOption GetNotebookOutputOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allowed_HASH)
          {
            return NotebookOutputOption::Allowed;
          }
          else if (hashCode == Disabled_HASH)
          {
            return NotebookOutputOption::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookOutputOption>(hashCode);
          }

          return NotebookOutputOption::NOT_SET;
        }

        Aws::String GetNameForNotebookOutputOption(NotebookOutputOption enumValue)
        {
          switch(enumValue)
          {
          case NotebookOutputOption::Allowed:
            return "Allowed";
          case NotebookOutputOption::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookOutputOptionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
