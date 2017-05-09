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

#include <aws/appstream/model/ImageStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace ImageStateChangeReasonCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int IMAGE_BUILDER_NOT_AVAILABLE_HASH = HashingUtils::HashString("IMAGE_BUILDER_NOT_AVAILABLE");


        ImageStateChangeReasonCode GetImageStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ImageStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == IMAGE_BUILDER_NOT_AVAILABLE_HASH)
          {
            return ImageStateChangeReasonCode::IMAGE_BUILDER_NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageStateChangeReasonCode>(hashCode);
          }

          return ImageStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForImageStateChangeReasonCode(ImageStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ImageStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ImageStateChangeReasonCode::IMAGE_BUILDER_NOT_AVAILABLE:
            return "IMAGE_BUILDER_NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ImageStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
