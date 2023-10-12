/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ChronologicalOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ChronologicalOrderMapper
      {

        static constexpr uint32_t Reverse_HASH = ConstExprHashingUtils::HashString("Reverse");
        static constexpr uint32_t Forward_HASH = ConstExprHashingUtils::HashString("Forward");


        ChronologicalOrder GetChronologicalOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Reverse_HASH)
          {
            return ChronologicalOrder::Reverse;
          }
          else if (hashCode == Forward_HASH)
          {
            return ChronologicalOrder::Forward;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChronologicalOrder>(hashCode);
          }

          return ChronologicalOrder::NOT_SET;
        }

        Aws::String GetNameForChronologicalOrder(ChronologicalOrder enumValue)
        {
          switch(enumValue)
          {
          case ChronologicalOrder::NOT_SET:
            return {};
          case ChronologicalOrder::Reverse:
            return "Reverse";
          case ChronologicalOrder::Forward:
            return "Forward";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChronologicalOrderMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
