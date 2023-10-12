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

        static constexpr uint32_t ConditionalCheckFailed_HASH = ConstExprHashingUtils::HashString("ConditionalCheckFailed");
        static constexpr uint32_t ItemCollectionSizeLimitExceeded_HASH = ConstExprHashingUtils::HashString("ItemCollectionSizeLimitExceeded");
        static constexpr uint32_t RequestLimitExceeded_HASH = ConstExprHashingUtils::HashString("RequestLimitExceeded");
        static constexpr uint32_t ValidationError_HASH = ConstExprHashingUtils::HashString("ValidationError");
        static constexpr uint32_t ProvisionedThroughputExceeded_HASH = ConstExprHashingUtils::HashString("ProvisionedThroughputExceeded");
        static constexpr uint32_t TransactionConflict_HASH = ConstExprHashingUtils::HashString("TransactionConflict");
        static constexpr uint32_t ThrottlingError_HASH = ConstExprHashingUtils::HashString("ThrottlingError");
        static constexpr uint32_t InternalServerError_HASH = ConstExprHashingUtils::HashString("InternalServerError");
        static constexpr uint32_t ResourceNotFound_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");
        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t DuplicateItem_HASH = ConstExprHashingUtils::HashString("DuplicateItem");


        BatchStatementErrorCodeEnum GetBatchStatementErrorCodeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BatchStatementErrorCodeEnum::NOT_SET:
            return {};
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
