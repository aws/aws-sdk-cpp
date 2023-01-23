/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ColumnType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace ColumnTypeMapper
      {

        static const int NODE_HASH = HashingUtils::HashString("NODE");
        static const int EDGE_HASH = HashingUtils::HashString("EDGE");
        static const int VALUE_HASH = HashingUtils::HashString("VALUE");


        ColumnType GetColumnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NODE_HASH)
          {
            return ColumnType::NODE;
          }
          else if (hashCode == EDGE_HASH)
          {
            return ColumnType::EDGE;
          }
          else if (hashCode == VALUE_HASH)
          {
            return ColumnType::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnType>(hashCode);
          }

          return ColumnType::NOT_SET;
        }

        Aws::String GetNameForColumnType(ColumnType enumValue)
        {
          switch(enumValue)
          {
          case ColumnType::NODE:
            return "NODE";
          case ColumnType::EDGE:
            return "EDGE";
          case ColumnType::VALUE:
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

      } // namespace ColumnTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
