/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingStatusUpdate.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace FindingStatusUpdateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t ARCHIVED_HASH = ConstExprHashingUtils::HashString("ARCHIVED");


        FindingStatusUpdate GetFindingStatusUpdateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FindingStatusUpdate::ACTIVE;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return FindingStatusUpdate::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingStatusUpdate>(hashCode);
          }

          return FindingStatusUpdate::NOT_SET;
        }

        Aws::String GetNameForFindingStatusUpdate(FindingStatusUpdate enumValue)
        {
          switch(enumValue)
          {
          case FindingStatusUpdate::NOT_SET:
            return {};
          case FindingStatusUpdate::ACTIVE:
            return "ACTIVE";
          case FindingStatusUpdate::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingStatusUpdateMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
