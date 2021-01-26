/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateBasedStatementAggregateKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace RateBasedStatementAggregateKeyTypeMapper
      {

        static const int IP_HASH = HashingUtils::HashString("IP");
        static const int FORWARDED_IP_HASH = HashingUtils::HashString("FORWARDED_IP");


        RateBasedStatementAggregateKeyType GetRateBasedStatementAggregateKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return RateBasedStatementAggregateKeyType::IP;
          }
          else if (hashCode == FORWARDED_IP_HASH)
          {
            return RateBasedStatementAggregateKeyType::FORWARDED_IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RateBasedStatementAggregateKeyType>(hashCode);
          }

          return RateBasedStatementAggregateKeyType::NOT_SET;
        }

        Aws::String GetNameForRateBasedStatementAggregateKeyType(RateBasedStatementAggregateKeyType enumValue)
        {
          switch(enumValue)
          {
          case RateBasedStatementAggregateKeyType::IP:
            return "IP";
          case RateBasedStatementAggregateKeyType::FORWARDED_IP:
            return "FORWARDED_IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RateBasedStatementAggregateKeyTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
