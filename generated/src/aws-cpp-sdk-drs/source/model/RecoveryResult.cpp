/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryResult.h>
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
      namespace RecoveryResultMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int PARTIAL_SUCCESS_HASH = HashingUtils::HashString("PARTIAL_SUCCESS");
        static const int ASSOCIATE_SUCCESS_HASH = HashingUtils::HashString("ASSOCIATE_SUCCESS");
        static const int ASSOCIATE_FAIL_HASH = HashingUtils::HashString("ASSOCIATE_FAIL");


        RecoveryResult GetRecoveryResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return RecoveryResult::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RecoveryResult::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return RecoveryResult::SUCCESS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return RecoveryResult::FAIL;
          }
          else if (hashCode == PARTIAL_SUCCESS_HASH)
          {
            return RecoveryResult::PARTIAL_SUCCESS;
          }
          else if (hashCode == ASSOCIATE_SUCCESS_HASH)
          {
            return RecoveryResult::ASSOCIATE_SUCCESS;
          }
          else if (hashCode == ASSOCIATE_FAIL_HASH)
          {
            return RecoveryResult::ASSOCIATE_FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryResult>(hashCode);
          }

          return RecoveryResult::NOT_SET;
        }

        Aws::String GetNameForRecoveryResult(RecoveryResult enumValue)
        {
          switch(enumValue)
          {
          case RecoveryResult::NOT_SET:
            return {};
          case RecoveryResult::NOT_STARTED:
            return "NOT_STARTED";
          case RecoveryResult::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecoveryResult::SUCCESS:
            return "SUCCESS";
          case RecoveryResult::FAIL:
            return "FAIL";
          case RecoveryResult::PARTIAL_SUCCESS:
            return "PARTIAL_SUCCESS";
          case RecoveryResult::ASSOCIATE_SUCCESS:
            return "ASSOCIATE_SUCCESS";
          case RecoveryResult::ASSOCIATE_FAIL:
            return "ASSOCIATE_FAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryResultMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
