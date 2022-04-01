/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/BodyPart.h>
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
      namespace BodyPartMapper
      {

        static const int FACE_HASH = HashingUtils::HashString("FACE");
        static const int HEAD_HASH = HashingUtils::HashString("HEAD");
        static const int LEFT_HAND_HASH = HashingUtils::HashString("LEFT_HAND");
        static const int RIGHT_HAND_HASH = HashingUtils::HashString("RIGHT_HAND");


        BodyPart GetBodyPartForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FACE_HASH)
          {
            return BodyPart::FACE;
          }
          else if (hashCode == HEAD_HASH)
          {
            return BodyPart::HEAD;
          }
          else if (hashCode == LEFT_HAND_HASH)
          {
            return BodyPart::LEFT_HAND;
          }
          else if (hashCode == RIGHT_HAND_HASH)
          {
            return BodyPart::RIGHT_HAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BodyPart>(hashCode);
          }

          return BodyPart::NOT_SET;
        }

        Aws::String GetNameForBodyPart(BodyPart enumValue)
        {
          switch(enumValue)
          {
          case BodyPart::FACE:
            return "FACE";
          case BodyPart::HEAD:
            return "HEAD";
          case BodyPart::LEFT_HAND:
            return "LEFT_HAND";
          case BodyPart::RIGHT_HAND:
            return "RIGHT_HAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BodyPartMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
