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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SCANNING_HASH = HashingUtils::HashString("SCANNING");
        static const int COLLECTING_HASH = HashingUtils::HashString("COLLECTING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int ABANDONED_HASH = HashingUtils::HashString("ABANDONED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        ImageScanStatus GetImageScanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
