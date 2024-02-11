/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeviceTrustProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace DeviceTrustProviderTypeMapper
      {

        static const int jamf_HASH = HashingUtils::HashString("jamf");
        static const int crowdstrike_HASH = HashingUtils::HashString("crowdstrike");
        static const int jumpcloud_HASH = HashingUtils::HashString("jumpcloud");


        DeviceTrustProviderType GetDeviceTrustProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == jamf_HASH)
          {
            return DeviceTrustProviderType::jamf;
          }
          else if (hashCode == crowdstrike_HASH)
          {
            return DeviceTrustProviderType::crowdstrike;
          }
          else if (hashCode == jumpcloud_HASH)
          {
            return DeviceTrustProviderType::jumpcloud;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceTrustProviderType>(hashCode);
          }

          return DeviceTrustProviderType::NOT_SET;
        }

        Aws::String GetNameForDeviceTrustProviderType(DeviceTrustProviderType enumValue)
        {
          switch(enumValue)
          {
          case DeviceTrustProviderType::NOT_SET:
            return {};
          case DeviceTrustProviderType::jamf:
            return "jamf";
          case DeviceTrustProviderType::crowdstrike:
            return "crowdstrike";
          case DeviceTrustProviderType::jumpcloud:
            return "jumpcloud";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceTrustProviderTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
