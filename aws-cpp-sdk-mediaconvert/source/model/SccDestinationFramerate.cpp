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

#include <aws/mediaconvert/model/SccDestinationFramerate.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace SccDestinationFramerateMapper
      {

        static const int FRAMERATE_23_97_HASH = HashingUtils::HashString("FRAMERATE_23_97");
        static const int FRAMERATE_24_HASH = HashingUtils::HashString("FRAMERATE_24");
        static const int FRAMERATE_29_97_DROPFRAME_HASH = HashingUtils::HashString("FRAMERATE_29_97_DROPFRAME");
        static const int FRAMERATE_29_97_NON_DROPFRAME_HASH = HashingUtils::HashString("FRAMERATE_29_97_NON_DROPFRAME");


        SccDestinationFramerate GetSccDestinationFramerateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMERATE_23_97_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_23_97;
          }
          else if (hashCode == FRAMERATE_24_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_24;
          }
          else if (hashCode == FRAMERATE_29_97_DROPFRAME_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_29_97_DROPFRAME;
          }
          else if (hashCode == FRAMERATE_29_97_NON_DROPFRAME_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_29_97_NON_DROPFRAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SccDestinationFramerate>(hashCode);
          }

          return SccDestinationFramerate::NOT_SET;
        }

        Aws::String GetNameForSccDestinationFramerate(SccDestinationFramerate enumValue)
        {
          switch(enumValue)
          {
          case SccDestinationFramerate::FRAMERATE_23_97:
            return "FRAMERATE_23_97";
          case SccDestinationFramerate::FRAMERATE_24:
            return "FRAMERATE_24";
          case SccDestinationFramerate::FRAMERATE_29_97_DROPFRAME:
            return "FRAMERATE_29_97_DROPFRAME";
          case SccDestinationFramerate::FRAMERATE_29_97_NON_DROPFRAME:
            return "FRAMERATE_29_97_NON_DROPFRAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SccDestinationFramerateMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
