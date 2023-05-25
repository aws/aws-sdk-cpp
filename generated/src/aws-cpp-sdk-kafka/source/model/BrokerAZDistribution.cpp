/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/BrokerAZDistribution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace BrokerAZDistributionMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        BrokerAZDistribution GetBrokerAZDistributionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return BrokerAZDistribution::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrokerAZDistribution>(hashCode);
          }

          return BrokerAZDistribution::NOT_SET;
        }

        Aws::String GetNameForBrokerAZDistribution(BrokerAZDistribution enumValue)
        {
          switch(enumValue)
          {
          case BrokerAZDistribution::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrokerAZDistributionMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
