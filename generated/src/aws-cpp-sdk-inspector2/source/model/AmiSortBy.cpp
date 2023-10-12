/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AmiSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace AmiSortByMapper
      {

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t AFFECTED_INSTANCES_HASH = ConstExprHashingUtils::HashString("AFFECTED_INSTANCES");


        AmiSortBy GetAmiSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return AmiSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AmiSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return AmiSortBy::ALL;
          }
          else if (hashCode == AFFECTED_INSTANCES_HASH)
          {
            return AmiSortBy::AFFECTED_INSTANCES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmiSortBy>(hashCode);
          }

          return AmiSortBy::NOT_SET;
        }

        Aws::String GetNameForAmiSortBy(AmiSortBy enumValue)
        {
          switch(enumValue)
          {
          case AmiSortBy::NOT_SET:
            return {};
          case AmiSortBy::CRITICAL:
            return "CRITICAL";
          case AmiSortBy::HIGH:
            return "HIGH";
          case AmiSortBy::ALL:
            return "ALL";
          case AmiSortBy::AFFECTED_INSTANCES:
            return "AFFECTED_INSTANCES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmiSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
