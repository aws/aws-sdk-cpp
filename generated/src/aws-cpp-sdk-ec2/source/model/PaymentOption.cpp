/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PaymentOption.h>
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
      namespace PaymentOptionMapper
      {

        static constexpr uint32_t AllUpfront_HASH = ConstExprHashingUtils::HashString("AllUpfront");
        static constexpr uint32_t PartialUpfront_HASH = ConstExprHashingUtils::HashString("PartialUpfront");
        static constexpr uint32_t NoUpfront_HASH = ConstExprHashingUtils::HashString("NoUpfront");


        PaymentOption GetPaymentOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AllUpfront_HASH)
          {
            return PaymentOption::AllUpfront;
          }
          else if (hashCode == PartialUpfront_HASH)
          {
            return PaymentOption::PartialUpfront;
          }
          else if (hashCode == NoUpfront_HASH)
          {
            return PaymentOption::NoUpfront;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaymentOption>(hashCode);
          }

          return PaymentOption::NOT_SET;
        }

        Aws::String GetNameForPaymentOption(PaymentOption enumValue)
        {
          switch(enumValue)
          {
          case PaymentOption::NOT_SET:
            return {};
          case PaymentOption::AllUpfront:
            return "AllUpfront";
          case PaymentOption::PartialUpfront:
            return "PartialUpfront";
          case PaymentOption::NoUpfront:
            return "NoUpfront";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaymentOptionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
