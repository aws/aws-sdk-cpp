/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ReplicationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ReplicationTypeMapper
      {

        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");
        static const int REPLICA_HASH = HashingUtils::HashString("REPLICA");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ReplicationType GetReplicationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_HASH)
          {
            return ReplicationType::SOURCE;
          }
          else if (hashCode == REPLICA_HASH)
          {
            return ReplicationType::REPLICA;
          }
          else if (hashCode == NONE_HASH)
          {
            return ReplicationType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationType>(hashCode);
          }

          return ReplicationType::NOT_SET;
        }

        Aws::String GetNameForReplicationType(ReplicationType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationType::NOT_SET:
            return {};
          case ReplicationType::SOURCE:
            return "SOURCE";
          case ReplicationType::REPLICA:
            return "REPLICA";
          case ReplicationType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationTypeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
