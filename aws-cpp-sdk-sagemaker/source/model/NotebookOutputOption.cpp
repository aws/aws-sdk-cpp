/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
