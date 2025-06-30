/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12SplitBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace X12SplitByMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int TRANSACTION_HASH = HashingUtils::HashString("TRANSACTION");


        X12SplitBy GetX12SplitByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return X12SplitBy::NONE;
          }
          else if (hashCode == TRANSACTION_HASH)
          {
            return X12SplitBy::TRANSACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12SplitBy>(hashCode);
          }

          return X12SplitBy::NOT_SET;
        }

        Aws::String GetNameForX12SplitBy(X12SplitBy enumValue)
        {
          switch(enumValue)
          {
          case X12SplitBy::NOT_SET:
            return {};
          case X12SplitBy::NONE:
            return "NONE";
          case X12SplitBy::TRANSACTION:
            return "TRANSACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12SplitByMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
