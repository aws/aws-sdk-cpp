/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableOptimizerEventType.h>
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
      namespace TableOptimizerEventTypeMapper
      {

        static const int starting_HASH = HashingUtils::HashString("starting");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int in_progress_HASH = HashingUtils::HashString("in_progress");


        TableOptimizerEventType GetTableOptimizerEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == starting_HASH)
          {
            return TableOptimizerEventType::starting;
          }
          else if (hashCode == completed_HASH)
          {
            return TableOptimizerEventType::completed;
          }
          else if (hashCode == failed_HASH)
          {
            return TableOptimizerEventType::failed;
          }
          else if (hashCode == in_progress_HASH)
          {
            return TableOptimizerEventType::in_progress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableOptimizerEventType>(hashCode);
          }

          return TableOptimizerEventType::NOT_SET;
        }

        Aws::String GetNameForTableOptimizerEventType(TableOptimizerEventType enumValue)
        {
          switch(enumValue)
          {
          case TableOptimizerEventType::NOT_SET:
            return {};
          case TableOptimizerEventType::starting:
            return "starting";
          case TableOptimizerEventType::completed:
            return "completed";
          case TableOptimizerEventType::failed:
            return "failed";
          case TableOptimizerEventType::in_progress:
            return "in_progress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableOptimizerEventTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
