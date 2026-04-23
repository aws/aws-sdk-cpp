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

#include <aws/amplify/model/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace PlatformMapper
      {

        static const int IOS_HASH = HashingUtils::HashString("IOS");
        static const int ANDROID__HASH = HashingUtils::HashString("ANDROID");
        static const int WEB_HASH = HashingUtils::HashString("WEB");
        static const int REACT_NATIVE_HASH = HashingUtils::HashString("REACT_NATIVE");


        Platform GetPlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IOS_HASH)
          {
            return Platform::IOS;
          }
          else if (hashCode == ANDROID__HASH)
          {
            return Platform::ANDROID_;
          }
          else if (hashCode == WEB_HASH)
          {
            return Platform::WEB;
          }
          else if (hashCode == REACT_NATIVE_HASH)
          {
            return Platform::REACT_NATIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Platform>(hashCode);
          }

          return Platform::NOT_SET;
        }

        Aws::String GetNameForPlatform(Platform enumValue)
        {
          switch(enumValue)
          {
          case Platform::IOS:
            return "IOS";
          case Platform::ANDROID_:
            return "ANDROID";
          case Platform::WEB:
            return "WEB";
          case Platform::REACT_NATIVE:
            return "REACT_NATIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
