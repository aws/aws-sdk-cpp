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

#include <aws/medialive/model/Scte20Convert608To708.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Scte20Convert608To708Mapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int UPCONVERT_HASH = HashingUtils::HashString("UPCONVERT");


        Scte20Convert608To708 GetScte20Convert608To708ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Scte20Convert608To708::DISABLED;
          }
          else if (hashCode == UPCONVERT_HASH)
          {
            return Scte20Convert608To708::UPCONVERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte20Convert608To708>(hashCode);
          }

          return Scte20Convert608To708::NOT_SET;
        }

        Aws::String GetNameForScte20Convert608To708(Scte20Convert608To708 enumValue)
        {
          switch(enumValue)
          {
          case Scte20Convert608To708::DISABLED:
            return "DISABLED";
          case Scte20Convert608To708::UPCONVERT:
            return "UPCONVERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte20Convert608To708Mapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
