/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/PlatformType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace PlatformTypeMapper
      {

        static const int DEBIAN_HASH = HashingUtils::HashString("DEBIAN");
        static const int AMAZON_LINUX_HASH = HashingUtils::HashString("AMAZON_LINUX");
        static const int UBUNTU_HASH = HashingUtils::HashString("UBUNTU");
        static const int WINDOWS_SERVER_HASH = HashingUtils::HashString("WINDOWS_SERVER");


        PlatformType GetPlatformTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEBIAN_HASH)
          {
            return PlatformType::DEBIAN;
          }
          else if (hashCode == AMAZON_LINUX_HASH)
          {
            return PlatformType::AMAZON_LINUX;
          }
          else if (hashCode == UBUNTU_HASH)
          {
            return PlatformType::UBUNTU;
          }
          else if (hashCode == WINDOWS_SERVER_HASH)
          {
            return PlatformType::WINDOWS_SERVER;
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
          case PlatformType::DEBIAN:
            return "DEBIAN";
          case PlatformType::AMAZON_LINUX:
            return "AMAZON_LINUX";
          case PlatformType::UBUNTU:
            return "UBUNTU";
          case PlatformType::WINDOWS_SERVER:
            return "WINDOWS_SERVER";
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
  } // namespace CodeBuild
} // namespace Aws
