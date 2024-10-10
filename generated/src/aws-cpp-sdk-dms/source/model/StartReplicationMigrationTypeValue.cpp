/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartReplicationMigrationTypeValue.h>
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
      namespace StartReplicationMigrationTypeValueMapper
      {

        static const int reload_target_HASH = HashingUtils::HashString("reload-target");
        static const int resume_processing_HASH = HashingUtils::HashString("resume-processing");
        static const int start_replication_HASH = HashingUtils::HashString("start-replication");


        StartReplicationMigrationTypeValue GetStartReplicationMigrationTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == reload_target_HASH)
          {
            return StartReplicationMigrationTypeValue::reload_target;
          }
          else if (hashCode == resume_processing_HASH)
          {
            return StartReplicationMigrationTypeValue::resume_processing;
          }
          else if (hashCode == start_replication_HASH)
          {
            return StartReplicationMigrationTypeValue::start_replication;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartReplicationMigrationTypeValue>(hashCode);
          }

          return StartReplicationMigrationTypeValue::NOT_SET;
        }

        Aws::String GetNameForStartReplicationMigrationTypeValue(StartReplicationMigrationTypeValue enumValue)
        {
          switch(enumValue)
          {
          case StartReplicationMigrationTypeValue::NOT_SET:
            return {};
          case StartReplicationMigrationTypeValue::reload_target:
            return "reload-target";
          case StartReplicationMigrationTypeValue::resume_processing:
            return "resume-processing";
          case StartReplicationMigrationTypeValue::start_replication:
            return "start-replication";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StartReplicationMigrationTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
