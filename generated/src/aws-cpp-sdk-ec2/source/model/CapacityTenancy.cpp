/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityTenancy.h>
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
      namespace CapacityTenancyMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int dedicated_HASH = HashingUtils::HashString("dedicated");


        CapacityTenancy GetCapacityTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return CapacityTenancy::default_;
          }
          else if (hashCode == dedicated_HASH)
          {
            return CapacityTenancy::dedicated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityTenancy>(hashCode);
          }

          return CapacityTenancy::NOT_SET;
        }

        Aws::String GetNameForCapacityTenancy(CapacityTenancy enumValue)
        {
          switch(enumValue)
          {
          case CapacityTenancy::NOT_SET:
            return {};
          case CapacityTenancy::default_:
            return "default";
          case CapacityTenancy::dedicated:
            return "dedicated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityTenancyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
