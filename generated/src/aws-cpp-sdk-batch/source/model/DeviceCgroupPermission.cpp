/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DeviceCgroupPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace DeviceCgroupPermissionMapper
      {

        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int WRITE_HASH = HashingUtils::HashString("WRITE");
        static const int MKNOD_HASH = HashingUtils::HashString("MKNOD");


        DeviceCgroupPermission GetDeviceCgroupPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_HASH)
          {
            return DeviceCgroupPermission::READ;
          }
          else if (hashCode == WRITE_HASH)
          {
            return DeviceCgroupPermission::WRITE;
          }
          else if (hashCode == MKNOD_HASH)
          {
            return DeviceCgroupPermission::MKNOD;
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
          case DeviceCgroupPermission::READ:
            return "READ";
          case DeviceCgroupPermission::WRITE:
            return "WRITE";
          case DeviceCgroupPermission::MKNOD:
            return "MKNOD";
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
  } // namespace Batch
} // namespace Aws
