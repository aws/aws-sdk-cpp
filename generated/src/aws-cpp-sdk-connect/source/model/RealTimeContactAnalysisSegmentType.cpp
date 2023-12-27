/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RealTimeContactAnalysisSegmentTypeMapper
      {

        static const int Transcript_HASH = HashingUtils::HashString("Transcript");
        static const int Categories_HASH = HashingUtils::HashString("Categories");
        static const int Issues_HASH = HashingUtils::HashString("Issues");
        static const int Event_HASH = HashingUtils::HashString("Event");
        static const int Attachments_HASH = HashingUtils::HashString("Attachments");


        RealTimeContactAnalysisSegmentType GetRealTimeContactAnalysisSegmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Transcript_HASH)
          {
            return RealTimeContactAnalysisSegmentType::Transcript;
          }
          else if (hashCode == Categories_HASH)
          {
            return RealTimeContactAnalysisSegmentType::Categories;
          }
          else if (hashCode == Issues_HASH)
          {
            return RealTimeContactAnalysisSegmentType::Issues;
          }
          else if (hashCode == Event_HASH)
          {
            return RealTimeContactAnalysisSegmentType::Event;
          }
          else if (hashCode == Attachments_HASH)
          {
            return RealTimeContactAnalysisSegmentType::Attachments;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisSegmentType>(hashCode);
          }

          return RealTimeContactAnalysisSegmentType::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisSegmentType(RealTimeContactAnalysisSegmentType enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisSegmentType::NOT_SET:
            return {};
          case RealTimeContactAnalysisSegmentType::Transcript:
            return "Transcript";
          case RealTimeContactAnalysisSegmentType::Categories:
            return "Categories";
          case RealTimeContactAnalysisSegmentType::Issues:
            return "Issues";
          case RealTimeContactAnalysisSegmentType::Event:
            return "Event";
          case RealTimeContactAnalysisSegmentType::Attachments:
            return "Attachments";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealTimeContactAnalysisSegmentTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
