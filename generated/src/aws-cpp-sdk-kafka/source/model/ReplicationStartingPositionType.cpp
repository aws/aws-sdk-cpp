/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationStartingPositionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace ReplicationStartingPositionTypeMapper
      {

        static const int LATEST_HASH = HashingUtils::HashString("LATEST");
        static const int EARLIEST_HASH = HashingUtils::HashString("EARLIEST");


        ReplicationStartingPositionType GetReplicationStartingPositionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATEST_HASH)
          {
            return ReplicationStartingPositionType::LATEST;
          }
          else if (hashCode == EARLIEST_HASH)
          {
            return ReplicationStartingPositionType::EARLIEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationStartingPositionType>(hashCode);
          }

          return ReplicationStartingPositionType::NOT_SET;
        }

        Aws::String GetNameForReplicationStartingPositionType(ReplicationStartingPositionType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationStartingPositionType::NOT_SET:
            return {};
          case ReplicationStartingPositionType::LATEST:
            return "LATEST";
          case ReplicationStartingPositionType::EARLIEST:
            return "EARLIEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationStartingPositionTypeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
