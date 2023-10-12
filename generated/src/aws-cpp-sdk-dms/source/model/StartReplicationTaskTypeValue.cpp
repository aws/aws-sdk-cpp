/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartReplicationTaskTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace StartReplicationTaskTypeValueMapper
      {

        static constexpr uint32_t start_replication_HASH = ConstExprHashingUtils::HashString("start-replication");
        static constexpr uint32_t resume_processing_HASH = ConstExprHashingUtils::HashString("resume-processing");
        static constexpr uint32_t reload_target_HASH = ConstExprHashingUtils::HashString("reload-target");


        StartReplicationTaskTypeValue GetStartReplicationTaskTypeValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == start_replication_HASH)
          {
            return StartReplicationTaskTypeValue::start_replication;
          }
          else if (hashCode == resume_processing_HASH)
          {
            return StartReplicationTaskTypeValue::resume_processing;
          }
          else if (hashCode == reload_target_HASH)
          {
            return StartReplicationTaskTypeValue::reload_target;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartReplicationTaskTypeValue>(hashCode);
          }

          return StartReplicationTaskTypeValue::NOT_SET;
        }

        Aws::String GetNameForStartReplicationTaskTypeValue(StartReplicationTaskTypeValue enumValue)
        {
          switch(enumValue)
          {
          case StartReplicationTaskTypeValue::NOT_SET:
            return {};
          case StartReplicationTaskTypeValue::start_replication:
            return "start-replication";
          case StartReplicationTaskTypeValue::resume_processing:
            return "resume-processing";
          case StartReplicationTaskTypeValue::reload_target:
            return "reload-target";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StartReplicationTaskTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
