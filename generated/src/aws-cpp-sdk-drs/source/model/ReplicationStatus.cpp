/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ReplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace ReplicationStatusMapper
      {

        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int PROTECTED_HASH = HashingUtils::HashString("PROTECTED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ReplicationStatus GetReplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return ReplicationStatus::STOPPED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReplicationStatus::IN_PROGRESS;
          }
          else if (hashCode == PROTECTED_HASH)
          {
            return ReplicationStatus::PROTECTED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ReplicationStatus::ERROR_;
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
          case ReplicationStatus::STOPPED:
            return "STOPPED";
          case ReplicationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReplicationStatus::PROTECTED:
            return "PROTECTED";
          case ReplicationStatus::ERROR_:
            return "ERROR";
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
  } // namespace drs
} // namespace Aws
