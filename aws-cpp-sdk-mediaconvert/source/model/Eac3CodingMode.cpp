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

#include <aws/mediaconvert/model/Eac3CodingMode.h>
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
      namespace Eac3CodingModeMapper
      {

        static const int CODING_MODE_1_0_HASH = HashingUtils::HashString("CODING_MODE_1_0");
        static const int CODING_MODE_2_0_HASH = HashingUtils::HashString("CODING_MODE_2_0");
        static const int CODING_MODE_3_2_HASH = HashingUtils::HashString("CODING_MODE_3_2");


        Eac3CodingMode GetEac3CodingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODING_MODE_1_0_HASH)
          {
            return Eac3CodingMode::CODING_MODE_1_0;
          }
          else if (hashCode == CODING_MODE_2_0_HASH)
          {
            return Eac3CodingMode::CODING_MODE_2_0;
          }
          else if (hashCode == CODING_MODE_3_2_HASH)
          {
            return Eac3CodingMode::CODING_MODE_3_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3CodingMode>(hashCode);
          }

          return Eac3CodingMode::NOT_SET;
        }

        Aws::String GetNameForEac3CodingMode(Eac3CodingMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3CodingMode::CODING_MODE_1_0:
            return "CODING_MODE_1_0";
          case Eac3CodingMode::CODING_MODE_2_0:
            return "CODING_MODE_2_0";
          case Eac3CodingMode::CODING_MODE_3_2:
            return "CODING_MODE_3_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3CodingModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
