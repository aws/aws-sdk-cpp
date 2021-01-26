/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchStatementErrorCodeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace BatchStatementErrorCodeEnumMapper
      {

        static const int ConditionalCheckFailed_HASH = HashingUtils::HashString("ConditionalCheckFailed");
        static const int ItemCollectionSizeLimitExceeded_HASH = HashingUtils::HashString("ItemCollectionSizeLimitExceeded");
        static const int RequestLimitExceeded_HASH = HashingUtils::HashString("RequestLimitExceeded");
        static const int ValidationError_HASH = HashingUtils::HashString("ValidationError");
        static const int ProvisionedThroughputExceeded_HASH = HashingUtils::HashString("ProvisionedThroughputExceeded");
        static const int TransactionConflict_HASH = HashingUtils::HashString("TransactionConflict");
        static const int ThrottlingError_HASH = HashingUtils::HashString("ThrottlingError");
        static const int InternalServerError_HASH = HashingUtils::HashString("InternalServerError");
        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int DuplicateItem_HASH = HashingUtils::HashString("DuplicateItem");


        BatchStatementErrorCodeEnum GetBatchStatementErrorCodeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConditionalCheckFailed_HASH)
          {
            return BatchStatementErrorCodeEnum::ConditionalCheckFailed;
          }
          else if (hashCode == ItemCollectionSizeLimitExceeded_HASH)
          {
            return BatchStatementErrorCodeEnum::ItemCollectionSizeLimitExceeded;
          }
          else if (hashCode == RequestLimitExceeded_HASH)
          {
            return BatchStatementErrorCodeEnum::RequestLimitExceeded;
          }
          else if (hashCode == ValidationError_HASH)
          {
            return BatchStatementErrorCodeEnum::ValidationError;
          }
          else if (hashCode == ProvisionedThroughputExceeded_HASH)
          {
            return BatchStatementErrorCodeEnum::ProvisionedThroughputExceeded;
          }
          else if (hashCode == TransactionConflict_HASH)
          {
            return BatchStatementErrorCodeEnum::TransactionConflict;
          }
          else if (hashCode == ThrottlingError_HASH)
          {
            return BatchStatementErrorCodeEnum::ThrottlingError;
          }
          else if (hashCode == InternalServerError_HASH)
          {
            return BatchStatementErrorCodeEnum::InternalServerError;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return BatchStatementErrorCodeEnum::ResourceNotFound;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return BatchStatementErrorCodeEnum::AccessDenied;
          }
          else if (hashCode == DuplicateItem_HASH)
          {
            return BatchStatementErrorCodeEnum::DuplicateItem;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchStatementErrorCodeEnum>(hashCode);
          }

          return BatchStatementErrorCodeEnum::NOT_SET;
        }

        Aws::String GetNameForBatchStatementErrorCodeEnum(BatchStatementErrorCodeEnum enumValue)
        {
          switch(enumValue)
          {
          case BatchStatementErrorCodeEnum::ConditionalCheckFailed:
            return "ConditionalCheckFailed";
          case BatchStatementErrorCodeEnum::ItemCollectionSizeLimitExceeded:
            return "ItemCollectionSizeLimitExceeded";
          case BatchStatementErrorCodeEnum::RequestLimitExceeded:
            return "RequestLimitExceeded";
          case BatchStatementErrorCodeEnum::ValidationError:
            return "ValidationError";
          case BatchStatementErrorCodeEnum::ProvisionedThroughputExceeded:
            return "ProvisionedThroughputExceeded";
          case BatchStatementErrorCodeEnum::TransactionConflict:
            return "TransactionConflict";
          case BatchStatementErrorCodeEnum::ThrottlingError:
            return "ThrottlingError";
          case BatchStatementErrorCodeEnum::InternalServerError:
            return "InternalServerError";
          case BatchStatementErrorCodeEnum::ResourceNotFound:
            return "ResourceNotFound";
          case BatchStatementErrorCodeEnum::AccessDenied:
            return "AccessDenied";
          case BatchStatementErrorCodeEnum::DuplicateItem:
            return "DuplicateItem";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchStatementErrorCodeEnumMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
