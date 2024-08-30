/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/EntityRejectionErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace EntityRejectionErrorTypeMapper
      {

        static const int InvalidEntity_HASH = HashingUtils::HashString("InvalidEntity");
        static const int InvalidTypeValue_HASH = HashingUtils::HashString("InvalidTypeValue");
        static const int InvalidKeyAttributes_HASH = HashingUtils::HashString("InvalidKeyAttributes");
        static const int InvalidAttributes_HASH = HashingUtils::HashString("InvalidAttributes");
        static const int EntitySizeTooLarge_HASH = HashingUtils::HashString("EntitySizeTooLarge");
        static const int UnsupportedLogGroupType_HASH = HashingUtils::HashString("UnsupportedLogGroupType");
        static const int MissingRequiredFields_HASH = HashingUtils::HashString("MissingRequiredFields");


        EntityRejectionErrorType GetEntityRejectionErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidEntity_HASH)
          {
            return EntityRejectionErrorType::InvalidEntity;
          }
          else if (hashCode == InvalidTypeValue_HASH)
          {
            return EntityRejectionErrorType::InvalidTypeValue;
          }
          else if (hashCode == InvalidKeyAttributes_HASH)
          {
            return EntityRejectionErrorType::InvalidKeyAttributes;
          }
          else if (hashCode == InvalidAttributes_HASH)
          {
            return EntityRejectionErrorType::InvalidAttributes;
          }
          else if (hashCode == EntitySizeTooLarge_HASH)
          {
            return EntityRejectionErrorType::EntitySizeTooLarge;
          }
          else if (hashCode == UnsupportedLogGroupType_HASH)
          {
            return EntityRejectionErrorType::UnsupportedLogGroupType;
          }
          else if (hashCode == MissingRequiredFields_HASH)
          {
            return EntityRejectionErrorType::MissingRequiredFields;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityRejectionErrorType>(hashCode);
          }

          return EntityRejectionErrorType::NOT_SET;
        }

        Aws::String GetNameForEntityRejectionErrorType(EntityRejectionErrorType enumValue)
        {
          switch(enumValue)
          {
          case EntityRejectionErrorType::NOT_SET:
            return {};
          case EntityRejectionErrorType::InvalidEntity:
            return "InvalidEntity";
          case EntityRejectionErrorType::InvalidTypeValue:
            return "InvalidTypeValue";
          case EntityRejectionErrorType::InvalidKeyAttributes:
            return "InvalidKeyAttributes";
          case EntityRejectionErrorType::InvalidAttributes:
            return "InvalidAttributes";
          case EntityRejectionErrorType::EntitySizeTooLarge:
            return "EntitySizeTooLarge";
          case EntityRejectionErrorType::UnsupportedLogGroupType:
            return "UnsupportedLogGroupType";
          case EntityRejectionErrorType::MissingRequiredFields:
            return "MissingRequiredFields";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityRejectionErrorTypeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
