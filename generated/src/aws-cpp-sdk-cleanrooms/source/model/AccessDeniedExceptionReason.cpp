/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AccessDeniedExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AccessDeniedExceptionReasonMapper
      {

        static const int INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("INSUFFICIENT_PERMISSIONS");


        AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_PERMISSIONS_HASH)
          {
            return AccessDeniedExceptionReason::INSUFFICIENT_PERMISSIONS;
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
          case AccessDeniedExceptionReason::INSUFFICIENT_PERMISSIONS:
            return "INSUFFICIENT_PERMISSIONS";
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
  } // namespace CleanRooms
} // namespace Aws
