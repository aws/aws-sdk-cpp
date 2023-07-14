/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/SegmentTemplateFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace SegmentTemplateFormatMapper
      {

        static const int NUMBER_WITH_TIMELINE_HASH = HashingUtils::HashString("NUMBER_WITH_TIMELINE");
        static const int TIME_WITH_TIMELINE_HASH = HashingUtils::HashString("TIME_WITH_TIMELINE");
        static const int NUMBER_WITH_DURATION_HASH = HashingUtils::HashString("NUMBER_WITH_DURATION");


        SegmentTemplateFormat GetSegmentTemplateFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NUMBER_WITH_TIMELINE_HASH)
          {
            return SegmentTemplateFormat::NUMBER_WITH_TIMELINE;
          }
          else if (hashCode == TIME_WITH_TIMELINE_HASH)
          {
            return SegmentTemplateFormat::TIME_WITH_TIMELINE;
          }
          else if (hashCode == NUMBER_WITH_DURATION_HASH)
          {
            return SegmentTemplateFormat::NUMBER_WITH_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentTemplateFormat>(hashCode);
          }

          return SegmentTemplateFormat::NOT_SET;
        }

        Aws::String GetNameForSegmentTemplateFormat(SegmentTemplateFormat enumValue)
        {
          switch(enumValue)
          {
          case SegmentTemplateFormat::NUMBER_WITH_TIMELINE:
            return "NUMBER_WITH_TIMELINE";
          case SegmentTemplateFormat::TIME_WITH_TIMELINE:
            return "TIME_WITH_TIMELINE";
          case SegmentTemplateFormat::NUMBER_WITH_DURATION:
            return "NUMBER_WITH_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentTemplateFormatMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
