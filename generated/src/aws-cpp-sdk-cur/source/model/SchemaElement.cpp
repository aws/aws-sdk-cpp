/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/SchemaElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace SchemaElementMapper
      {

        static constexpr uint32_t RESOURCES_HASH = ConstExprHashingUtils::HashString("RESOURCES");
        static constexpr uint32_t SPLIT_COST_ALLOCATION_DATA_HASH = ConstExprHashingUtils::HashString("SPLIT_COST_ALLOCATION_DATA");


        SchemaElement GetSchemaElementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCES_HASH)
          {
            return SchemaElement::RESOURCES;
          }
          else if (hashCode == SPLIT_COST_ALLOCATION_DATA_HASH)
          {
            return SchemaElement::SPLIT_COST_ALLOCATION_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaElement>(hashCode);
          }

          return SchemaElement::NOT_SET;
        }

        Aws::String GetNameForSchemaElement(SchemaElement enumValue)
        {
          switch(enumValue)
          {
          case SchemaElement::NOT_SET:
            return {};
          case SchemaElement::RESOURCES:
            return "RESOURCES";
          case SchemaElement::SPLIT_COST_ALLOCATION_DATA:
            return "SPLIT_COST_ALLOCATION_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaElementMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
