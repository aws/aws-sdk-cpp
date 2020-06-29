/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleAlignment.h>
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
      namespace BurninSubtitleAlignmentMapper
      {

        static const int CENTERED_HASH = HashingUtils::HashString("CENTERED");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");


        BurninSubtitleAlignment GetBurninSubtitleAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENTERED_HASH)
          {
            return BurninSubtitleAlignment::CENTERED;
          }
          else if (hashCode == LEFT_HASH)
          {
            return BurninSubtitleAlignment::LEFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleAlignment>(hashCode);
          }

          return BurninSubtitleAlignment::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleAlignment(BurninSubtitleAlignment enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleAlignment::CENTERED:
            return "CENTERED";
          case BurninSubtitleAlignment::LEFT:
            return "LEFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurninSubtitleAlignmentMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
