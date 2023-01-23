/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BillingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace BillingModeMapper
      {

        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");
        static const int PAY_PER_REQUEST_HASH = HashingUtils::HashString("PAY_PER_REQUEST");


        BillingMode GetBillingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONED_HASH)
          {
            return BillingMode::PROVISIONED;
          }
          else if (hashCode == PAY_PER_REQUEST_HASH)
          {
            return BillingMode::PAY_PER_REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingMode>(hashCode);
          }

          return BillingMode::NOT_SET;
        }

        Aws::String GetNameForBillingMode(BillingMode enumValue)
        {
          switch(enumValue)
          {
          case BillingMode::PROVISIONED:
            return "PROVISIONED";
          case BillingMode::PAY_PER_REQUEST:
            return "PAY_PER_REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingModeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
