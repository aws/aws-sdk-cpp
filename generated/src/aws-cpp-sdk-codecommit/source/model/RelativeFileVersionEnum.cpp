/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/RelativeFileVersionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace RelativeFileVersionEnumMapper
      {

        static constexpr uint32_t BEFORE_HASH = ConstExprHashingUtils::HashString("BEFORE");
        static constexpr uint32_t AFTER_HASH = ConstExprHashingUtils::HashString("AFTER");


        RelativeFileVersionEnum GetRelativeFileVersionEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_HASH)
          {
            return RelativeFileVersionEnum::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return RelativeFileVersionEnum::AFTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelativeFileVersionEnum>(hashCode);
          }

          return RelativeFileVersionEnum::NOT_SET;
        }

        Aws::String GetNameForRelativeFileVersionEnum(RelativeFileVersionEnum enumValue)
        {
          switch(enumValue)
          {
          case RelativeFileVersionEnum::NOT_SET:
            return {};
          case RelativeFileVersionEnum::BEFORE:
            return "BEFORE";
          case RelativeFileVersionEnum::AFTER:
            return "AFTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelativeFileVersionEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
