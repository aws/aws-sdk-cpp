/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/ReplicationStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace ReplicationStatusTypeMapper
      {

        static const int REPLICATING_HASH = HashingUtils::HashString("REPLICATING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ReplicationStatusType GetReplicationStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLICATING_HASH)
          {
            return ReplicationStatusType::REPLICATING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReplicationStatusType::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationStatusType>(hashCode);
          }

          return ReplicationStatusType::NOT_SET;
        }

        Aws::String GetNameForReplicationStatusType(ReplicationStatusType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationStatusType::NOT_SET:
            return {};
          case ReplicationStatusType::REPLICATING:
            return "REPLICATING";
          case ReplicationStatusType::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationStatusTypeMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
