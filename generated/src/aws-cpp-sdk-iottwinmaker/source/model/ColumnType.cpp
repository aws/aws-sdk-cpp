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

        static constexpr uint32_t NODE_HASH = ConstExprHashingUtils::HashString("NODE");
        static constexpr uint32_t EDGE_HASH = ConstExprHashingUtils::HashString("EDGE");
        static constexpr uint32_t VALUE_HASH = ConstExprHashingUtils::HashString("VALUE");


        ColumnType GetColumnTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ColumnType::NOT_SET:
            return {};
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
