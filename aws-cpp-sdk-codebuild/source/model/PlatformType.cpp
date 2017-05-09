/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PlatformTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
