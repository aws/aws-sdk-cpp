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

#include <aws/mediaconvert/model/Eac3PassthroughControl.h>
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
      namespace Eac3PassthroughControlMapper
      {

        static const int WHEN_POSSIBLE_HASH = HashingUtils::HashString("WHEN_POSSIBLE");
        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");


        Eac3PassthroughControl GetEac3PassthroughControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHEN_POSSIBLE_HASH)
          {
            return Eac3PassthroughControl::WHEN_POSSIBLE;
          }
          else if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return Eac3PassthroughControl::NO_PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3PassthroughControl>(hashCode);
          }

          return Eac3PassthroughControl::NOT_SET;
        }

        Aws::String GetNameForEac3PassthroughControl(Eac3PassthroughControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3PassthroughControl::WHEN_POSSIBLE:
            return "WHEN_POSSIBLE";
          case Eac3PassthroughControl::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3PassthroughControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
