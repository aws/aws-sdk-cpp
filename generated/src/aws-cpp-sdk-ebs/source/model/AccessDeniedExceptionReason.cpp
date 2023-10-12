/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/AccessDeniedExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EBS
  {
    namespace Model
    {
      namespace AccessDeniedExceptionReasonMapper
      {

        static constexpr uint32_t UNAUTHORIZED_ACCOUNT_HASH = ConstExprHashingUtils::HashString("UNAUTHORIZED_ACCOUNT");
        static constexpr uint32_t DEPENDENCY_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("DEPENDENCY_ACCESS_DENIED");


        AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNAUTHORIZED_ACCOUNT_HASH)
          {
            return AccessDeniedExceptionReason::UNAUTHORIZED_ACCOUNT;
          }
          else if (hashCode == DEPENDENCY_ACCESS_DENIED_HASH)
          {
            return AccessDeniedExceptionReason::DEPENDENCY_ACCESS_DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedExceptionReason>(hashCode);
          }

          return AccessDeniedExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedExceptionReason::NOT_SET:
            return {};
          case AccessDeniedExceptionReason::UNAUTHORIZED_ACCOUNT:
            return "UNAUTHORIZED_ACCOUNT";
          case AccessDeniedExceptionReason::DEPENDENCY_ACCESS_DENIED:
            return "DEPENDENCY_ACCESS_DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedExceptionReasonMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
