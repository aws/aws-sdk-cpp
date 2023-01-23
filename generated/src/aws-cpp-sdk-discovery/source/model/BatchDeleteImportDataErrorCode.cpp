/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteImportDataErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace BatchDeleteImportDataErrorCodeMapper
      {

        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");
        static const int OVER_LIMIT_HASH = HashingUtils::HashString("OVER_LIMIT");


        BatchDeleteImportDataErrorCode GetBatchDeleteImportDataErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_FOUND_HASH)
          {
            return BatchDeleteImportDataErrorCode::NOT_FOUND;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return BatchDeleteImportDataErrorCode::INTERNAL_SERVER_ERROR;
          }
          else if (hashCode == OVER_LIMIT_HASH)
          {
            return BatchDeleteImportDataErrorCode::OVER_LIMIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchDeleteImportDataErrorCode>(hashCode);
          }

          return BatchDeleteImportDataErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchDeleteImportDataErrorCode(BatchDeleteImportDataErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchDeleteImportDataErrorCode::NOT_FOUND:
            return "NOT_FOUND";
          case BatchDeleteImportDataErrorCode::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          case BatchDeleteImportDataErrorCode::OVER_LIMIT:
            return "OVER_LIMIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchDeleteImportDataErrorCodeMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
