/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CheckFailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace CheckFailureReasonMapper
      {

        static const int ASSUME_ROLE_ERROR_HASH = HashingUtils::HashString("ASSUME_ROLE_ERROR");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int UNKNOWN_ERROR_HASH = HashingUtils::HashString("UNKNOWN_ERROR");
        static const int PREMIUM_SUPPORT_REQUIRED_HASH = HashingUtils::HashString("PREMIUM_SUPPORT_REQUIRED");


        CheckFailureReason GetCheckFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSUME_ROLE_ERROR_HASH)
          {
            return CheckFailureReason::ASSUME_ROLE_ERROR;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return CheckFailureReason::ACCESS_DENIED;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return CheckFailureReason::UNKNOWN_ERROR;
          }
          else if (hashCode == PREMIUM_SUPPORT_REQUIRED_HASH)
          {
            return CheckFailureReason::PREMIUM_SUPPORT_REQUIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckFailureReason>(hashCode);
          }

          return CheckFailureReason::NOT_SET;
        }

        Aws::String GetNameForCheckFailureReason(CheckFailureReason enumValue)
        {
          switch(enumValue)
          {
          case CheckFailureReason::ASSUME_ROLE_ERROR:
            return "ASSUME_ROLE_ERROR";
          case CheckFailureReason::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case CheckFailureReason::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          case CheckFailureReason::PREMIUM_SUPPORT_REQUIRED:
            return "PREMIUM_SUPPORT_REQUIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CheckFailureReasonMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
