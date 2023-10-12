/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeviceCgroupPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace DeviceCgroupPermissionMapper
      {

        static constexpr uint32_t read_HASH = ConstExprHashingUtils::HashString("read");
        static constexpr uint32_t write_HASH = ConstExprHashingUtils::HashString("write");
        static constexpr uint32_t mknod_HASH = ConstExprHashingUtils::HashString("mknod");


        DeviceCgroupPermission GetDeviceCgroupPermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == read_HASH)
          {
            return DeviceCgroupPermission::read;
          }
          else if (hashCode == write_HASH)
          {
            return DeviceCgroupPermission::write;
          }
          else if (hashCode == mknod_HASH)
          {
            return DeviceCgroupPermission::mknod;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceCgroupPermission>(hashCode);
          }

          return DeviceCgroupPermission::NOT_SET;
        }

        Aws::String GetNameForDeviceCgroupPermission(DeviceCgroupPermission enumValue)
        {
          switch(enumValue)
          {
          case DeviceCgroupPermission::NOT_SET:
            return {};
          case DeviceCgroupPermission::read:
            return "read";
          case DeviceCgroupPermission::write:
            return "write";
          case DeviceCgroupPermission::mknod:
            return "mknod";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceCgroupPermissionMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
