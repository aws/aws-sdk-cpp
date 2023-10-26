/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/OSFamily.h>
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
      namespace OSFamilyMapper
      {

        static const int WINDOWS_SERVER_2019_FULL_HASH = HashingUtils::HashString("WINDOWS_SERVER_2019_FULL");
        static const int WINDOWS_SERVER_2019_CORE_HASH = HashingUtils::HashString("WINDOWS_SERVER_2019_CORE");
        static const int WINDOWS_SERVER_2016_FULL_HASH = HashingUtils::HashString("WINDOWS_SERVER_2016_FULL");
        static const int WINDOWS_SERVER_2004_CORE_HASH = HashingUtils::HashString("WINDOWS_SERVER_2004_CORE");
        static const int WINDOWS_SERVER_2022_CORE_HASH = HashingUtils::HashString("WINDOWS_SERVER_2022_CORE");
        static const int WINDOWS_SERVER_2022_FULL_HASH = HashingUtils::HashString("WINDOWS_SERVER_2022_FULL");
        static const int WINDOWS_SERVER_20H2_CORE_HASH = HashingUtils::HashString("WINDOWS_SERVER_20H2_CORE");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");


        OSFamily GetOSFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_SERVER_2019_FULL_HASH)
          {
            return OSFamily::WINDOWS_SERVER_2019_FULL;
          }
          else if (hashCode == WINDOWS_SERVER_2019_CORE_HASH)
          {
            return OSFamily::WINDOWS_SERVER_2019_CORE;
          }
          else if (hashCode == WINDOWS_SERVER_2016_FULL_HASH)
          {
            return OSFamily::WINDOWS_SERVER_2016_FULL;
          }
          else if (hashCode == WINDOWS_SERVER_2004_CORE_HASH)
          {
            return OSFamily::WINDOWS_SERVER_2004_CORE;
          }
          else if (hashCode == WINDOWS_SERVER_2022_CORE_HASH)
          {
            return OSFamily::WINDOWS_SERVER_2022_CORE;
          }
          else if (hashCode == WINDOWS_SERVER_2022_FULL_HASH)
          {
            return OSFamily::WINDOWS_SERVER_2022_FULL;
          }
          else if (hashCode == WINDOWS_SERVER_20H2_CORE_HASH)
          {
            return OSFamily::WINDOWS_SERVER_20H2_CORE;
          }
          else if (hashCode == LINUX_HASH)
          {
            return OSFamily::LINUX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OSFamily>(hashCode);
          }

          return OSFamily::NOT_SET;
        }

        Aws::String GetNameForOSFamily(OSFamily enumValue)
        {
          switch(enumValue)
          {
          case OSFamily::NOT_SET:
            return {};
          case OSFamily::WINDOWS_SERVER_2019_FULL:
            return "WINDOWS_SERVER_2019_FULL";
          case OSFamily::WINDOWS_SERVER_2019_CORE:
            return "WINDOWS_SERVER_2019_CORE";
          case OSFamily::WINDOWS_SERVER_2016_FULL:
            return "WINDOWS_SERVER_2016_FULL";
          case OSFamily::WINDOWS_SERVER_2004_CORE:
            return "WINDOWS_SERVER_2004_CORE";
          case OSFamily::WINDOWS_SERVER_2022_CORE:
            return "WINDOWS_SERVER_2022_CORE";
          case OSFamily::WINDOWS_SERVER_2022_FULL:
            return "WINDOWS_SERVER_2022_FULL";
          case OSFamily::WINDOWS_SERVER_20H2_CORE:
            return "WINDOWS_SERVER_20H2_CORE";
          case OSFamily::LINUX:
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

      } // namespace OSFamilyMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
