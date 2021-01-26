/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/OperatingSystemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace OperatingSystemTypeMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");


        OperatingSystemType GetOperatingSystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return OperatingSystemType::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return OperatingSystemType::LINUX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatingSystemType>(hashCode);
          }

          return OperatingSystemType::NOT_SET;
        }

        Aws::String GetNameForOperatingSystemType(OperatingSystemType enumValue)
        {
          switch(enumValue)
          {
          case OperatingSystemType::WINDOWS:
            return "WINDOWS";
          case OperatingSystemType::LINUX:
            return "LINUX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatingSystemTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
