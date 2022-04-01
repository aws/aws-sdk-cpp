/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static const int eyeLeft_HASH = HashingUtils::HashString("eyeLeft");
        static const int eyeRight_HASH = HashingUtils::HashString("eyeRight");
        static const int nose_HASH = HashingUtils::HashString("nose");
        static const int mouthLeft_HASH = HashingUtils::HashString("mouthLeft");
        static const int mouthRight_HASH = HashingUtils::HashString("mouthRight");
        static const int leftEyeBrowLeft_HASH = HashingUtils::HashString("leftEyeBrowLeft");
        static const int leftEyeBrowRight_HASH = HashingUtils::HashString("leftEyeBrowRight");
        static const int leftEyeBrowUp_HASH = HashingUtils::HashString("leftEyeBrowUp");
        static const int rightEyeBrowLeft_HASH = HashingUtils::HashString("rightEyeBrowLeft");
        static const int rightEyeBrowRight_HASH = HashingUtils::HashString("rightEyeBrowRight");
        static const int rightEyeBrowUp_HASH = HashingUtils::HashString("rightEyeBrowUp");
        static const int leftEyeLeft_HASH = HashingUtils::HashString("leftEyeLeft");
        static const int leftEyeRight_HASH = HashingUtils::HashString("leftEyeRight");
        static const int leftEyeUp_HASH = HashingUtils::HashString("leftEyeUp");
        static const int leftEyeDown_HASH = HashingUtils::HashString("leftEyeDown");
        static const int rightEyeLeft_HASH = HashingUtils::HashString("rightEyeLeft");
        static const int rightEyeRight_HASH = HashingUtils::HashString("rightEyeRight");
        static const int rightEyeUp_HASH = HashingUtils::HashString("rightEyeUp");
        static const int rightEyeDown_HASH = HashingUtils::HashString("rightEyeDown");
        static const int noseLeft_HASH = HashingUtils::HashString("noseLeft");
        static const int noseRight_HASH = HashingUtils::HashString("noseRight");
        static const int mouthUp_HASH = HashingUtils::HashString("mouthUp");
        static const int mouthDown_HASH = HashingUtils::HashString("mouthDown");
        static const int leftPupil_HASH = HashingUtils::HashString("leftPupil");
        static const int rightPupil_HASH = HashingUtils::HashString("rightPupil");
        static const int upperJawlineLeft_HASH = HashingUtils::HashString("upperJawlineLeft");
        static const int midJawlineLeft_HASH = HashingUtils::HashString("midJawlineLeft");
        static const int chinBottom_HASH = HashingUtils::HashString("chinBottom");
        static const int midJawlineRight_HASH = HashingUtils::HashString("midJawlineRight");
        static const int upperJawlineRight_HASH = HashingUtils::HashString("upperJawlineRight");


        LandmarkType GetLandmarkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == eyeLeft_HASH)
          {
            return LandmarkType::eyeLeft;
          }
          else if (hashCode == eyeRight_HASH)
          {
            return LandmarkType::eyeRight;
          }
          else if (hashCode == nose_HASH)
          {
            return LandmarkType::nose;
          }
          else if (hashCode == mouthLeft_HASH)
          {
            return LandmarkType::mouthLeft;
          }
          else if (hashCode == mouthRight_HASH)
          {
            return LandmarkType::mouthRight;
          }
          else if (hashCode == leftEyeBrowLeft_HASH)
          {
            return LandmarkType::leftEyeBrowLeft;
          }
          else if (hashCode == leftEyeBrowRight_HASH)
          {
            return LandmarkType::leftEyeBrowRight;
          }
          else if (hashCode == leftEyeBrowUp_HASH)
          {
            return LandmarkType::leftEyeBrowUp;
          }
          else if (hashCode == rightEyeBrowLeft_HASH)
          {
            return LandmarkType::rightEyeBrowLeft;
          }
          else if (hashCode == rightEyeBrowRight_HASH)
          {
            return LandmarkType::rightEyeBrowRight;
          }
          else if (hashCode == rightEyeBrowUp_HASH)
          {
            return LandmarkType::rightEyeBrowUp;
          }
          else if (hashCode == leftEyeLeft_HASH)
          {
            return LandmarkType::leftEyeLeft;
          }
          else if (hashCode == leftEyeRight_HASH)
          {
            return LandmarkType::leftEyeRight;
          }
          else if (hashCode == leftEyeUp_HASH)
          {
            return LandmarkType::leftEyeUp;
          }
          else if (hashCode == leftEyeDown_HASH)
          {
            return LandmarkType::leftEyeDown;
          }
          else if (hashCode == rightEyeLeft_HASH)
          {
            return LandmarkType::rightEyeLeft;
          }
          else if (hashCode == rightEyeRight_HASH)
          {
            return LandmarkType::rightEyeRight;
          }
          else if (hashCode == rightEyeUp_HASH)
          {
            return LandmarkType::rightEyeUp;
          }
          else if (hashCode == rightEyeDown_HASH)
          {
            return LandmarkType::rightEyeDown;
          }
          else if (hashCode == noseLeft_HASH)
          {
            return LandmarkType::noseLeft;
          }
          else if (hashCode == noseRight_HASH)
          {
            return LandmarkType::noseRight;
          }
          else if (hashCode == mouthUp_HASH)
          {
            return LandmarkType::mouthUp;
          }
          else if (hashCode == mouthDown_HASH)
          {
            return LandmarkType::mouthDown;
          }
          else if (hashCode == leftPupil_HASH)
          {
            return LandmarkType::leftPupil;
          }
          else if (hashCode == rightPupil_HASH)
          {
            return LandmarkType::rightPupil;
          }
          else if (hashCode == upperJawlineLeft_HASH)
          {
            return LandmarkType::upperJawlineLeft;
          }
          else if (hashCode == midJawlineLeft_HASH)
          {
            return LandmarkType::midJawlineLeft;
          }
          else if (hashCode == chinBottom_HASH)
          {
            return LandmarkType::chinBottom;
          }
          else if (hashCode == midJawlineRight_HASH)
          {
            return LandmarkType::midJawlineRight;
          }
          else if (hashCode == upperJawlineRight_HASH)
          {
            return LandmarkType::upperJawlineRight;
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
          case LandmarkType::eyeLeft:
            return "eyeLeft";
          case LandmarkType::eyeRight:
            return "eyeRight";
          case LandmarkType::nose:
            return "nose";
          case LandmarkType::mouthLeft:
            return "mouthLeft";
          case LandmarkType::mouthRight:
            return "mouthRight";
          case LandmarkType::leftEyeBrowLeft:
            return "leftEyeBrowLeft";
          case LandmarkType::leftEyeBrowRight:
            return "leftEyeBrowRight";
          case LandmarkType::leftEyeBrowUp:
            return "leftEyeBrowUp";
          case LandmarkType::rightEyeBrowLeft:
            return "rightEyeBrowLeft";
          case LandmarkType::rightEyeBrowRight:
            return "rightEyeBrowRight";
          case LandmarkType::rightEyeBrowUp:
            return "rightEyeBrowUp";
          case LandmarkType::leftEyeLeft:
            return "leftEyeLeft";
          case LandmarkType::leftEyeRight:
            return "leftEyeRight";
          case LandmarkType::leftEyeUp:
            return "leftEyeUp";
          case LandmarkType::leftEyeDown:
            return "leftEyeDown";
          case LandmarkType::rightEyeLeft:
            return "rightEyeLeft";
          case LandmarkType::rightEyeRight:
            return "rightEyeRight";
          case LandmarkType::rightEyeUp:
            return "rightEyeUp";
          case LandmarkType::rightEyeDown:
            return "rightEyeDown";
          case LandmarkType::noseLeft:
            return "noseLeft";
          case LandmarkType::noseRight:
            return "noseRight";
          case LandmarkType::mouthUp:
            return "mouthUp";
          case LandmarkType::mouthDown:
            return "mouthDown";
          case LandmarkType::leftPupil:
            return "leftPupil";
          case LandmarkType::rightPupil:
            return "rightPupil";
          case LandmarkType::upperJawlineLeft:
            return "upperJawlineLeft";
          case LandmarkType::midJawlineLeft:
            return "midJawlineLeft";
          case LandmarkType::chinBottom:
            return "chinBottom";
          case LandmarkType::midJawlineRight:
            return "midJawlineRight";
          case LandmarkType::upperJawlineRight:
            return "upperJawlineRight";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LandmarkTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
