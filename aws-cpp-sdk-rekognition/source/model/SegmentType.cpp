/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SegmentType.h>
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
      namespace SegmentTypeMapper
      {

        static const int TECHNICAL_CUE_HASH = HashingUtils::HashString("TECHNICAL_CUE");
        static const int SHOT_HASH = HashingUtils::HashString("SHOT");


        SegmentType GetSegmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TECHNICAL_CUE_HASH)
          {
            return SegmentType::TECHNICAL_CUE;
          }
          else if (hashCode == SHOT_HASH)
          {
            return SegmentType::SHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentType>(hashCode);
          }

          return SegmentType::NOT_SET;
        }

        Aws::String GetNameForSegmentType(SegmentType enumValue)
        {
          switch(enumValue)
          {
          case SegmentType::TECHNICAL_CUE:
            return "TECHNICAL_CUE";
          case SegmentType::SHOT:
            return "SHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
