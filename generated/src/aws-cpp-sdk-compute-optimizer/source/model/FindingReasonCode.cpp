/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/FindingReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace FindingReasonCodeMapper
      {

        static constexpr uint32_t MemoryOverprovisioned_HASH = ConstExprHashingUtils::HashString("MemoryOverprovisioned");
        static constexpr uint32_t MemoryUnderprovisioned_HASH = ConstExprHashingUtils::HashString("MemoryUnderprovisioned");


        FindingReasonCode GetFindingReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MemoryOverprovisioned_HASH)
          {
            return FindingReasonCode::MemoryOverprovisioned;
          }
          else if (hashCode == MemoryUnderprovisioned_HASH)
          {
            return FindingReasonCode::MemoryUnderprovisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingReasonCode>(hashCode);
          }

          return FindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForFindingReasonCode(FindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case FindingReasonCode::NOT_SET:
            return {};
          case FindingReasonCode::MemoryOverprovisioned:
            return "MemoryOverprovisioned";
          case FindingReasonCode::MemoryUnderprovisioned:
            return "MemoryUnderprovisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
