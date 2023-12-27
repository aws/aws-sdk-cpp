/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/FrequencyOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace FrequencyOptionMapper
      {

        static const int SYNCHRONOUS_HASH = HashingUtils::HashString("SYNCHRONOUS");


        FrequencyOption GetFrequencyOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNCHRONOUS_HASH)
          {
            return FrequencyOption::SYNCHRONOUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FrequencyOption>(hashCode);
          }

          return FrequencyOption::NOT_SET;
        }

        Aws::String GetNameForFrequencyOption(FrequencyOption enumValue)
        {
          switch(enumValue)
          {
          case FrequencyOption::NOT_SET:
            return {};
          case FrequencyOption::SYNCHRONOUS:
            return "SYNCHRONOUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrequencyOptionMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
