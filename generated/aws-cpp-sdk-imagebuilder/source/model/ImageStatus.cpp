/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageStatus.h>
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
      namespace ImageStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
        static const int TESTING_HASH = HashingUtils::HashString("TESTING");
        static const int DISTRIBUTING_HASH = HashingUtils::HashString("DISTRIBUTING");
        static const int INTEGRATING_HASH = HashingUtils::HashString("INTEGRATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ImageStatus GetImageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ImageStatus::PENDING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ImageStatus::CREATING;
          }
          else if (hashCode == BUILDING_HASH)
          {
            return ImageStatus::BUILDING;
          }
          else if (hashCode == TESTING_HASH)
          {
            return ImageStatus::TESTING;
          }
          else if (hashCode == DISTRIBUTING_HASH)
          {
            return ImageStatus::DISTRIBUTING;
          }
          else if (hashCode == INTEGRATING_HASH)
          {
            return ImageStatus::INTEGRATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ImageStatus::AVAILABLE;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ImageStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImageStatus::FAILED;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return ImageStatus::DEPRECATED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ImageStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageStatus>(hashCode);
          }

          return ImageStatus::NOT_SET;
        }

        Aws::String GetNameForImageStatus(ImageStatus enumValue)
        {
          switch(enumValue)
          {
          case ImageStatus::PENDING:
            return "PENDING";
          case ImageStatus::CREATING:
            return "CREATING";
          case ImageStatus::BUILDING:
            return "BUILDING";
          case ImageStatus::TESTING:
            return "TESTING";
          case ImageStatus::DISTRIBUTING:
            return "DISTRIBUTING";
          case ImageStatus::INTEGRATING:
            return "INTEGRATING";
          case ImageStatus::AVAILABLE:
            return "AVAILABLE";
          case ImageStatus::CANCELLED:
            return "CANCELLED";
          case ImageStatus::FAILED:
            return "FAILED";
          case ImageStatus::DEPRECATED:
            return "DEPRECATED";
          case ImageStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
