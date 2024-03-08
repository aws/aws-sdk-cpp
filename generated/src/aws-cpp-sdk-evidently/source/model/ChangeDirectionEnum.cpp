/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ChangeDirectionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ChangeDirectionEnumMapper
      {

        static const int INCREASE_HASH = HashingUtils::HashString("INCREASE");
        static const int DECREASE_HASH = HashingUtils::HashString("DECREASE");


        ChangeDirectionEnum GetChangeDirectionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCREASE_HASH)
          {
            return ChangeDirectionEnum::INCREASE;
          }
          else if (hashCode == DECREASE_HASH)
          {
            return ChangeDirectionEnum::DECREASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeDirectionEnum>(hashCode);
          }

          return ChangeDirectionEnum::NOT_SET;
        }

        Aws::String GetNameForChangeDirectionEnum(ChangeDirectionEnum enumValue)
        {
          switch(enumValue)
          {
          case ChangeDirectionEnum::NOT_SET:
            return {};
          case ChangeDirectionEnum::INCREASE:
            return "INCREASE";
          case ChangeDirectionEnum::DECREASE:
            return "DECREASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeDirectionEnumMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
