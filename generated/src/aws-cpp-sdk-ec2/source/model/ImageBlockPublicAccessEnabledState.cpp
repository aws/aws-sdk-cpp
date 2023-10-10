/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageBlockPublicAccessEnabledState.h>
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
      namespace ImageBlockPublicAccessEnabledStateMapper
      {

        static const int block_new_sharing_HASH = HashingUtils::HashString("block-new-sharing");


        ImageBlockPublicAccessEnabledState GetImageBlockPublicAccessEnabledStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == block_new_sharing_HASH)
          {
            return ImageBlockPublicAccessEnabledState::block_new_sharing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageBlockPublicAccessEnabledState>(hashCode);
          }

          return ImageBlockPublicAccessEnabledState::NOT_SET;
        }

        Aws::String GetNameForImageBlockPublicAccessEnabledState(ImageBlockPublicAccessEnabledState enumValue)
        {
          switch(enumValue)
          {
          case ImageBlockPublicAccessEnabledState::NOT_SET:
            return {};
          case ImageBlockPublicAccessEnabledState::block_new_sharing:
            return "block-new-sharing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageBlockPublicAccessEnabledStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
