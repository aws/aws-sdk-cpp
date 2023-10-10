/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AnalysisFormatMapper
      {

        static const int SQL_HASH = HashingUtils::HashString("SQL");


        AnalysisFormat GetAnalysisFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SQL_HASH)
          {
            return AnalysisFormat::SQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisFormat>(hashCode);
          }

          return AnalysisFormat::NOT_SET;
        }

        Aws::String GetNameForAnalysisFormat(AnalysisFormat enumValue)
        {
          switch(enumValue)
          {
          case AnalysisFormat::NOT_SET:
            return {};
          case AnalysisFormat::SQL:
            return "SQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisFormatMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
