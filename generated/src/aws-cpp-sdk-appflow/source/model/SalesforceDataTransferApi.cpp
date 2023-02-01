/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceDataTransferApi.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace SalesforceDataTransferApiMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int BULKV2_HASH = HashingUtils::HashString("BULKV2");
        static const int REST_SYNC_HASH = HashingUtils::HashString("REST_SYNC");


        SalesforceDataTransferApi GetSalesforceDataTransferApiForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return SalesforceDataTransferApi::AUTOMATIC;
          }
          else if (hashCode == BULKV2_HASH)
          {
            return SalesforceDataTransferApi::BULKV2;
          }
          else if (hashCode == REST_SYNC_HASH)
          {
            return SalesforceDataTransferApi::REST_SYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceDataTransferApi>(hashCode);
          }

          return SalesforceDataTransferApi::NOT_SET;
        }

        Aws::String GetNameForSalesforceDataTransferApi(SalesforceDataTransferApi enumValue)
        {
          switch(enumValue)
          {
          case SalesforceDataTransferApi::AUTOMATIC:
            return "AUTOMATIC";
          case SalesforceDataTransferApi::BULKV2:
            return "BULKV2";
          case SalesforceDataTransferApi::REST_SYNC:
            return "REST_SYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesforceDataTransferApiMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
