/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HostTenancy.h>
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
      namespace HostTenancyMapper
      {

        static const int dedicated_HASH = HashingUtils::HashString("dedicated");
        static const int host_HASH = HashingUtils::HashString("host");


        HostTenancy GetHostTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == dedicated_HASH)
          {
            return HostTenancy::dedicated;
          }
          else if (hashCode == host_HASH)
          {
            return HostTenancy::host;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostTenancy>(hashCode);
          }

          return HostTenancy::NOT_SET;
        }

        Aws::String GetNameForHostTenancy(HostTenancy enumValue)
        {
          switch(enumValue)
          {
          case HostTenancy::dedicated:
            return "dedicated";
          case HostTenancy::host:
            return "host";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostTenancyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
