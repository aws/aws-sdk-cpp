/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ListOperationsSortAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace ListOperationsSortAttributeNameMapper
      {

        static const int SubmittedDate_HASH = HashingUtils::HashString("SubmittedDate");


        ListOperationsSortAttributeName GetListOperationsSortAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SubmittedDate_HASH)
          {
            return ListOperationsSortAttributeName::SubmittedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListOperationsSortAttributeName>(hashCode);
          }

          return ListOperationsSortAttributeName::NOT_SET;
        }

        Aws::String GetNameForListOperationsSortAttributeName(ListOperationsSortAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ListOperationsSortAttributeName::SubmittedDate:
            return "SubmittedDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListOperationsSortAttributeNameMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
