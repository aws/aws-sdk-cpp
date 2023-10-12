/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/MergeStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace MergeStrategyMapper
      {

        static constexpr uint32_t Overwrite_HASH = ConstExprHashingUtils::HashString("Overwrite");
        static constexpr uint32_t FailOnConflict_HASH = ConstExprHashingUtils::HashString("FailOnConflict");
        static constexpr uint32_t Append_HASH = ConstExprHashingUtils::HashString("Append");


        MergeStrategy GetMergeStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Overwrite_HASH)
          {
            return MergeStrategy::Overwrite;
          }
          else if (hashCode == FailOnConflict_HASH)
          {
            return MergeStrategy::FailOnConflict;
          }
          else if (hashCode == Append_HASH)
          {
            return MergeStrategy::Append;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MergeStrategy>(hashCode);
          }

          return MergeStrategy::NOT_SET;
        }

        Aws::String GetNameForMergeStrategy(MergeStrategy enumValue)
        {
          switch(enumValue)
          {
          case MergeStrategy::NOT_SET:
            return {};
          case MergeStrategy::Overwrite:
            return "Overwrite";
          case MergeStrategy::FailOnConflict:
            return "FailOnConflict";
          case MergeStrategy::Append:
            return "Append";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MergeStrategyMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
