/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberWorkflowStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace PhoneNumberWorkflowStatusMapper
      {

        static const int CLAIMED_HASH = HashingUtils::HashString("CLAIMED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PhoneNumberWorkflowStatus GetPhoneNumberWorkflowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLAIMED_HASH)
          {
            return PhoneNumberWorkflowStatus::CLAIMED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return PhoneNumberWorkflowStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PhoneNumberWorkflowStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberWorkflowStatus>(hashCode);
          }

          return PhoneNumberWorkflowStatus::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberWorkflowStatus(PhoneNumberWorkflowStatus enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberWorkflowStatus::NOT_SET:
            return {};
          case PhoneNumberWorkflowStatus::CLAIMED:
            return "CLAIMED";
          case PhoneNumberWorkflowStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case PhoneNumberWorkflowStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberWorkflowStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
