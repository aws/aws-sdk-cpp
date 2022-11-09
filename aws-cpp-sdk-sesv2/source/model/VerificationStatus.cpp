/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/VerificationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace VerificationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TEMPORARY_FAILURE_HASH = HashingUtils::HashString("TEMPORARY_FAILURE");
        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");


        VerificationStatus GetVerificationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return VerificationStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return VerificationStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VerificationStatus::FAILED;
          }
          else if (hashCode == TEMPORARY_FAILURE_HASH)
          {
            return VerificationStatus::TEMPORARY_FAILURE;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return VerificationStatus::NOT_STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerificationStatus>(hashCode);
          }

          return VerificationStatus::NOT_SET;
        }

        Aws::String GetNameForVerificationStatus(VerificationStatus enumValue)
        {
          switch(enumValue)
          {
          case VerificationStatus::PENDING:
            return "PENDING";
          case VerificationStatus::SUCCESS:
            return "SUCCESS";
          case VerificationStatus::FAILED:
            return "FAILED";
          case VerificationStatus::TEMPORARY_FAILURE:
            return "TEMPORARY_FAILURE";
          case VerificationStatus::NOT_STARTED:
            return "NOT_STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerificationStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
