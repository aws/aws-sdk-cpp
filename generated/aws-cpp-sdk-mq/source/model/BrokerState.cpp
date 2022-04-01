/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BrokerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace BrokerStateMapper
      {

        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int REBOOT_IN_PROGRESS_HASH = HashingUtils::HashString("REBOOT_IN_PROGRESS");


        BrokerState GetBrokerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return BrokerState::CREATION_IN_PROGRESS;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return BrokerState::CREATION_FAILED;
          }
          else if (hashCode == DELETION_IN_PROGRESS_HASH)
          {
            return BrokerState::DELETION_IN_PROGRESS;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return BrokerState::RUNNING;
          }
          else if (hashCode == REBOOT_IN_PROGRESS_HASH)
          {
            return BrokerState::REBOOT_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrokerState>(hashCode);
          }

          return BrokerState::NOT_SET;
        }

        Aws::String GetNameForBrokerState(BrokerState enumValue)
        {
          switch(enumValue)
          {
          case BrokerState::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case BrokerState::CREATION_FAILED:
            return "CREATION_FAILED";
          case BrokerState::DELETION_IN_PROGRESS:
            return "DELETION_IN_PROGRESS";
          case BrokerState::RUNNING:
            return "RUNNING";
          case BrokerState::REBOOT_IN_PROGRESS:
            return "REBOOT_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrokerStateMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
