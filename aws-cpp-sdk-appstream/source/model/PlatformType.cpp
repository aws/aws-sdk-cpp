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
          case PlatformType::WINDOWS:
            return "WINDOWS";
          case PlatformType::WINDOWS_SERVER_2016:
            return "WINDOWS_SERVER_2016";
          case PlatformType::WINDOWS_SERVER_2019:
            return "WINDOWS_SERVER_2019";
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
