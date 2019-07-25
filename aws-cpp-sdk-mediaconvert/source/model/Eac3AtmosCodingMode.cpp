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

#include <aws/mediaconvert/model/Eac3AtmosCodingMode.h>
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
      namespace Eac3AtmosCodingModeMapper
      {

        static const int CODING_MODE_9_1_6_HASH = HashingUtils::HashString("CODING_MODE_9_1_6");


        Eac3AtmosCodingMode GetEac3AtmosCodingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODING_MODE_9_1_6_HASH)
          {
            return Eac3AtmosCodingMode::CODING_MODE_9_1_6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosCodingMode>(hashCode);
          }

          return Eac3AtmosCodingMode::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosCodingMode(Eac3AtmosCodingMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosCodingMode::CODING_MODE_9_1_6:
            return "CODING_MODE_9_1_6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosCodingModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
