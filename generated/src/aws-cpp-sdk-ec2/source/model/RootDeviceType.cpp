/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RootDeviceType.h>
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
      namespace RootDeviceTypeMapper
      {

        static constexpr uint32_t ebs_HASH = ConstExprHashingUtils::HashString("ebs");
        static constexpr uint32_t instance_store_HASH = ConstExprHashingUtils::HashString("instance-store");


        RootDeviceType GetRootDeviceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ebs_HASH)
          {
            return RootDeviceType::ebs;
          }
          else if (hashCode == instance_store_HASH)
          {
            return RootDeviceType::instance_store;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RootDeviceType>(hashCode);
          }

          return RootDeviceType::NOT_SET;
        }

        Aws::String GetNameForRootDeviceType(RootDeviceType enumValue)
        {
          switch(enumValue)
          {
          case RootDeviceType::NOT_SET:
            return {};
          case RootDeviceType::ebs:
            return "ebs";
          case RootDeviceType::instance_store:
            return "instance-store";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RootDeviceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
