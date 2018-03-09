﻿/*
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

#include <aws/mediaconvert/model/Ac3CodingMode.h>
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
      namespace Ac3CodingModeMapper
      {

        static const int CODING_MODE_1_0_HASH = HashingUtils::HashString("CODING_MODE_1_0");
        static const int CODING_MODE_1_1_HASH = HashingUtils::HashString("CODING_MODE_1_1");
        static const int CODING_MODE_2_0_HASH = HashingUtils::HashString("CODING_MODE_2_0");
        static const int CODING_MODE_3_2_LFE_HASH = HashingUtils::HashString("CODING_MODE_3_2_LFE");


        Ac3CodingMode GetAc3CodingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODING_MODE_1_0_HASH)
          {
            return Ac3CodingMode::CODING_MODE_1_0;
          }
          else if (hashCode == CODING_MODE_1_1_HASH)
          {
            return Ac3CodingMode::CODING_MODE_1_1;
          }
          else if (hashCode == CODING_MODE_2_0_HASH)
          {
            return Ac3CodingMode::CODING_MODE_2_0;
          }
          else if (hashCode == CODING_MODE_3_2_LFE_HASH)
          {
            return Ac3CodingMode::CODING_MODE_3_2_LFE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3CodingMode>(hashCode);
          }

          return Ac3CodingMode::NOT_SET;
        }

        Aws::String GetNameForAc3CodingMode(Ac3CodingMode enumValue)
        {
          switch(enumValue)
          {
          case Ac3CodingMode::CODING_MODE_1_0:
            return "CODING_MODE_1_0";
          case Ac3CodingMode::CODING_MODE_1_1:
            return "CODING_MODE_1_1";
          case Ac3CodingMode::CODING_MODE_2_0:
            return "CODING_MODE_2_0";
          case Ac3CodingMode::CODING_MODE_3_2_LFE:
            return "CODING_MODE_3_2_LFE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Ac3CodingModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
