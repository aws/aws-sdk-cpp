/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3SurroundMode.h>
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
      namespace Eac3SurroundModeMapper
      {

        static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        Eac3SurroundMode GetEac3SurroundModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3SurroundMode::NOT_INDICATED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Eac3SurroundMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Eac3SurroundMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3SurroundMode>(hashCode);
          }

          return Eac3SurroundMode::NOT_SET;
        }

        Aws::String GetNameForEac3SurroundMode(Eac3SurroundMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3SurroundMode::NOT_INDICATED:
            return "NOT_INDICATED";
          case Eac3SurroundMode::ENABLED:
            return "ENABLED";
          case Eac3SurroundMode::DISABLED:
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

      } // namespace Eac3SurroundModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
