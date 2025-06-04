/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/ListInvoiceSummariesResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Invoicing
  {
    namespace Model
    {
      namespace ListInvoiceSummariesResourceTypeMapper
      {

        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int INVOICE_ID_HASH = HashingUtils::HashString("INVOICE_ID");


        ListInvoiceSummariesResourceType GetListInvoiceSummariesResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return ListInvoiceSummariesResourceType::ACCOUNT_ID;
          }
          else if (hashCode == INVOICE_ID_HASH)
          {
            return ListInvoiceSummariesResourceType::INVOICE_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListInvoiceSummariesResourceType>(hashCode);
          }

          return ListInvoiceSummariesResourceType::NOT_SET;
        }

        Aws::String GetNameForListInvoiceSummariesResourceType(ListInvoiceSummariesResourceType enumValue)
        {
          switch(enumValue)
          {
          case ListInvoiceSummariesResourceType::NOT_SET:
            return {};
          case ListInvoiceSummariesResourceType::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case ListInvoiceSummariesResourceType::INVOICE_ID:
            return "INVOICE_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListInvoiceSummariesResourceTypeMapper
    } // namespace Model
  } // namespace Invoicing
} // namespace Aws
