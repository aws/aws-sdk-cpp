/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryErrorCode.h>
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
      namespace BatchGetAssetPropertyValueHistoryErrorCodeMapper
      {

        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int InvalidRequestException_HASH = HashingUtils::HashString("InvalidRequestException");
        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");


        BatchGetAssetPropertyValueHistoryErrorCode GetBatchGetAssetPropertyValueHistoryErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchGetAssetPropertyValueHistoryErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == InvalidRequestException_HASH)
          {
            return BatchGetAssetPropertyValueHistoryErrorCode::InvalidRequestException;
          }
          else if (hashCode == AccessDeniedException_HASH)
          {
            return BatchGetAssetPropertyValueHistoryErrorCode::AccessDeniedException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchGetAssetPropertyValueHistoryErrorCode>(hashCode);
          }

          return BatchGetAssetPropertyValueHistoryErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchGetAssetPropertyValueHistoryErrorCode(BatchGetAssetPropertyValueHistoryErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchGetAssetPropertyValueHistoryErrorCode::NOT_SET:
            return {};
          case BatchGetAssetPropertyValueHistoryErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchGetAssetPropertyValueHistoryErrorCode::InvalidRequestException:
            return "InvalidRequestException";
          case BatchGetAssetPropertyValueHistoryErrorCode::AccessDeniedException:
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

      } // namespace BatchGetAssetPropertyValueHistoryErrorCodeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
