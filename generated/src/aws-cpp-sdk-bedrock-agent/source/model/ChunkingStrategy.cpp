/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ChunkingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace ChunkingStrategyMapper
      {

        static const int FIXED_SIZE_HASH = HashingUtils::HashString("FIXED_SIZE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ChunkingStrategy GetChunkingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_SIZE_HASH)
          {
            return ChunkingStrategy::FIXED_SIZE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ChunkingStrategy::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChunkingStrategy>(hashCode);
          }

          return ChunkingStrategy::NOT_SET;
        }

        Aws::String GetNameForChunkingStrategy(ChunkingStrategy enumValue)
        {
          switch(enumValue)
          {
          case ChunkingStrategy::NOT_SET:
            return {};
          case ChunkingStrategy::FIXED_SIZE:
            return "FIXED_SIZE";
          case ChunkingStrategy::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChunkingStrategyMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
