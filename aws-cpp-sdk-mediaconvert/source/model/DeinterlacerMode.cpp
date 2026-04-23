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

#include <aws/mediaconvert/model/DeinterlacerMode.h>
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
      namespace DeinterlacerModeMapper
      {

        static const int DEINTERLACE_HASH = HashingUtils::HashString("DEINTERLACE");
        static const int INVERSE_TELECINE_HASH = HashingUtils::HashString("INVERSE_TELECINE");
        static const int ADAPTIVE_HASH = HashingUtils::HashString("ADAPTIVE");


        DeinterlacerMode GetDeinterlacerModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEINTERLACE_HASH)
          {
            return DeinterlacerMode::DEINTERLACE;
          }
          else if (hashCode == INVERSE_TELECINE_HASH)
          {
            return DeinterlacerMode::INVERSE_TELECINE;
          }
          else if (hashCode == ADAPTIVE_HASH)
          {
            return DeinterlacerMode::ADAPTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeinterlacerMode>(hashCode);
          }

          return DeinterlacerMode::NOT_SET;
        }

        Aws::String GetNameForDeinterlacerMode(DeinterlacerMode enumValue)
        {
          switch(enumValue)
          {
          case DeinterlacerMode::DEINTERLACE:
            return "DEINTERLACE";
          case DeinterlacerMode::INVERSE_TELECINE:
            return "INVERSE_TELECINE";
          case DeinterlacerMode::ADAPTIVE:
            return "ADAPTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeinterlacerModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
