/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace OperatingSystemMapper
      {

        static const int WINDOWS_2012_HASH = HashingUtils::HashString("WINDOWS_2012");
        static const int AMAZON_LINUX_HASH = HashingUtils::HashString("AMAZON_LINUX");


        OperatingSystem GetOperatingSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_2012_HASH)
          {
            return OperatingSystem::WINDOWS_2012;
          }
          else if (hashCode == AMAZON_LINUX_HASH)
          {
            return OperatingSystem::AMAZON_LINUX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatingSystem>(hashCode);
          }

          return OperatingSystem::NOT_SET;
        }

        Aws::String GetNameForOperatingSystem(OperatingSystem enumValue)
        {
          switch(enumValue)
          {
          case OperatingSystem::WINDOWS_2012:
            return "WINDOWS_2012";
          case OperatingSystem::AMAZON_LINUX:
            return "AMAZON_LINUX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OperatingSystemMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
