/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
