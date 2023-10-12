/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FindingStatus.h>
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
      namespace FindingStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t SUPPRESSED_HASH = ConstExprHashingUtils::HashString("SUPPRESSED");
        static constexpr uint32_t CLOSED_HASH = ConstExprHashingUtils::HashString("CLOSED");


        FindingStatus GetFindingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FindingStatus::ACTIVE;
          }
          else if (hashCode == SUPPRESSED_HASH)
          {
            return FindingStatus::SUPPRESSED;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return FindingStatus::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingStatus>(hashCode);
          }

          return FindingStatus::NOT_SET;
        }

        Aws::String GetNameForFindingStatus(FindingStatus enumValue)
        {
          switch(enumValue)
          {
          case FindingStatus::NOT_SET:
            return {};
          case FindingStatus::ACTIVE:
            return "ACTIVE";
          case FindingStatus::SUPPRESSED:
            return "SUPPRESSED";
          case FindingStatus::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
