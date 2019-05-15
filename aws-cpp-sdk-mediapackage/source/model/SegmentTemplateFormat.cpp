/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
