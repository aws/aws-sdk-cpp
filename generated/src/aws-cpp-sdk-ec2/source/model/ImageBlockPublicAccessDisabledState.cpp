/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageBlockPublicAccessDisabledState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ImageBlockPublicAccessDisabledStateMapper
      {

        static const int unblocked_HASH = HashingUtils::HashString("unblocked");


        ImageBlockPublicAccessDisabledState GetImageBlockPublicAccessDisabledStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unblocked_HASH)
          {
            return ImageBlockPublicAccessDisabledState::unblocked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageBlockPublicAccessDisabledState>(hashCode);
          }

          return ImageBlockPublicAccessDisabledState::NOT_SET;
        }

        Aws::String GetNameForImageBlockPublicAccessDisabledState(ImageBlockPublicAccessDisabledState enumValue)
        {
          switch(enumValue)
          {
          case ImageBlockPublicAccessDisabledState::NOT_SET:
            return {};
          case ImageBlockPublicAccessDisabledState::unblocked:
            return "unblocked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageBlockPublicAccessDisabledStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
