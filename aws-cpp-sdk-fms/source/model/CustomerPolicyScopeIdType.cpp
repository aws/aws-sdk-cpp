/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/CustomerPolicyScopeIdType.h>
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
      namespace CustomerPolicyScopeIdTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORG_UNIT_HASH = HashingUtils::HashString("ORG_UNIT");


        CustomerPolicyScopeIdType GetCustomerPolicyScopeIdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return CustomerPolicyScopeIdType::ACCOUNT;
          }
          else if (hashCode == ORG_UNIT_HASH)
          {
            return CustomerPolicyScopeIdType::ORG_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerPolicyScopeIdType>(hashCode);
          }

          return CustomerPolicyScopeIdType::NOT_SET;
        }

        Aws::String GetNameForCustomerPolicyScopeIdType(CustomerPolicyScopeIdType enumValue)
        {
          switch(enumValue)
          {
          case CustomerPolicyScopeIdType::ACCOUNT:
            return "ACCOUNT";
          case CustomerPolicyScopeIdType::ORG_UNIT:
            return "ORG_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerPolicyScopeIdTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
