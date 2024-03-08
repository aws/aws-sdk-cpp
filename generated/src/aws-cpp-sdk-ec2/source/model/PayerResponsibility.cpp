/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PayerResponsibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace PayerResponsibilityMapper
      {

        static const int ServiceOwner_HASH = HashingUtils::HashString("ServiceOwner");


        PayerResponsibility GetPayerResponsibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ServiceOwner_HASH)
          {
            return PayerResponsibility::ServiceOwner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PayerResponsibility>(hashCode);
          }

          return PayerResponsibility::NOT_SET;
        }

        Aws::String GetNameForPayerResponsibility(PayerResponsibility enumValue)
        {
          switch(enumValue)
          {
          case PayerResponsibility::NOT_SET:
            return {};
          case PayerResponsibility::ServiceOwner:
            return "ServiceOwner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PayerResponsibilityMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
