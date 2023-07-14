/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/FaceAttributes.h>
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
      namespace FaceAttributesMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        FaceAttributes GetFaceAttributesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return FaceAttributes::DEFAULT;
          }
          else if (hashCode == ALL_HASH)
          {
            return FaceAttributes::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FaceAttributes>(hashCode);
          }

          return FaceAttributes::NOT_SET;
        }

        Aws::String GetNameForFaceAttributes(FaceAttributes enumValue)
        {
          switch(enumValue)
          {
          case FaceAttributes::DEFAULT:
            return "DEFAULT";
          case FaceAttributes::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FaceAttributesMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
