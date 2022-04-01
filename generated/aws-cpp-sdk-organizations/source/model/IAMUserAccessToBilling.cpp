/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/IAMUserAccessToBilling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace IAMUserAccessToBillingMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        IAMUserAccessToBilling GetIAMUserAccessToBillingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return IAMUserAccessToBilling::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return IAMUserAccessToBilling::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IAMUserAccessToBilling>(hashCode);
          }

          return IAMUserAccessToBilling::NOT_SET;
        }

        Aws::String GetNameForIAMUserAccessToBilling(IAMUserAccessToBilling enumValue)
        {
          switch(enumValue)
          {
          case IAMUserAccessToBilling::ALLOW:
            return "ALLOW";
          case IAMUserAccessToBilling::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IAMUserAccessToBillingMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
