/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamDiscoveryFailureCode.h>
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
      namespace IpamDiscoveryFailureCodeMapper
      {

        static const int assume_role_failure_HASH = HashingUtils::HashString("assume-role-failure");
        static const int throttling_failure_HASH = HashingUtils::HashString("throttling-failure");
        static const int unauthorized_failure_HASH = HashingUtils::HashString("unauthorized-failure");


        IpamDiscoveryFailureCode GetIpamDiscoveryFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == assume_role_failure_HASH)
          {
            return IpamDiscoveryFailureCode::assume_role_failure;
          }
          else if (hashCode == throttling_failure_HASH)
          {
            return IpamDiscoveryFailureCode::throttling_failure;
          }
          else if (hashCode == unauthorized_failure_HASH)
          {
            return IpamDiscoveryFailureCode::unauthorized_failure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamDiscoveryFailureCode>(hashCode);
          }

          return IpamDiscoveryFailureCode::NOT_SET;
        }

        Aws::String GetNameForIpamDiscoveryFailureCode(IpamDiscoveryFailureCode enumValue)
        {
          switch(enumValue)
          {
          case IpamDiscoveryFailureCode::NOT_SET:
            return {};
          case IpamDiscoveryFailureCode::assume_role_failure:
            return "assume-role-failure";
          case IpamDiscoveryFailureCode::throttling_failure:
            return "throttling-failure";
          case IpamDiscoveryFailureCode::unauthorized_failure:
            return "unauthorized-failure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamDiscoveryFailureCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
