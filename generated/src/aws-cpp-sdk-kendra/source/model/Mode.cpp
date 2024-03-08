/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Mode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int LEARN_ONLY_HASH = HashingUtils::HashString("LEARN_ONLY");


        Mode GetModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return Mode::ENABLED;
          }
          else if (hashCode == LEARN_ONLY_HASH)
          {
            return Mode::LEARN_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mode>(hashCode);
          }

          return Mode::NOT_SET;
        }

        Aws::String GetNameForMode(Mode enumValue)
        {
          switch(enumValue)
          {
          case Mode::NOT_SET:
            return {};
          case Mode::ENABLED:
            return "ENABLED";
          case Mode::LEARN_ONLY:
            return "LEARN_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
