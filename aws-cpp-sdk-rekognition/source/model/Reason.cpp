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

#include <aws/rekognition/model/Reason.h>
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
      namespace ReasonMapper
      {

        static const int EXCEEDS_MAX_FACES_HASH = HashingUtils::HashString("EXCEEDS_MAX_FACES");
        static const int EXTREME_POSE_HASH = HashingUtils::HashString("EXTREME_POSE");
        static const int LOW_BRIGHTNESS_HASH = HashingUtils::HashString("LOW_BRIGHTNESS");
        static const int LOW_SHARPNESS_HASH = HashingUtils::HashString("LOW_SHARPNESS");
        static const int LOW_CONFIDENCE_HASH = HashingUtils::HashString("LOW_CONFIDENCE");
        static const int SMALL_BOUNDING_BOX_HASH = HashingUtils::HashString("SMALL_BOUNDING_BOX");


        Reason GetReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCEEDS_MAX_FACES_HASH)
          {
            return Reason::EXCEEDS_MAX_FACES;
          }
          else if (hashCode == EXTREME_POSE_HASH)
          {
            return Reason::EXTREME_POSE;
          }
          else if (hashCode == LOW_BRIGHTNESS_HASH)
          {
            return Reason::LOW_BRIGHTNESS;
          }
          else if (hashCode == LOW_SHARPNESS_HASH)
          {
            return Reason::LOW_SHARPNESS;
          }
          else if (hashCode == LOW_CONFIDENCE_HASH)
          {
            return Reason::LOW_CONFIDENCE;
          }
          else if (hashCode == SMALL_BOUNDING_BOX_HASH)
          {
            return Reason::SMALL_BOUNDING_BOX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Reason>(hashCode);
          }

          return Reason::NOT_SET;
        }

        Aws::String GetNameForReason(Reason enumValue)
        {
          switch(enumValue)
          {
          case Reason::EXCEEDS_MAX_FACES:
            return "EXCEEDS_MAX_FACES";
          case Reason::EXTREME_POSE:
            return "EXTREME_POSE";
          case Reason::LOW_BRIGHTNESS:
            return "LOW_BRIGHTNESS";
          case Reason::LOW_SHARPNESS:
            return "LOW_SHARPNESS";
          case Reason::LOW_CONFIDENCE:
            return "LOW_CONFIDENCE";
          case Reason::SMALL_BOUNDING_BOX:
            return "SMALL_BOUNDING_BOX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReasonMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
