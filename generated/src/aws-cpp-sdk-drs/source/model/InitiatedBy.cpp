/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/InitiatedBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace InitiatedByMapper
      {

        static const int START_RECOVERY_HASH = HashingUtils::HashString("START_RECOVERY");
        static const int START_DRILL_HASH = HashingUtils::HashString("START_DRILL");
        static const int FAILBACK_HASH = HashingUtils::HashString("FAILBACK");
        static const int DIAGNOSTIC_HASH = HashingUtils::HashString("DIAGNOSTIC");
        static const int TERMINATE_RECOVERY_INSTANCES_HASH = HashingUtils::HashString("TERMINATE_RECOVERY_INSTANCES");
        static const int TARGET_ACCOUNT_HASH = HashingUtils::HashString("TARGET_ACCOUNT");
        static const int CREATE_NETWORK_RECOVERY_HASH = HashingUtils::HashString("CREATE_NETWORK_RECOVERY");
        static const int UPDATE_NETWORK_RECOVERY_HASH = HashingUtils::HashString("UPDATE_NETWORK_RECOVERY");
        static const int ASSOCIATE_NETWORK_RECOVERY_HASH = HashingUtils::HashString("ASSOCIATE_NETWORK_RECOVERY");


        InitiatedBy GetInitiatedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_RECOVERY_HASH)
          {
            return InitiatedBy::START_RECOVERY;
          }
          else if (hashCode == START_DRILL_HASH)
          {
            return InitiatedBy::START_DRILL;
          }
          else if (hashCode == FAILBACK_HASH)
          {
            return InitiatedBy::FAILBACK;
          }
          else if (hashCode == DIAGNOSTIC_HASH)
          {
            return InitiatedBy::DIAGNOSTIC;
          }
          else if (hashCode == TERMINATE_RECOVERY_INSTANCES_HASH)
          {
            return InitiatedBy::TERMINATE_RECOVERY_INSTANCES;
          }
          else if (hashCode == TARGET_ACCOUNT_HASH)
          {
            return InitiatedBy::TARGET_ACCOUNT;
          }
          else if (hashCode == CREATE_NETWORK_RECOVERY_HASH)
          {
            return InitiatedBy::CREATE_NETWORK_RECOVERY;
          }
          else if (hashCode == UPDATE_NETWORK_RECOVERY_HASH)
          {
            return InitiatedBy::UPDATE_NETWORK_RECOVERY;
          }
          else if (hashCode == ASSOCIATE_NETWORK_RECOVERY_HASH)
          {
            return InitiatedBy::ASSOCIATE_NETWORK_RECOVERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InitiatedBy>(hashCode);
          }

          return InitiatedBy::NOT_SET;
        }

        Aws::String GetNameForInitiatedBy(InitiatedBy enumValue)
        {
          switch(enumValue)
          {
          case InitiatedBy::NOT_SET:
            return {};
          case InitiatedBy::START_RECOVERY:
            return "START_RECOVERY";
          case InitiatedBy::START_DRILL:
            return "START_DRILL";
          case InitiatedBy::FAILBACK:
            return "FAILBACK";
          case InitiatedBy::DIAGNOSTIC:
            return "DIAGNOSTIC";
          case InitiatedBy::TERMINATE_RECOVERY_INSTANCES:
            return "TERMINATE_RECOVERY_INSTANCES";
          case InitiatedBy::TARGET_ACCOUNT:
            return "TARGET_ACCOUNT";
          case InitiatedBy::CREATE_NETWORK_RECOVERY:
            return "CREATE_NETWORK_RECOVERY";
          case InitiatedBy::UPDATE_NETWORK_RECOVERY:
            return "UPDATE_NETWORK_RECOVERY";
          case InitiatedBy::ASSOCIATE_NETWORK_RECOVERY:
            return "ASSOCIATE_NETWORK_RECOVERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InitiatedByMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
