/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Tenancy.h>
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
      namespace TenancyMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int dedicated_HASH = HashingUtils::HashString("dedicated");
        static const int host_HASH = HashingUtils::HashString("host");


        Tenancy GetTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return Tenancy::default_;
          }
          else if (hashCode == dedicated_HASH)
          {
            return Tenancy::dedicated;
          }
          else if (hashCode == host_HASH)
          {
            return Tenancy::host;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tenancy>(hashCode);
          }

          return Tenancy::NOT_SET;
        }

        Aws::String GetNameForTenancy(Tenancy enumValue)
        {
          switch(enumValue)
          {
          case Tenancy::default_:
            return "default";
          case Tenancy::dedicated:
            return "dedicated";
          case Tenancy::host:
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

      } // namespace TenancyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
