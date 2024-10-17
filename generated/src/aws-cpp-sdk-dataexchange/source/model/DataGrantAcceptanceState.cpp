/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DataGrantAcceptanceState.h>
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
      namespace DataGrantAcceptanceStateMapper
      {

        static const int PENDING_RECEIVER_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_RECEIVER_ACCEPTANCE");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");


        DataGrantAcceptanceState GetDataGrantAcceptanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_RECEIVER_ACCEPTANCE_HASH)
          {
            return DataGrantAcceptanceState::PENDING_RECEIVER_ACCEPTANCE;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return DataGrantAcceptanceState::ACCEPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataGrantAcceptanceState>(hashCode);
          }

          return DataGrantAcceptanceState::NOT_SET;
        }

        Aws::String GetNameForDataGrantAcceptanceState(DataGrantAcceptanceState enumValue)
        {
          switch(enumValue)
          {
          case DataGrantAcceptanceState::NOT_SET:
            return {};
          case DataGrantAcceptanceState::PENDING_RECEIVER_ACCEPTANCE:
            return "PENDING_RECEIVER_ACCEPTANCE";
          case DataGrantAcceptanceState::ACCEPTED:
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

      } // namespace DataGrantAcceptanceStateMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
