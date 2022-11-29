/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StatisticType.h>
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
      namespace StatisticTypeMapper
      {

        static const int p50_HASH = HashingUtils::HashString("p50");


        StatisticType GetStatisticTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == p50_HASH)
          {
            return StatisticType::p50;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatisticType>(hashCode);
          }

          return StatisticType::NOT_SET;
        }

        Aws::String GetNameForStatisticType(StatisticType enumValue)
        {
          switch(enumValue)
          {
          case StatisticType::p50:
            return "p50";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
