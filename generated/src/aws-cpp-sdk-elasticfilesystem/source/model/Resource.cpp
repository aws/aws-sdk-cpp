/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/Resource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace ResourceMapper
      {

        static const int FILE_SYSTEM_HASH = HashingUtils::HashString("FILE_SYSTEM");
        static const int MOUNT_TARGET_HASH = HashingUtils::HashString("MOUNT_TARGET");


        Resource GetResourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_SYSTEM_HASH)
          {
            return Resource::FILE_SYSTEM;
          }
          else if (hashCode == MOUNT_TARGET_HASH)
          {
            return Resource::MOUNT_TARGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Resource>(hashCode);
          }

          return Resource::NOT_SET;
        }

        Aws::String GetNameForResource(Resource enumValue)
        {
          switch(enumValue)
          {
          case Resource::NOT_SET:
            return {};
          case Resource::FILE_SYSTEM:
            return "FILE_SYSTEM";
          case Resource::MOUNT_TARGET:
            return "MOUNT_TARGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
