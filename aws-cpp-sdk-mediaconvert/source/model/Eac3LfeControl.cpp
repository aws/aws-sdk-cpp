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

#include <aws/mediaconvert/model/Eac3LfeControl.h>
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
      namespace Eac3LfeControlMapper
      {

        static const int LFE_HASH = HashingUtils::HashString("LFE");
        static const int NO_LFE_HASH = HashingUtils::HashString("NO_LFE");


        Eac3LfeControl GetEac3LfeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LFE_HASH)
          {
            return Eac3LfeControl::LFE;
          }
          else if (hashCode == NO_LFE_HASH)
          {
            return Eac3LfeControl::NO_LFE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3LfeControl>(hashCode);
          }

          return Eac3LfeControl::NOT_SET;
        }

        Aws::String GetNameForEac3LfeControl(Eac3LfeControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3LfeControl::LFE:
            return "LFE";
          case Eac3LfeControl::NO_LFE:
            return "NO_LFE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3LfeControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
