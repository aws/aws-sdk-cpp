/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableOptimizerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TableOptimizerTypeMapper
      {

        static const int compaction_HASH = HashingUtils::HashString("compaction");


        TableOptimizerType GetTableOptimizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == compaction_HASH)
          {
            return TableOptimizerType::compaction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableOptimizerType>(hashCode);
          }

          return TableOptimizerType::NOT_SET;
        }

        Aws::String GetNameForTableOptimizerType(TableOptimizerType enumValue)
        {
          switch(enumValue)
          {
          case TableOptimizerType::NOT_SET:
            return {};
          case TableOptimizerType::compaction:
            return "compaction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableOptimizerTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
