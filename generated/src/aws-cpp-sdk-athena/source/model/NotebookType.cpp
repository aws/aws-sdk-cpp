/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/NotebookType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace NotebookTypeMapper
      {

        static const int IPYNB_HASH = HashingUtils::HashString("IPYNB");


        NotebookType GetNotebookTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPYNB_HASH)
          {
            return NotebookType::IPYNB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookType>(hashCode);
          }

          return NotebookType::NOT_SET;
        }

        Aws::String GetNameForNotebookType(NotebookType enumValue)
        {
          switch(enumValue)
          {
          case NotebookType::IPYNB:
            return "IPYNB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookTypeMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
