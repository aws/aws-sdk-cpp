/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ReplicationRunType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ReplicationRunTypeMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");


        ReplicationRunType GetReplicationRunTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return ReplicationRunType::ON_DEMAND;
          }
          else if (hashCode == AUTOMATIC_HASH)
          {
            return ReplicationRunType::AUTOMATIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationRunType>(hashCode);
          }

          return ReplicationRunType::NOT_SET;
        }

        Aws::String GetNameForReplicationRunType(ReplicationRunType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationRunType::ON_DEMAND:
            return "ON_DEMAND";
          case ReplicationRunType::AUTOMATIC:
            return "AUTOMATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationRunTypeMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
