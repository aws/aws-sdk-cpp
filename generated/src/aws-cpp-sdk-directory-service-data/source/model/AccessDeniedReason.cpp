/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/AccessDeniedReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryServiceData
  {
    namespace Model
    {
      namespace AccessDeniedReasonMapper
      {

        static const int IAM_AUTH_HASH = HashingUtils::HashString("IAM_AUTH");
        static const int DIRECTORY_AUTH_HASH = HashingUtils::HashString("DIRECTORY_AUTH");
        static const int DATA_DISABLED_HASH = HashingUtils::HashString("DATA_DISABLED");


        AccessDeniedReason GetAccessDeniedReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_AUTH_HASH)
          {
            return AccessDeniedReason::IAM_AUTH;
          }
          else if (hashCode == DIRECTORY_AUTH_HASH)
          {
            return AccessDeniedReason::DIRECTORY_AUTH;
          }
          else if (hashCode == DATA_DISABLED_HASH)
          {
            return AccessDeniedReason::DATA_DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedReason>(hashCode);
          }

          return AccessDeniedReason::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedReason(AccessDeniedReason enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedReason::NOT_SET:
            return {};
          case AccessDeniedReason::IAM_AUTH:
            return "IAM_AUTH";
          case AccessDeniedReason::DIRECTORY_AUTH:
            return "DIRECTORY_AUTH";
          case AccessDeniedReason::DATA_DISABLED:
            return "DATA_DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedReasonMapper
    } // namespace Model
  } // namespace DirectoryServiceData
} // namespace Aws
