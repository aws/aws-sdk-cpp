/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataLabelContent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DataLabelContentMapper
      {

        static const int VALUE_HASH = HashingUtils::HashString("VALUE");
        static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");
        static const int VALUE_AND_PERCENT_HASH = HashingUtils::HashString("VALUE_AND_PERCENT");


        DataLabelContent GetDataLabelContentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_HASH)
          {
            return DataLabelContent::VALUE;
          }
          else if (hashCode == PERCENT_HASH)
          {
            return DataLabelContent::PERCENT;
          }
          else if (hashCode == VALUE_AND_PERCENT_HASH)
          {
            return DataLabelContent::VALUE_AND_PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLabelContent>(hashCode);
          }

          return DataLabelContent::NOT_SET;
        }

        Aws::String GetNameForDataLabelContent(DataLabelContent enumValue)
        {
          switch(enumValue)
          {
          case DataLabelContent::VALUE:
            return "VALUE";
          case DataLabelContent::PERCENT:
            return "PERCENT";
          case DataLabelContent::VALUE_AND_PERCENT:
            return "VALUE_AND_PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLabelContentMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
