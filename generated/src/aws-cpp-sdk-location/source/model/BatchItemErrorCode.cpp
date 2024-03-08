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

        static const int AccessDeniedError_HASH = HashingUtils::HashString("AccessDeniedError");
        static const int ConflictError_HASH = HashingUtils::HashString("ConflictError");
        static const int InternalServerError_HASH = HashingUtils::HashString("InternalServerError");
        static const int ResourceNotFoundError_HASH = HashingUtils::HashString("ResourceNotFoundError");
        static const int ThrottlingError_HASH = HashingUtils::HashString("ThrottlingError");
        static const int ValidationError_HASH = HashingUtils::HashString("ValidationError");


        BatchItemErrorCode GetBatchItemErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
