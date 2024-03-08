/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/BlockerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarconnections
  {
    namespace Model
    {
      namespace BlockerStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");


        BlockerStatus GetBlockerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return BlockerStatus::ACTIVE;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return BlockerStatus::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockerStatus>(hashCode);
          }

          return BlockerStatus::NOT_SET;
        }

        Aws::String GetNameForBlockerStatus(BlockerStatus enumValue)
        {
          switch(enumValue)
          {
          case BlockerStatus::NOT_SET:
            return {};
          case BlockerStatus::ACTIVE:
            return "ACTIVE";
          case BlockerStatus::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockerStatusMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
