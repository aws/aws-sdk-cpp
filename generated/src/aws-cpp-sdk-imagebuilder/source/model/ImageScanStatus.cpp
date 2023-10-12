/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageScanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace ImageScanStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SCANNING_HASH = ConstExprHashingUtils::HashString("SCANNING");
        static constexpr uint32_t COLLECTING_HASH = ConstExprHashingUtils::HashString("COLLECTING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t ABANDONED_HASH = ConstExprHashingUtils::HashString("ABANDONED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");


        ImageScanStatus GetImageScanStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ImageScanStatus::PENDING;
          }
          else if (hashCode == SCANNING_HASH)
          {
            return ImageScanStatus::SCANNING;
          }
          else if (hashCode == COLLECTING_HASH)
          {
            return ImageScanStatus::COLLECTING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ImageScanStatus::COMPLETED;
          }
          else if (hashCode == ABANDONED_HASH)
          {
            return ImageScanStatus::ABANDONED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImageScanStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return ImageScanStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageScanStatus>(hashCode);
          }

          return ImageScanStatus::NOT_SET;
        }

        Aws::String GetNameForImageScanStatus(ImageScanStatus enumValue)
        {
          switch(enumValue)
          {
          case ImageScanStatus::NOT_SET:
            return {};
          case ImageScanStatus::PENDING:
            return "PENDING";
          case ImageScanStatus::SCANNING:
            return "SCANNING";
          case ImageScanStatus::COLLECTING:
            return "COLLECTING";
          case ImageScanStatus::COMPLETED:
            return "COMPLETED";
          case ImageScanStatus::ABANDONED:
            return "ABANDONED";
          case ImageScanStatus::FAILED:
            return "FAILED";
          case ImageScanStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageScanStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
