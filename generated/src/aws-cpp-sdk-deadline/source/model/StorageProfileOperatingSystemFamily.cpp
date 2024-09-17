/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace StorageProfileOperatingSystemFamilyMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");
        static const int MACOS_HASH = HashingUtils::HashString("MACOS");


        StorageProfileOperatingSystemFamily GetStorageProfileOperatingSystemFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return StorageProfileOperatingSystemFamily::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return StorageProfileOperatingSystemFamily::LINUX;
          }
          else if (hashCode == MACOS_HASH)
          {
            return StorageProfileOperatingSystemFamily::MACOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageProfileOperatingSystemFamily>(hashCode);
          }

          return StorageProfileOperatingSystemFamily::NOT_SET;
        }

        Aws::String GetNameForStorageProfileOperatingSystemFamily(StorageProfileOperatingSystemFamily enumValue)
        {
          switch(enumValue)
          {
          case StorageProfileOperatingSystemFamily::NOT_SET:
            return {};
          case StorageProfileOperatingSystemFamily::WINDOWS:
            return "WINDOWS";
          case StorageProfileOperatingSystemFamily::LINUX:
            return "LINUX";
          case StorageProfileOperatingSystemFamily::MACOS:
            return "MACOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageProfileOperatingSystemFamilyMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
