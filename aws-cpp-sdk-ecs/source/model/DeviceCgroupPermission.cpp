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

        static const int read_HASH = HashingUtils::HashString("read");
        static const int write_HASH = HashingUtils::HashString("write");
        static const int mknod_HASH = HashingUtils::HashString("mknod");


        DeviceCgroupPermission GetDeviceCgroupPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
