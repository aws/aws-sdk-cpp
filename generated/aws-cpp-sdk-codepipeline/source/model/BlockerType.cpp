/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/BlockerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace BlockerTypeMapper
      {

        static const int Schedule_HASH = HashingUtils::HashString("Schedule");


        BlockerType GetBlockerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Schedule_HASH)
          {
            return BlockerType::Schedule;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockerType>(hashCode);
          }

          return BlockerType::NOT_SET;
        }

        Aws::String GetNameForBlockerType(BlockerType enumValue)
        {
          switch(enumValue)
          {
          case BlockerType::Schedule:
            return "Schedule";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockerTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
