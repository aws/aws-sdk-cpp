/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageState.h>
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
      namespace ImageStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t invalid_HASH = ConstExprHashingUtils::HashString("invalid");
        static constexpr uint32_t deregistered_HASH = ConstExprHashingUtils::HashString("deregistered");
        static constexpr uint32_t transient_HASH = ConstExprHashingUtils::HashString("transient");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");


        ImageState GetImageStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ImageState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return ImageState::available;
          }
          else if (hashCode == invalid_HASH)
          {
            return ImageState::invalid;
          }
          else if (hashCode == deregistered_HASH)
          {
            return ImageState::deregistered;
          }
          else if (hashCode == transient_HASH)
          {
            return ImageState::transient;
          }
          else if (hashCode == failed_HASH)
          {
            return ImageState::failed;
          }
          else if (hashCode == error_HASH)
          {
            return ImageState::error;
          }
          else if (hashCode == disabled_HASH)
          {
            return ImageState::disabled;
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
          case ImageState::NOT_SET:
            return {};
          case ImageState::pending:
            return "pending";
          case ImageState::available:
            return "available";
          case ImageState::invalid:
            return "invalid";
          case ImageState::deregistered:
            return "deregistered";
          case ImageState::transient:
            return "transient";
          case ImageState::failed:
            return "failed";
          case ImageState::error:
            return "error";
          case ImageState::disabled:
            return "disabled";
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
  } // namespace EC2
} // namespace Aws
