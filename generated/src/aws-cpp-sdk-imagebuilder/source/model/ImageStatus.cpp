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

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t BUILDING_HASH = ConstExprHashingUtils::HashString("BUILDING");
        static constexpr uint32_t TESTING_HASH = ConstExprHashingUtils::HashString("TESTING");
        static constexpr uint32_t DISTRIBUTING_HASH = ConstExprHashingUtils::HashString("DISTRIBUTING");
        static constexpr uint32_t INTEGRATING_HASH = ConstExprHashingUtils::HashString("INTEGRATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ImageStatus GetImageStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ImageStatus::NOT_SET:
            return {};
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
