/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AcceptanceStateFilterValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace AcceptanceStateFilterValueMapper
      {

        static const int PENDING_RECEIVER_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_RECEIVER_ACCEPTANCE");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");


        AcceptanceStateFilterValue GetAcceptanceStateFilterValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_RECEIVER_ACCEPTANCE_HASH)
          {
            return AcceptanceStateFilterValue::PENDING_RECEIVER_ACCEPTANCE;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return AcceptanceStateFilterValue::ACCEPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptanceStateFilterValue>(hashCode);
          }

          return AcceptanceStateFilterValue::NOT_SET;
        }

        Aws::String GetNameForAcceptanceStateFilterValue(AcceptanceStateFilterValue enumValue)
        {
          switch(enumValue)
          {
          case AcceptanceStateFilterValue::NOT_SET:
            return {};
          case AcceptanceStateFilterValue::PENDING_RECEIVER_ACCEPTANCE:
            return "PENDING_RECEIVER_ACCEPTANCE";
          case AcceptanceStateFilterValue::ACCEPTED:
            return "ACCEPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptanceStateFilterValueMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
