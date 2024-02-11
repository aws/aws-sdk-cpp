/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OutputNotebookFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace OutputNotebookFormatMapper
      {

        static const int HTML_HASH = HashingUtils::HashString("HTML");


        OutputNotebookFormat GetOutputNotebookFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTML_HASH)
          {
            return OutputNotebookFormat::HTML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputNotebookFormat>(hashCode);
          }

          return OutputNotebookFormat::NOT_SET;
        }

        Aws::String GetNameForOutputNotebookFormat(OutputNotebookFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputNotebookFormat::NOT_SET:
            return {};
          case OutputNotebookFormat::HTML:
            return "HTML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputNotebookFormatMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
