/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageState.h>
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
      namespace ImageStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COPYING_HASH = HashingUtils::HashString("COPYING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ImageState GetImageStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ImageState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ImageState::AVAILABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImageState::FAILED;
          }
          else if (hashCode == COPYING_HASH)
          {
            return ImageState::COPYING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ImageState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageState>(hashCode);
          }

          return ImageState::NOT_SET;
        }

        Aws::String GetNameForImageState(ImageState enumValue)
        {
          switch(enumValue)
          {
          case ImageState::PENDING:
            return "PENDING";
          case ImageState::AVAILABLE:
            return "AVAILABLE";
          case ImageState::FAILED:
            return "FAILED";
          case ImageState::COPYING:
            return "COPYING";
          case ImageState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
