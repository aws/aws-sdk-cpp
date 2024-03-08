/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ReplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace ReplicationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int PAUSING_HASH = HashingUtils::HashString("PAUSING");


        ReplicationStatus GetReplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ReplicationStatus::ENABLED;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return ReplicationStatus::ENABLING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicationStatus::DELETING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ReplicationStatus::ERROR_;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return ReplicationStatus::PAUSED;
          }
          else if (hashCode == PAUSING_HASH)
          {
            return ReplicationStatus::PAUSING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationStatus>(hashCode);
          }

          return ReplicationStatus::NOT_SET;
        }

        Aws::String GetNameForReplicationStatus(ReplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case ReplicationStatus::NOT_SET:
            return {};
          case ReplicationStatus::ENABLED:
            return "ENABLED";
          case ReplicationStatus::ENABLING:
            return "ENABLING";
          case ReplicationStatus::DELETING:
            return "DELETING";
          case ReplicationStatus::ERROR_:
            return "ERROR";
          case ReplicationStatus::PAUSED:
            return "PAUSED";
          case ReplicationStatus::PAUSING:
            return "PAUSING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationStatusMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
