/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueErrorCode.h>
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
      namespace BatchGetAssetPropertyValueErrorCodeMapper
      {

        static constexpr uint32_t ResourceNotFoundException_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundException");
        static constexpr uint32_t InvalidRequestException_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
        static constexpr uint32_t AccessDeniedException_HASH = ConstExprHashingUtils::HashString("AccessDeniedException");


        BatchGetAssetPropertyValueErrorCode GetBatchGetAssetPropertyValueErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchGetAssetPropertyValueErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == InvalidRequestException_HASH)
          {
            return BatchGetAssetPropertyValueErrorCode::InvalidRequestException;
          }
          else if (hashCode == AccessDeniedException_HASH)
          {
            return BatchGetAssetPropertyValueErrorCode::AccessDeniedException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchGetAssetPropertyValueErrorCode>(hashCode);
          }

          return BatchGetAssetPropertyValueErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchGetAssetPropertyValueErrorCode(BatchGetAssetPropertyValueErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchGetAssetPropertyValueErrorCode::NOT_SET:
            return {};
          case BatchGetAssetPropertyValueErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchGetAssetPropertyValueErrorCode::InvalidRequestException:
            return "InvalidRequestException";
          case BatchGetAssetPropertyValueErrorCode::AccessDeniedException:
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

      } // namespace BatchGetAssetPropertyValueErrorCodeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
