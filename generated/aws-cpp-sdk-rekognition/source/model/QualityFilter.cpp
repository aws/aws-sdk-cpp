/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/QualityFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace QualityFilterMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        QualityFilter GetQualityFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return QualityFilter::NONE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return QualityFilter::AUTO;
          }
          else if (hashCode == LOW_HASH)
          {
            return QualityFilter::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return QualityFilter::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return QualityFilter::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QualityFilter>(hashCode);
          }

          return QualityFilter::NOT_SET;
        }

        Aws::String GetNameForQualityFilter(QualityFilter enumValue)
        {
          switch(enumValue)
          {
          case QualityFilter::NONE:
            return "NONE";
          case QualityFilter::AUTO:
            return "AUTO";
          case QualityFilter::LOW:
            return "LOW";
          case QualityFilter::MEDIUM:
            return "MEDIUM";
          case QualityFilter::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QualityFilterMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
