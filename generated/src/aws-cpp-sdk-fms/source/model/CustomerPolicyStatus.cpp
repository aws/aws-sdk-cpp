/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/CustomerPolicyStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace CustomerPolicyStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int OUT_OF_ADMIN_SCOPE_HASH = HashingUtils::HashString("OUT_OF_ADMIN_SCOPE");


        CustomerPolicyStatus GetCustomerPolicyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CustomerPolicyStatus::ACTIVE;
          }
          else if (hashCode == OUT_OF_ADMIN_SCOPE_HASH)
          {
            return CustomerPolicyStatus::OUT_OF_ADMIN_SCOPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerPolicyStatus>(hashCode);
          }

          return CustomerPolicyStatus::NOT_SET;
        }

        Aws::String GetNameForCustomerPolicyStatus(CustomerPolicyStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomerPolicyStatus::NOT_SET:
            return {};
          case CustomerPolicyStatus::ACTIVE:
            return "ACTIVE";
          case CustomerPolicyStatus::OUT_OF_ADMIN_SCOPE:
            return "OUT_OF_ADMIN_SCOPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerPolicyStatusMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
