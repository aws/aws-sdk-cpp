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

        static constexpr uint32_t START_RECOVERY_HASH = ConstExprHashingUtils::HashString("START_RECOVERY");
        static constexpr uint32_t START_DRILL_HASH = ConstExprHashingUtils::HashString("START_DRILL");
        static constexpr uint32_t FAILBACK_HASH = ConstExprHashingUtils::HashString("FAILBACK");
        static constexpr uint32_t DIAGNOSTIC_HASH = ConstExprHashingUtils::HashString("DIAGNOSTIC");
        static constexpr uint32_t TERMINATE_RECOVERY_INSTANCES_HASH = ConstExprHashingUtils::HashString("TERMINATE_RECOVERY_INSTANCES");
        static constexpr uint32_t TARGET_ACCOUNT_HASH = ConstExprHashingUtils::HashString("TARGET_ACCOUNT");
        static constexpr uint32_t CREATE_NETWORK_RECOVERY_HASH = ConstExprHashingUtils::HashString("CREATE_NETWORK_RECOVERY");
        static constexpr uint32_t UPDATE_NETWORK_RECOVERY_HASH = ConstExprHashingUtils::HashString("UPDATE_NETWORK_RECOVERY");
        static constexpr uint32_t ASSOCIATE_NETWORK_RECOVERY_HASH = ConstExprHashingUtils::HashString("ASSOCIATE_NETWORK_RECOVERY");


        InitiatedBy GetInitiatedByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
