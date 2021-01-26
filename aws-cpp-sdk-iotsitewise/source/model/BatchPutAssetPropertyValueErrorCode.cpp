/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchPutAssetPropertyValueErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace BatchPutAssetPropertyValueErrorCodeMapper
      {

        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int InvalidRequestException_HASH = HashingUtils::HashString("InvalidRequestException");
        static const int InternalFailureException_HASH = HashingUtils::HashString("InternalFailureException");
        static const int ServiceUnavailableException_HASH = HashingUtils::HashString("ServiceUnavailableException");
        static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");
        static const int LimitExceededException_HASH = HashingUtils::HashString("LimitExceededException");
        static const int ConflictingOperationException_HASH = HashingUtils::HashString("ConflictingOperationException");
        static const int TimestampOutOfRangeException_HASH = HashingUtils::HashString("TimestampOutOfRangeException");
        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");


        BatchPutAssetPropertyValueErrorCode GetBatchPutAssetPropertyValueErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == InvalidRequestException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::InvalidRequestException;
          }
          else if (hashCode == InternalFailureException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::InternalFailureException;
          }
          else if (hashCode == ServiceUnavailableException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::ServiceUnavailableException;
          }
          else if (hashCode == ThrottlingException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::ThrottlingException;
          }
          else if (hashCode == LimitExceededException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::LimitExceededException;
          }
          else if (hashCode == ConflictingOperationException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::ConflictingOperationException;
          }
          else if (hashCode == TimestampOutOfRangeException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::TimestampOutOfRangeException;
          }
          else if (hashCode == AccessDeniedException_HASH)
          {
            return BatchPutAssetPropertyValueErrorCode::AccessDeniedException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchPutAssetPropertyValueErrorCode>(hashCode);
          }

          return BatchPutAssetPropertyValueErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchPutAssetPropertyValueErrorCode(BatchPutAssetPropertyValueErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchPutAssetPropertyValueErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchPutAssetPropertyValueErrorCode::InvalidRequestException:
            return "InvalidRequestException";
          case BatchPutAssetPropertyValueErrorCode::InternalFailureException:
            return "InternalFailureException";
          case BatchPutAssetPropertyValueErrorCode::ServiceUnavailableException:
            return "ServiceUnavailableException";
          case BatchPutAssetPropertyValueErrorCode::ThrottlingException:
            return "ThrottlingException";
          case BatchPutAssetPropertyValueErrorCode::LimitExceededException:
            return "LimitExceededException";
          case BatchPutAssetPropertyValueErrorCode::ConflictingOperationException:
            return "ConflictingOperationException";
          case BatchPutAssetPropertyValueErrorCode::TimestampOutOfRangeException:
            return "TimestampOutOfRangeException";
          case BatchPutAssetPropertyValueErrorCode::AccessDeniedException:
            return "AccessDeniedException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchPutAssetPropertyValueErrorCodeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
