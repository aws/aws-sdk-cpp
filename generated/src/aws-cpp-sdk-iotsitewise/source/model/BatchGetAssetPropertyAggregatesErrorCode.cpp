/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesErrorCode.h>
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
      namespace BatchGetAssetPropertyAggregatesErrorCodeMapper
      {

        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int InvalidRequestException_HASH = HashingUtils::HashString("InvalidRequestException");
        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");


        BatchGetAssetPropertyAggregatesErrorCode GetBatchGetAssetPropertyAggregatesErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchGetAssetPropertyAggregatesErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == InvalidRequestException_HASH)
          {
            return BatchGetAssetPropertyAggregatesErrorCode::InvalidRequestException;
          }
          else if (hashCode == AccessDeniedException_HASH)
          {
            return BatchGetAssetPropertyAggregatesErrorCode::AccessDeniedException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchGetAssetPropertyAggregatesErrorCode>(hashCode);
          }

          return BatchGetAssetPropertyAggregatesErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchGetAssetPropertyAggregatesErrorCode(BatchGetAssetPropertyAggregatesErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchGetAssetPropertyAggregatesErrorCode::NOT_SET:
            return {};
          case BatchGetAssetPropertyAggregatesErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchGetAssetPropertyAggregatesErrorCode::InvalidRequestException:
            return "InvalidRequestException";
          case BatchGetAssetPropertyAggregatesErrorCode::AccessDeniedException:
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

      } // namespace BatchGetAssetPropertyAggregatesErrorCodeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
