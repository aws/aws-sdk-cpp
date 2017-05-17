/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int AllUpfront_HASH = HashingUtils::HashString("AllUpfront");
        static const int PartialUpfront_HASH = HashingUtils::HashString("PartialUpfront");
        static const int NoUpfront_HASH = HashingUtils::HashString("NoUpfront");


        PaymentOption GetPaymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace PaymentOptionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
