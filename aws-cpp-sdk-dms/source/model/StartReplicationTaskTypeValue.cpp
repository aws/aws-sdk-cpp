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

        static const int start_replication_HASH = HashingUtils::HashString("start-replication");
        static const int resume_processing_HASH = HashingUtils::HashString("resume-processing");
        static const int reload_target_HASH = HashingUtils::HashString("reload-target");


        StartReplicationTaskTypeValue GetStartReplicationTaskTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
