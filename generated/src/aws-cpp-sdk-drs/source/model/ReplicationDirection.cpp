/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ReplicationDirection.h>
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
      namespace ReplicationDirectionMapper
      {

        static const int FAILOVER_HASH = HashingUtils::HashString("FAILOVER");
        static const int FAILBACK_HASH = HashingUtils::HashString("FAILBACK");


        ReplicationDirection GetReplicationDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILOVER_HASH)
          {
            return ReplicationDirection::FAILOVER;
          }
          else if (hashCode == FAILBACK_HASH)
          {
            return ReplicationDirection::FAILBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationDirection>(hashCode);
          }

          return ReplicationDirection::NOT_SET;
        }

        Aws::String GetNameForReplicationDirection(ReplicationDirection enumValue)
        {
          switch(enumValue)
          {
          case ReplicationDirection::FAILOVER:
            return "FAILOVER";
          case ReplicationDirection::FAILBACK:
            return "FAILBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationDirectionMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
