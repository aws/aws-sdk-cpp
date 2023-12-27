/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/OrderedBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace OrderedByMapper
      {

        static const int LAST_MODIFIED_DATE_HASH = HashingUtils::HashString("LAST_MODIFIED_DATE");


        OrderedBy GetOrderedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAST_MODIFIED_DATE_HASH)
          {
            return OrderedBy::LAST_MODIFIED_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderedBy>(hashCode);
          }

          return OrderedBy::NOT_SET;
        }

        Aws::String GetNameForOrderedBy(OrderedBy enumValue)
        {
          switch(enumValue)
          {
          case OrderedBy::NOT_SET:
            return {};
          case OrderedBy::LAST_MODIFIED_DATE:
            return "LAST_MODIFIED_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderedByMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
