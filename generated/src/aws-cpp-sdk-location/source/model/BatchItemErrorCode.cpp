/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchItemErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace BatchItemErrorCodeMapper
      {

        static constexpr uint32_t AccessDeniedError_HASH = ConstExprHashingUtils::HashString("AccessDeniedError");
        static constexpr uint32_t ConflictError_HASH = ConstExprHashingUtils::HashString("ConflictError");
        static constexpr uint32_t InternalServerError_HASH = ConstExprHashingUtils::HashString("InternalServerError");
        static constexpr uint32_t ResourceNotFoundError_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundError");
        static constexpr uint32_t ThrottlingError_HASH = ConstExprHashingUtils::HashString("ThrottlingError");
        static constexpr uint32_t ValidationError_HASH = ConstExprHashingUtils::HashString("ValidationError");


        BatchItemErrorCode GetBatchItemErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessDeniedError_HASH)
          {
            return BatchItemErrorCode::AccessDeniedError;
          }
          else if (hashCode == ConflictError_HASH)
          {
            return BatchItemErrorCode::ConflictError;
          }
          else if (hashCode == InternalServerError_HASH)
          {
            return BatchItemErrorCode::InternalServerError;
          }
          else if (hashCode == ResourceNotFoundError_HASH)
          {
            return BatchItemErrorCode::ResourceNotFoundError;
          }
          else if (hashCode == ThrottlingError_HASH)
          {
            return BatchItemErrorCode::ThrottlingError;
          }
          else if (hashCode == ValidationError_HASH)
          {
            return BatchItemErrorCode::ValidationError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchItemErrorCode>(hashCode);
          }

          return BatchItemErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchItemErrorCode(BatchItemErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchItemErrorCode::NOT_SET:
            return {};
          case BatchItemErrorCode::AccessDeniedError:
            return "AccessDeniedError";
          case BatchItemErrorCode::ConflictError:
            return "ConflictError";
          case BatchItemErrorCode::InternalServerError:
            return "InternalServerError";
          case BatchItemErrorCode::ResourceNotFoundError:
            return "ResourceNotFoundError";
          case BatchItemErrorCode::ThrottlingError:
            return "ThrottlingError";
          case BatchItemErrorCode::ValidationError:
            return "ValidationError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchItemErrorCodeMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
