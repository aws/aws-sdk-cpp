﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/PlatformType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace PlatformTypeMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int WINDOWS_SERVER_2016_HASH = HashingUtils::HashString("WINDOWS_SERVER_2016");
        static const int WINDOWS_SERVER_2019_HASH = HashingUtils::HashString("WINDOWS_SERVER_2019");
        static const int WINDOWS_SERVER_2022_HASH = HashingUtils::HashString("WINDOWS_SERVER_2022");
        static const int AMAZON_LINUX2_HASH = HashingUtils::HashString("AMAZON_LINUX2");
        static const int RHEL8_HASH = HashingUtils::HashString("RHEL8");
        static const int ROCKY_LINUX8_HASH = HashingUtils::HashString("ROCKY_LINUX8");


        PlatformType GetPlatformTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return PlatformType::WINDOWS;
          }
          else if (hashCode == WINDOWS_SERVER_2016_HASH)
          {
            return PlatformType::WINDOWS_SERVER_2016;
          }
          else if (hashCode == WINDOWS_SERVER_2019_HASH)
          {
            return PlatformType::WINDOWS_SERVER_2019;
          }
          else if (hashCode == WINDOWS_SERVER_2022_HASH)
          {
            return PlatformType::WINDOWS_SERVER_2022;
          }
          else if (hashCode == AMAZON_LINUX2_HASH)
          {
            return PlatformType::AMAZON_LINUX2;
          }
          else if (hashCode == RHEL8_HASH)
          {
            return PlatformType::RHEL8;
          }
          else if (hashCode == ROCKY_LINUX8_HASH)
          {
            return PlatformType::ROCKY_LINUX8;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlatformType>(hashCode);
          }

          return PlatformType::NOT_SET;
        }

        Aws::String GetNameForPlatformType(PlatformType enumValue)
        {
          switch(enumValue)
          {
          case PlatformType::NOT_SET:
            return {};
          case PlatformType::WINDOWS:
            return "WINDOWS";
          case PlatformType::WINDOWS_SERVER_2016:
            return "WINDOWS_SERVER_2016";
          case PlatformType::WINDOWS_SERVER_2019:
            return "WINDOWS_SERVER_2019";
          case PlatformType::WINDOWS_SERVER_2022:
            return "WINDOWS_SERVER_2022";
          case PlatformType::AMAZON_LINUX2:
            return "AMAZON_LINUX2";
          case PlatformType::RHEL8:
            return "RHEL8";
          case PlatformType::ROCKY_LINUX8:
            return "ROCKY_LINUX8";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
