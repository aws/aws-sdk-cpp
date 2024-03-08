/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatementState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace StatementStateMapper
      {

        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        StatementState GetStatementStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAITING_HASH)
          {
            return StatementState::WAITING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StatementState::RUNNING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return StatementState::AVAILABLE;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return StatementState::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return StatementState::CANCELLED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return StatementState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatementState>(hashCode);
          }

          return StatementState::NOT_SET;
        }

        Aws::String GetNameForStatementState(StatementState enumValue)
        {
          switch(enumValue)
          {
          case StatementState::NOT_SET:
            return {};
          case StatementState::WAITING:
            return "WAITING";
          case StatementState::RUNNING:
            return "RUNNING";
          case StatementState::AVAILABLE:
            return "AVAILABLE";
          case StatementState::CANCELLING:
            return "CANCELLING";
          case StatementState::CANCELLED:
            return "CANCELLED";
          case StatementState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatementStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
