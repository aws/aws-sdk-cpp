/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageEventProcessingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace LineageEventProcessingStatusMapper
      {

        static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LineageEventProcessingStatus GetLineageEventProcessingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTED_HASH)
          {
            return LineageEventProcessingStatus::REQUESTED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return LineageEventProcessingStatus::PROCESSING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return LineageEventProcessingStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LineageEventProcessingStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineageEventProcessingStatus>(hashCode);
          }

          return LineageEventProcessingStatus::NOT_SET;
        }

        Aws::String GetNameForLineageEventProcessingStatus(LineageEventProcessingStatus enumValue)
        {
          switch(enumValue)
          {
          case LineageEventProcessingStatus::NOT_SET:
            return {};
          case LineageEventProcessingStatus::REQUESTED:
            return "REQUESTED";
          case LineageEventProcessingStatus::PROCESSING:
            return "PROCESSING";
          case LineageEventProcessingStatus::SUCCESS:
            return "SUCCESS";
          case LineageEventProcessingStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineageEventProcessingStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
