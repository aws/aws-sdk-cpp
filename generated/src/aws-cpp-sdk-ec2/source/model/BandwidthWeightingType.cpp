/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BandwidthWeightingType.h>
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
      namespace BandwidthWeightingTypeMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int vpc_1_HASH = HashingUtils::HashString("vpc-1");
        static const int ebs_1_HASH = HashingUtils::HashString("ebs-1");


        BandwidthWeightingType GetBandwidthWeightingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return BandwidthWeightingType::default_;
          }
          else if (hashCode == vpc_1_HASH)
          {
            return BandwidthWeightingType::vpc_1;
          }
          else if (hashCode == ebs_1_HASH)
          {
            return BandwidthWeightingType::ebs_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BandwidthWeightingType>(hashCode);
          }

          return BandwidthWeightingType::NOT_SET;
        }

        Aws::String GetNameForBandwidthWeightingType(BandwidthWeightingType enumValue)
        {
          switch(enumValue)
          {
          case BandwidthWeightingType::NOT_SET:
            return {};
          case BandwidthWeightingType::default_:
            return "default";
          case BandwidthWeightingType::vpc_1:
            return "vpc-1";
          case BandwidthWeightingType::ebs_1:
            return "ebs-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BandwidthWeightingTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
