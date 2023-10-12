/**
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

        static constexpr uint32_t WINDOWS_HASH = ConstExprHashingUtils::HashString("WINDOWS");
        static constexpr uint32_t WINDOWS_SERVER_2016_HASH = ConstExprHashingUtils::HashString("WINDOWS_SERVER_2016");
        static constexpr uint32_t WINDOWS_SERVER_2019_HASH = ConstExprHashingUtils::HashString("WINDOWS_SERVER_2019");
        static constexpr uint32_t AMAZON_LINUX2_HASH = ConstExprHashingUtils::HashString("AMAZON_LINUX2");


        PlatformType GetPlatformTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == AMAZON_LINUX2_HASH)
          {
            return PlatformType::AMAZON_LINUX2;
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
          case PlatformType::AMAZON_LINUX2:
            return "AMAZON_LINUX2";
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
