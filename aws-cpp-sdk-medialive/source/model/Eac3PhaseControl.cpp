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

#include <aws/medialive/model/Eac3PhaseControl.h>
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
      namespace Eac3PhaseControlMapper
      {

        static const int NO_SHIFT_HASH = HashingUtils::HashString("NO_SHIFT");
        static const int SHIFT_90_DEGREES_HASH = HashingUtils::HashString("SHIFT_90_DEGREES");


        Eac3PhaseControl GetEac3PhaseControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_SHIFT_HASH)
          {
            return Eac3PhaseControl::NO_SHIFT;
          }
          else if (hashCode == SHIFT_90_DEGREES_HASH)
          {
            return Eac3PhaseControl::SHIFT_90_DEGREES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3PhaseControl>(hashCode);
          }

          return Eac3PhaseControl::NOT_SET;
        }

        Aws::String GetNameForEac3PhaseControl(Eac3PhaseControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3PhaseControl::NO_SHIFT:
            return "NO_SHIFT";
          case Eac3PhaseControl::SHIFT_90_DEGREES:
            return "SHIFT_90_DEGREES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3PhaseControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
