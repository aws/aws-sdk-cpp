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

#include <aws/mediapackage-vod/model/Profile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace ProfileMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HBBTV_1_5_HASH = HashingUtils::HashString("HBBTV_1_5");


        Profile GetProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Profile::NONE;
          }
          else if (hashCode == HBBTV_1_5_HASH)
          {
            return Profile::HBBTV_1_5;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Profile>(hashCode);
          }

          return Profile::NOT_SET;
        }

        Aws::String GetNameForProfile(Profile enumValue)
        {
          switch(enumValue)
          {
          case Profile::NONE:
            return "NONE";
          case Profile::HBBTV_1_5:
            return "HBBTV_1_5";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
