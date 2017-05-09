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

#include <aws/rekognition/model/LandmarkType.h>
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
      namespace LandmarkTypeMapper
      {

        static const int EYE_LEFT_HASH = HashingUtils::HashString("EYE_LEFT");
        static const int EYE_RIGHT_HASH = HashingUtils::HashString("EYE_RIGHT");
        static const int NOSE_HASH = HashingUtils::HashString("NOSE");
        static const int MOUTH_LEFT_HASH = HashingUtils::HashString("MOUTH_LEFT");
        static const int MOUTH_RIGHT_HASH = HashingUtils::HashString("MOUTH_RIGHT");
        static const int LEFT_EYEBROW_LEFT_HASH = HashingUtils::HashString("LEFT_EYEBROW_LEFT");
        static const int LEFT_EYEBROW_RIGHT_HASH = HashingUtils::HashString("LEFT_EYEBROW_RIGHT");
        static const int LEFT_EYEBROW_UP_HASH = HashingUtils::HashString("LEFT_EYEBROW_UP");
        static const int RIGHT_EYEBROW_LEFT_HASH = HashingUtils::HashString("RIGHT_EYEBROW_LEFT");
        static const int RIGHT_EYEBROW_RIGHT_HASH = HashingUtils::HashString("RIGHT_EYEBROW_RIGHT");
        static const int RIGHT_EYEBROW_UP_HASH = HashingUtils::HashString("RIGHT_EYEBROW_UP");
        static const int LEFT_EYE_LEFT_HASH = HashingUtils::HashString("LEFT_EYE_LEFT");
        static const int LEFT_EYE_RIGHT_HASH = HashingUtils::HashString("LEFT_EYE_RIGHT");
        static const int LEFT_EYE_UP_HASH = HashingUtils::HashString("LEFT_EYE_UP");
        static const int LEFT_EYE_DOWN_HASH = HashingUtils::HashString("LEFT_EYE_DOWN");
        static const int RIGHT_EYE_LEFT_HASH = HashingUtils::HashString("RIGHT_EYE_LEFT");
        static const int RIGHT_EYE_RIGHT_HASH = HashingUtils::HashString("RIGHT_EYE_RIGHT");
        static const int RIGHT_EYE_UP_HASH = HashingUtils::HashString("RIGHT_EYE_UP");
        static const int RIGHT_EYE_DOWN_HASH = HashingUtils::HashString("RIGHT_EYE_DOWN");
        static const int NOSE_LEFT_HASH = HashingUtils::HashString("NOSE_LEFT");
        static const int NOSE_RIGHT_HASH = HashingUtils::HashString("NOSE_RIGHT");
        static const int MOUTH_UP_HASH = HashingUtils::HashString("MOUTH_UP");
        static const int MOUTH_DOWN_HASH = HashingUtils::HashString("MOUTH_DOWN");
        static const int LEFT_PUPIL_HASH = HashingUtils::HashString("LEFT_PUPIL");
        static const int RIGHT_PUPIL_HASH = HashingUtils::HashString("RIGHT_PUPIL");


        LandmarkType GetLandmarkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EYE_LEFT_HASH)
          {
            return LandmarkType::EYE_LEFT;
          }
          else if (hashCode == EYE_RIGHT_HASH)
          {
            return LandmarkType::EYE_RIGHT;
          }
          else if (hashCode == NOSE_HASH)
          {
            return LandmarkType::NOSE;
          }
          else if (hashCode == MOUTH_LEFT_HASH)
          {
            return LandmarkType::MOUTH_LEFT;
          }
          else if (hashCode == MOUTH_RIGHT_HASH)
          {
            return LandmarkType::MOUTH_RIGHT;
          }
          else if (hashCode == LEFT_EYEBROW_LEFT_HASH)
          {
            return LandmarkType::LEFT_EYEBROW_LEFT;
          }
          else if (hashCode == LEFT_EYEBROW_RIGHT_HASH)
          {
            return LandmarkType::LEFT_EYEBROW_RIGHT;
          }
          else if (hashCode == LEFT_EYEBROW_UP_HASH)
          {
            return LandmarkType::LEFT_EYEBROW_UP;
          }
          else if (hashCode == RIGHT_EYEBROW_LEFT_HASH)
          {
            return LandmarkType::RIGHT_EYEBROW_LEFT;
          }
          else if (hashCode == RIGHT_EYEBROW_RIGHT_HASH)
          {
            return LandmarkType::RIGHT_EYEBROW_RIGHT;
          }
          else if (hashCode == RIGHT_EYEBROW_UP_HASH)
          {
            return LandmarkType::RIGHT_EYEBROW_UP;
          }
          else if (hashCode == LEFT_EYE_LEFT_HASH)
          {
            return LandmarkType::LEFT_EYE_LEFT;
          }
          else if (hashCode == LEFT_EYE_RIGHT_HASH)
          {
            return LandmarkType::LEFT_EYE_RIGHT;
          }
          else if (hashCode == LEFT_EYE_UP_HASH)
          {
            return LandmarkType::LEFT_EYE_UP;
          }
          else if (hashCode == LEFT_EYE_DOWN_HASH)
          {
            return LandmarkType::LEFT_EYE_DOWN;
          }
          else if (hashCode == RIGHT_EYE_LEFT_HASH)
          {
            return LandmarkType::RIGHT_EYE_LEFT;
          }
          else if (hashCode == RIGHT_EYE_RIGHT_HASH)
          {
            return LandmarkType::RIGHT_EYE_RIGHT;
          }
          else if (hashCode == RIGHT_EYE_UP_HASH)
          {
            return LandmarkType::RIGHT_EYE_UP;
          }
          else if (hashCode == RIGHT_EYE_DOWN_HASH)
          {
            return LandmarkType::RIGHT_EYE_DOWN;
          }
          else if (hashCode == NOSE_LEFT_HASH)
          {
            return LandmarkType::NOSE_LEFT;
          }
          else if (hashCode == NOSE_RIGHT_HASH)
          {
            return LandmarkType::NOSE_RIGHT;
          }
          else if (hashCode == MOUTH_UP_HASH)
          {
            return LandmarkType::MOUTH_UP;
          }
          else if (hashCode == MOUTH_DOWN_HASH)
          {
            return LandmarkType::MOUTH_DOWN;
          }
          else if (hashCode == LEFT_PUPIL_HASH)
          {
            return LandmarkType::LEFT_PUPIL;
          }
          else if (hashCode == RIGHT_PUPIL_HASH)
          {
            return LandmarkType::RIGHT_PUPIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LandmarkType>(hashCode);
          }

          return LandmarkType::NOT_SET;
        }

        Aws::String GetNameForLandmarkType(LandmarkType enumValue)
        {
          switch(enumValue)
          {
          case LandmarkType::EYE_LEFT:
            return "EYE_LEFT";
          case LandmarkType::EYE_RIGHT:
            return "EYE_RIGHT";
          case LandmarkType::NOSE:
            return "NOSE";
          case LandmarkType::MOUTH_LEFT:
            return "MOUTH_LEFT";
          case LandmarkType::MOUTH_RIGHT:
            return "MOUTH_RIGHT";
          case LandmarkType::LEFT_EYEBROW_LEFT:
            return "LEFT_EYEBROW_LEFT";
          case LandmarkType::LEFT_EYEBROW_RIGHT:
            return "LEFT_EYEBROW_RIGHT";
          case LandmarkType::LEFT_EYEBROW_UP:
            return "LEFT_EYEBROW_UP";
          case LandmarkType::RIGHT_EYEBROW_LEFT:
            return "RIGHT_EYEBROW_LEFT";
          case LandmarkType::RIGHT_EYEBROW_RIGHT:
            return "RIGHT_EYEBROW_RIGHT";
          case LandmarkType::RIGHT_EYEBROW_UP:
            return "RIGHT_EYEBROW_UP";
          case LandmarkType::LEFT_EYE_LEFT:
            return "LEFT_EYE_LEFT";
          case LandmarkType::LEFT_EYE_RIGHT:
            return "LEFT_EYE_RIGHT";
          case LandmarkType::LEFT_EYE_UP:
            return "LEFT_EYE_UP";
          case LandmarkType::LEFT_EYE_DOWN:
            return "LEFT_EYE_DOWN";
          case LandmarkType::RIGHT_EYE_LEFT:
            return "RIGHT_EYE_LEFT";
          case LandmarkType::RIGHT_EYE_RIGHT:
            return "RIGHT_EYE_RIGHT";
          case LandmarkType::RIGHT_EYE_UP:
            return "RIGHT_EYE_UP";
          case LandmarkType::RIGHT_EYE_DOWN:
            return "RIGHT_EYE_DOWN";
          case LandmarkType::NOSE_LEFT:
            return "NOSE_LEFT";
          case LandmarkType::NOSE_RIGHT:
            return "NOSE_RIGHT";
          case LandmarkType::MOUTH_UP:
            return "MOUTH_UP";
          case LandmarkType::MOUTH_DOWN:
            return "MOUTH_DOWN";
          case LandmarkType::LEFT_PUPIL:
            return "LEFT_PUPIL";
          case LandmarkType::RIGHT_PUPIL:
            return "RIGHT_PUPIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace LandmarkTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
