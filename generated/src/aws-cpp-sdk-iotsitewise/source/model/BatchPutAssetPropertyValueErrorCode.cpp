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

        static constexpr uint32_t ResourceNotFoundException_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundException");
        static constexpr uint32_t InvalidRequestException_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
        static constexpr uint32_t InternalFailureException_HASH = ConstExprHashingUtils::HashString("InternalFailureException");
        static constexpr uint32_t ServiceUnavailableException_HASH = ConstExprHashingUtils::HashString("ServiceUnavailableException");
        static constexpr uint32_t ThrottlingException_HASH = ConstExprHashingUtils::HashString("ThrottlingException");
        static constexpr uint32_t LimitExceededException_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
        static constexpr uint32_t ConflictingOperationException_HASH = ConstExprHashingUtils::HashString("ConflictingOperationException");
        static constexpr uint32_t TimestampOutOfRangeException_HASH = ConstExprHashingUtils::HashString("TimestampOutOfRangeException");
        static constexpr uint32_t AccessDeniedException_HASH = ConstExprHashingUtils::HashString("AccessDeniedException");


        BatchPutAssetPropertyValueErrorCode GetBatchPutAssetPropertyValueErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BatchPutAssetPropertyValueErrorCode::NOT_SET:
            return {};
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
