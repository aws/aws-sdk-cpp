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
        static const int retention_HASH = HashingUtils::HashString("retention");
        static const int orphan_file_deletion_HASH = HashingUtils::HashString("orphan_file_deletion");


        TableOptimizerType GetTableOptimizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == compaction_HASH)
          {
            return TableOptimizerType::compaction;
          }
          else if (hashCode == retention_HASH)
          {
            return TableOptimizerType::retention;
          }
          else if (hashCode == orphan_file_deletion_HASH)
          {
            return TableOptimizerType::orphan_file_deletion;
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
          case TableOptimizerType::retention:
            return "retention";
          case TableOptimizerType::orphan_file_deletion:
            return "orphan_file_deletion";
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
