/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MergeStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace MergeStrategyMapper
      {

        static const int OVERWRITE_LATEST_HASH = HashingUtils::HashString("OVERWRITE_LATEST");
        static const int FAIL_ON_CONFLICT_HASH = HashingUtils::HashString("FAIL_ON_CONFLICT");


        MergeStrategy GetMergeStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERWRITE_LATEST_HASH)
          {
            return MergeStrategy::OVERWRITE_LATEST;
          }
          else if (hashCode == FAIL_ON_CONFLICT_HASH)
          {
            return MergeStrategy::FAIL_ON_CONFLICT;
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
          case MergeStrategy::OVERWRITE_LATEST:
            return "OVERWRITE_LATEST";
          case MergeStrategy::FAIL_ON_CONFLICT:
            return "FAIL_ON_CONFLICT";
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
  } // namespace LexModelBuildingService
} // namespace Aws
