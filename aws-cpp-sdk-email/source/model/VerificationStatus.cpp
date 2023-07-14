/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/VerificationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace VerificationStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int TemporaryFailure_HASH = HashingUtils::HashString("TemporaryFailure");
        static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");


        VerificationStatus GetVerificationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return VerificationStatus::Pending;
          }
          else if (hashCode == Success_HASH)
          {
            return VerificationStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return VerificationStatus::Failed;
          }
          else if (hashCode == TemporaryFailure_HASH)
          {
            return VerificationStatus::TemporaryFailure;
          }
          else if (hashCode == NotStarted_HASH)
          {
            return VerificationStatus::NotStarted;
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
          case VerificationStatus::Pending:
            return "Pending";
          case VerificationStatus::Success:
            return "Success";
          case VerificationStatus::Failed:
            return "Failed";
          case VerificationStatus::TemporaryFailure:
            return "TemporaryFailure";
          case VerificationStatus::NotStarted:
            return "NotStarted";
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
  } // namespace SES
} // namespace Aws
