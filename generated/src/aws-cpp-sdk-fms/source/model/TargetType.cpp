/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/TargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace TargetTypeMapper
      {

        static const int GATEWAY_HASH = HashingUtils::HashString("GATEWAY");
        static const int CARRIER_GATEWAY_HASH = HashingUtils::HashString("CARRIER_GATEWAY");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");
        static const int LOCAL_GATEWAY_HASH = HashingUtils::HashString("LOCAL_GATEWAY");
        static const int NAT_GATEWAY_HASH = HashingUtils::HashString("NAT_GATEWAY");
        static const int NETWORK_INTERFACE_HASH = HashingUtils::HashString("NETWORK_INTERFACE");
        static const int VPC_ENDPOINT_HASH = HashingUtils::HashString("VPC_ENDPOINT");
        static const int VPC_PEERING_CONNECTION_HASH = HashingUtils::HashString("VPC_PEERING_CONNECTION");
        static const int EGRESS_ONLY_INTERNET_GATEWAY_HASH = HashingUtils::HashString("EGRESS_ONLY_INTERNET_GATEWAY");
        static const int TRANSIT_GATEWAY_HASH = HashingUtils::HashString("TRANSIT_GATEWAY");


        TargetType GetTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GATEWAY_HASH)
          {
            return TargetType::GATEWAY;
          }
          else if (hashCode == CARRIER_GATEWAY_HASH)
          {
            return TargetType::CARRIER_GATEWAY;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return TargetType::INSTANCE;
          }
          else if (hashCode == LOCAL_GATEWAY_HASH)
          {
            return TargetType::LOCAL_GATEWAY;
          }
          else if (hashCode == NAT_GATEWAY_HASH)
          {
            return TargetType::NAT_GATEWAY;
          }
          else if (hashCode == NETWORK_INTERFACE_HASH)
          {
            return TargetType::NETWORK_INTERFACE;
          }
          else if (hashCode == VPC_ENDPOINT_HASH)
          {
            return TargetType::VPC_ENDPOINT;
          }
          else if (hashCode == VPC_PEERING_CONNECTION_HASH)
          {
            return TargetType::VPC_PEERING_CONNECTION;
          }
          else if (hashCode == EGRESS_ONLY_INTERNET_GATEWAY_HASH)
          {
            return TargetType::EGRESS_ONLY_INTERNET_GATEWAY;
          }
          else if (hashCode == TRANSIT_GATEWAY_HASH)
          {
            return TargetType::TRANSIT_GATEWAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetType>(hashCode);
          }

          return TargetType::NOT_SET;
        }

        Aws::String GetNameForTargetType(TargetType enumValue)
        {
          switch(enumValue)
          {
          case TargetType::NOT_SET:
            return {};
          case TargetType::GATEWAY:
            return "GATEWAY";
          case TargetType::CARRIER_GATEWAY:
            return "CARRIER_GATEWAY";
          case TargetType::INSTANCE:
            return "INSTANCE";
          case TargetType::LOCAL_GATEWAY:
            return "LOCAL_GATEWAY";
          case TargetType::NAT_GATEWAY:
            return "NAT_GATEWAY";
          case TargetType::NETWORK_INTERFACE:
            return "NETWORK_INTERFACE";
          case TargetType::VPC_ENDPOINT:
            return "VPC_ENDPOINT";
          case TargetType::VPC_PEERING_CONNECTION:
            return "VPC_PEERING_CONNECTION";
          case TargetType::EGRESS_ONLY_INTERNET_GATEWAY:
            return "EGRESS_ONLY_INTERNET_GATEWAY";
          case TargetType::TRANSIT_GATEWAY:
            return "TRANSIT_GATEWAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
