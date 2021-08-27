/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/FleetAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace FleetAttributeMapper
      {

        static const int VPC_CONFIGURATION_HASH = HashingUtils::HashString("VPC_CONFIGURATION");
        static const int VPC_CONFIGURATION_SECURITY_GROUP_IDS_HASH = HashingUtils::HashString("VPC_CONFIGURATION_SECURITY_GROUP_IDS");
        static const int DOMAIN_JOIN_INFO_HASH = HashingUtils::HashString("DOMAIN_JOIN_INFO");
        static const int IAM_ROLE_ARN_HASH = HashingUtils::HashString("IAM_ROLE_ARN");


        FleetAttribute GetFleetAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VPC_CONFIGURATION_HASH)
          {
            return FleetAttribute::VPC_CONFIGURATION;
          }
          else if (hashCode == VPC_CONFIGURATION_SECURITY_GROUP_IDS_HASH)
          {
            return FleetAttribute::VPC_CONFIGURATION_SECURITY_GROUP_IDS;
          }
          else if (hashCode == DOMAIN_JOIN_INFO_HASH)
          {
            return FleetAttribute::DOMAIN_JOIN_INFO;
          }
          else if (hashCode == IAM_ROLE_ARN_HASH)
          {
            return FleetAttribute::IAM_ROLE_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetAttribute>(hashCode);
          }

          return FleetAttribute::NOT_SET;
        }

        Aws::String GetNameForFleetAttribute(FleetAttribute enumValue)
        {
          switch(enumValue)
          {
          case FleetAttribute::VPC_CONFIGURATION:
            return "VPC_CONFIGURATION";
          case FleetAttribute::VPC_CONFIGURATION_SECURITY_GROUP_IDS:
            return "VPC_CONFIGURATION_SECURITY_GROUP_IDS";
          case FleetAttribute::DOMAIN_JOIN_INFO:
            return "DOMAIN_JOIN_INFO";
          case FleetAttribute::IAM_ROLE_ARN:
            return "IAM_ROLE_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
