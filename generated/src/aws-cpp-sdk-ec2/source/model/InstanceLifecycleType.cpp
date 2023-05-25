/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceLifecycleType.h>
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
      namespace InstanceLifecycleTypeMapper
      {

        static const int spot_HASH = HashingUtils::HashString("spot");
        static const int scheduled_HASH = HashingUtils::HashString("scheduled");


        InstanceLifecycleType GetInstanceLifecycleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spot_HASH)
          {
            return InstanceLifecycleType::spot;
          }
          else if (hashCode == scheduled_HASH)
          {
            return InstanceLifecycleType::scheduled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceLifecycleType>(hashCode);
          }

          return InstanceLifecycleType::NOT_SET;
        }

        Aws::String GetNameForInstanceLifecycleType(InstanceLifecycleType enumValue)
        {
          switch(enumValue)
          {
          case InstanceLifecycleType::spot:
            return "spot";
          case InstanceLifecycleType::scheduled:
            return "scheduled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceLifecycleTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
