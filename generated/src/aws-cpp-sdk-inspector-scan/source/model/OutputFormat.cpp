/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector-scan/model/OutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace inspectorscan
  {
    namespace Model
    {
      namespace OutputFormatMapper
      {

        static const int CYCLONE_DX_1_5_HASH = HashingUtils::HashString("CYCLONE_DX_1_5");
        static const int INSPECTOR_HASH = HashingUtils::HashString("INSPECTOR");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CYCLONE_DX_1_5_HASH)
          {
            return OutputFormat::CYCLONE_DX_1_5;
          }
          else if (hashCode == INSPECTOR_HASH)
          {
            return OutputFormat::INSPECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputFormat>(hashCode);
          }

          return OutputFormat::NOT_SET;
        }

        Aws::String GetNameForOutputFormat(OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputFormat::NOT_SET:
            return {};
          case OutputFormat::CYCLONE_DX_1_5:
            return "CYCLONE_DX_1_5";
          case OutputFormat::INSPECTOR:
            return "INSPECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace inspectorscan
} // namespace Aws
