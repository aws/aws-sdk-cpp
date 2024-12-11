/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/CustomerAgreementState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Artifact
  {
    namespace Model
    {
      namespace CustomerAgreementStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CUSTOMER_TERMINATED_HASH = HashingUtils::HashString("CUSTOMER_TERMINATED");
        static const int AWS_TERMINATED_HASH = HashingUtils::HashString("AWS_TERMINATED");


        CustomerAgreementState GetCustomerAgreementStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CustomerAgreementState::ACTIVE;
          }
          else if (hashCode == CUSTOMER_TERMINATED_HASH)
          {
            return CustomerAgreementState::CUSTOMER_TERMINATED;
          }
          else if (hashCode == AWS_TERMINATED_HASH)
          {
            return CustomerAgreementState::AWS_TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerAgreementState>(hashCode);
          }

          return CustomerAgreementState::NOT_SET;
        }

        Aws::String GetNameForCustomerAgreementState(CustomerAgreementState enumValue)
        {
          switch(enumValue)
          {
          case CustomerAgreementState::NOT_SET:
            return {};
          case CustomerAgreementState::ACTIVE:
            return "ACTIVE";
          case CustomerAgreementState::CUSTOMER_TERMINATED:
            return "CUSTOMER_TERMINATED";
          case CustomerAgreementState::AWS_TERMINATED:
            return "AWS_TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerAgreementStateMapper
    } // namespace Model
  } // namespace Artifact
} // namespace Aws
