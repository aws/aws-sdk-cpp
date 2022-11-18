/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/DatabaseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace DatabaseStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        DatabaseStatus GetDatabaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DatabaseStatus::RUNNING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DatabaseStatus::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DatabaseStatus::STOPPED;
          }
          else if (hashCode == WARNING_HASH)
          {
            return DatabaseStatus::WARNING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DatabaseStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseStatus>(hashCode);
          }

          return DatabaseStatus::NOT_SET;
        }

        Aws::String GetNameForDatabaseStatus(DatabaseStatus enumValue)
        {
          switch(enumValue)
          {
          case DatabaseStatus::RUNNING:
            return "RUNNING";
          case DatabaseStatus::STARTING:
            return "STARTING";
          case DatabaseStatus::STOPPED:
            return "STOPPED";
          case DatabaseStatus::WARNING:
            return "WARNING";
          case DatabaseStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
