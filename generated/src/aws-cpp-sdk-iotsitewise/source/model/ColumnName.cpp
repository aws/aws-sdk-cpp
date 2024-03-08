/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ColumnName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ColumnNameMapper
      {

        static const int ALIAS_HASH = HashingUtils::HashString("ALIAS");
        static const int ASSET_ID_HASH = HashingUtils::HashString("ASSET_ID");
        static const int PROPERTY_ID_HASH = HashingUtils::HashString("PROPERTY_ID");
        static const int DATA_TYPE_HASH = HashingUtils::HashString("DATA_TYPE");
        static const int TIMESTAMP_SECONDS_HASH = HashingUtils::HashString("TIMESTAMP_SECONDS");
        static const int TIMESTAMP_NANO_OFFSET_HASH = HashingUtils::HashString("TIMESTAMP_NANO_OFFSET");
        static const int QUALITY_HASH = HashingUtils::HashString("QUALITY");
        static const int VALUE_HASH = HashingUtils::HashString("VALUE");


        ColumnName GetColumnNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALIAS_HASH)
          {
            return ColumnName::ALIAS;
          }
          else if (hashCode == ASSET_ID_HASH)
          {
            return ColumnName::ASSET_ID;
          }
          else if (hashCode == PROPERTY_ID_HASH)
          {
            return ColumnName::PROPERTY_ID;
          }
          else if (hashCode == DATA_TYPE_HASH)
          {
            return ColumnName::DATA_TYPE;
          }
          else if (hashCode == TIMESTAMP_SECONDS_HASH)
          {
            return ColumnName::TIMESTAMP_SECONDS;
          }
          else if (hashCode == TIMESTAMP_NANO_OFFSET_HASH)
          {
            return ColumnName::TIMESTAMP_NANO_OFFSET;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return ColumnName::QUALITY;
          }
          else if (hashCode == VALUE_HASH)
          {
            return ColumnName::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnName>(hashCode);
          }

          return ColumnName::NOT_SET;
        }

        Aws::String GetNameForColumnName(ColumnName enumValue)
        {
          switch(enumValue)
          {
          case ColumnName::NOT_SET:
            return {};
          case ColumnName::ALIAS:
            return "ALIAS";
          case ColumnName::ASSET_ID:
            return "ASSET_ID";
          case ColumnName::PROPERTY_ID:
            return "PROPERTY_ID";
          case ColumnName::DATA_TYPE:
            return "DATA_TYPE";
          case ColumnName::TIMESTAMP_SECONDS:
            return "TIMESTAMP_SECONDS";
          case ColumnName::TIMESTAMP_NANO_OFFSET:
            return "TIMESTAMP_NANO_OFFSET";
          case ColumnName::QUALITY:
            return "QUALITY";
          case ColumnName::VALUE:
            return "VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnNameMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
