/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace AggregationFindingTypeMapper
      {

        static const int NETWORK_REACHABILITY_HASH = HashingUtils::HashString("NETWORK_REACHABILITY");
        static const int PACKAGE_VULNERABILITY_HASH = HashingUtils::HashString("PACKAGE_VULNERABILITY");
        static const int CODE_VULNERABILITY_HASH = HashingUtils::HashString("CODE_VULNERABILITY");


        AggregationFindingType GetAggregationFindingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NETWORK_REACHABILITY_HASH)
          {
            return AggregationFindingType::NETWORK_REACHABILITY;
          }
          else if (hashCode == PACKAGE_VULNERABILITY_HASH)
          {
            return AggregationFindingType::PACKAGE_VULNERABILITY;
          }
          else if (hashCode == CODE_VULNERABILITY_HASH)
          {
            return AggregationFindingType::CODE_VULNERABILITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationFindingType>(hashCode);
          }

          return AggregationFindingType::NOT_SET;
        }

        Aws::String GetNameForAggregationFindingType(AggregationFindingType enumValue)
        {
          switch(enumValue)
          {
          case AggregationFindingType::NOT_SET:
            return {};
          case AggregationFindingType::NETWORK_REACHABILITY:
            return "NETWORK_REACHABILITY";
          case AggregationFindingType::PACKAGE_VULNERABILITY:
            return "PACKAGE_VULNERABILITY";
          case AggregationFindingType::CODE_VULNERABILITY:
            return "CODE_VULNERABILITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationFindingTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
