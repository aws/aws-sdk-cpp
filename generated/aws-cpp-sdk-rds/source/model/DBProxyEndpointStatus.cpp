/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxyEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace DBProxyEndpointStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int incompatible_network_HASH = HashingUtils::HashString("incompatible-network");
        static const int insufficient_resource_limits_HASH = HashingUtils::HashString("insufficient-resource-limits");
        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int deleting_HASH = HashingUtils::HashString("deleting");


        DBProxyEndpointStatus GetDBProxyEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return DBProxyEndpointStatus::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return DBProxyEndpointStatus::modifying;
          }
          else if (hashCode == incompatible_network_HASH)
          {
            return DBProxyEndpointStatus::incompatible_network;
          }
          else if (hashCode == insufficient_resource_limits_HASH)
          {
            return DBProxyEndpointStatus::insufficient_resource_limits;
          }
          else if (hashCode == creating_HASH)
          {
            return DBProxyEndpointStatus::creating;
          }
          else if (hashCode == deleting_HASH)
          {
            return DBProxyEndpointStatus::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DBProxyEndpointStatus>(hashCode);
          }

          return DBProxyEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForDBProxyEndpointStatus(DBProxyEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case DBProxyEndpointStatus::available:
            return "available";
          case DBProxyEndpointStatus::modifying:
            return "modifying";
          case DBProxyEndpointStatus::incompatible_network:
            return "incompatible-network";
          case DBProxyEndpointStatus::insufficient_resource_limits:
            return "insufficient-resource-limits";
          case DBProxyEndpointStatus::creating:
            return "creating";
          case DBProxyEndpointStatus::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DBProxyEndpointStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
