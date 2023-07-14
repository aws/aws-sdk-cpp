/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputDeblockFilter.h>
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
      namespace InputDeblockFilterMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        InputDeblockFilter GetInputDeblockFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return InputDeblockFilter::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return InputDeblockFilter::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeblockFilter>(hashCode);
          }

          return InputDeblockFilter::NOT_SET;
        }

        Aws::String GetNameForInputDeblockFilter(InputDeblockFilter enumValue)
        {
          switch(enumValue)
          {
          case InputDeblockFilter::ENABLED:
            return "ENABLED";
          case InputDeblockFilter::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeblockFilterMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
