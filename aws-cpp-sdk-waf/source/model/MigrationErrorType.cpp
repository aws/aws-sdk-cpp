/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/MigrationErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace MigrationErrorTypeMapper
      {

        static const int ENTITY_NOT_SUPPORTED_HASH = HashingUtils::HashString("ENTITY_NOT_SUPPORTED");
        static const int ENTITY_NOT_FOUND_HASH = HashingUtils::HashString("ENTITY_NOT_FOUND");
        static const int S3_BUCKET_NO_PERMISSION_HASH = HashingUtils::HashString("S3_BUCKET_NO_PERMISSION");
        static const int S3_BUCKET_NOT_ACCESSIBLE_HASH = HashingUtils::HashString("S3_BUCKET_NOT_ACCESSIBLE");
        static const int S3_BUCKET_NOT_FOUND_HASH = HashingUtils::HashString("S3_BUCKET_NOT_FOUND");
        static const int S3_BUCKET_INVALID_REGION_HASH = HashingUtils::HashString("S3_BUCKET_INVALID_REGION");
        static const int S3_INTERNAL_ERROR_HASH = HashingUtils::HashString("S3_INTERNAL_ERROR");


        MigrationErrorType GetMigrationErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTITY_NOT_SUPPORTED_HASH)
          {
            return MigrationErrorType::ENTITY_NOT_SUPPORTED;
          }
          else if (hashCode == ENTITY_NOT_FOUND_HASH)
          {
            return MigrationErrorType::ENTITY_NOT_FOUND;
          }
          else if (hashCode == S3_BUCKET_NO_PERMISSION_HASH)
          {
            return MigrationErrorType::S3_BUCKET_NO_PERMISSION;
          }
          else if (hashCode == S3_BUCKET_NOT_ACCESSIBLE_HASH)
          {
            return MigrationErrorType::S3_BUCKET_NOT_ACCESSIBLE;
          }
          else if (hashCode == S3_BUCKET_NOT_FOUND_HASH)
          {
            return MigrationErrorType::S3_BUCKET_NOT_FOUND;
          }
          else if (hashCode == S3_BUCKET_INVALID_REGION_HASH)
          {
            return MigrationErrorType::S3_BUCKET_INVALID_REGION;
          }
          else if (hashCode == S3_INTERNAL_ERROR_HASH)
          {
            return MigrationErrorType::S3_INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationErrorType>(hashCode);
          }

          return MigrationErrorType::NOT_SET;
        }

        Aws::String GetNameForMigrationErrorType(MigrationErrorType enumValue)
        {
          switch(enumValue)
          {
          case MigrationErrorType::ENTITY_NOT_SUPPORTED:
            return "ENTITY_NOT_SUPPORTED";
          case MigrationErrorType::ENTITY_NOT_FOUND:
            return "ENTITY_NOT_FOUND";
          case MigrationErrorType::S3_BUCKET_NO_PERMISSION:
            return "S3_BUCKET_NO_PERMISSION";
          case MigrationErrorType::S3_BUCKET_NOT_ACCESSIBLE:
            return "S3_BUCKET_NOT_ACCESSIBLE";
          case MigrationErrorType::S3_BUCKET_NOT_FOUND:
            return "S3_BUCKET_NOT_FOUND";
          case MigrationErrorType::S3_BUCKET_INVALID_REGION:
            return "S3_BUCKET_INVALID_REGION";
          case MigrationErrorType::S3_INTERNAL_ERROR:
            return "S3_INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationErrorTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
