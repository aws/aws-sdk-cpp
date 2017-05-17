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

#include <aws/rekognition/model/OrientationCorrection.h>
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
      namespace OrientationCorrectionMapper
      {

        static const int ROTATE_0_HASH = HashingUtils::HashString("ROTATE_0");
        static const int ROTATE_90_HASH = HashingUtils::HashString("ROTATE_90");
        static const int ROTATE_180_HASH = HashingUtils::HashString("ROTATE_180");
        static const int ROTATE_270_HASH = HashingUtils::HashString("ROTATE_270");


        OrientationCorrection GetOrientationCorrectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROTATE_0_HASH)
          {
            return OrientationCorrection::ROTATE_0;
          }
          else if (hashCode == ROTATE_90_HASH)
          {
            return OrientationCorrection::ROTATE_90;
          }
          else if (hashCode == ROTATE_180_HASH)
          {
            return OrientationCorrection::ROTATE_180;
          }
          else if (hashCode == ROTATE_270_HASH)
          {
            return OrientationCorrection::ROTATE_270;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrientationCorrection>(hashCode);
          }

          return OrientationCorrection::NOT_SET;
        }

        Aws::String GetNameForOrientationCorrection(OrientationCorrection enumValue)
        {
          switch(enumValue)
          {
          case OrientationCorrection::ROTATE_0:
            return "ROTATE_0";
          case OrientationCorrection::ROTATE_90:
            return "ROTATE_90";
          case OrientationCorrection::ROTATE_180:
            return "ROTATE_180";
          case OrientationCorrection::ROTATE_270:
            return "ROTATE_270";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OrientationCorrectionMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
