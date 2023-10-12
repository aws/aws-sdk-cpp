/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotInstanceType.h>
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
      namespace SpotInstanceTypeMapper
      {

        static constexpr uint32_t one_time_HASH = ConstExprHashingUtils::HashString("one-time");
        static constexpr uint32_t persistent_HASH = ConstExprHashingUtils::HashString("persistent");


        SpotInstanceType GetSpotInstanceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == one_time_HASH)
          {
            return SpotInstanceType::one_time;
          }
          else if (hashCode == persistent_HASH)
          {
            return SpotInstanceType::persistent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotInstanceType>(hashCode);
          }

          return SpotInstanceType::NOT_SET;
        }

        Aws::String GetNameForSpotInstanceType(SpotInstanceType enumValue)
        {
          switch(enumValue)
          {
          case SpotInstanceType::NOT_SET:
            return {};
          case SpotInstanceType::one_time:
            return "one-time";
          case SpotInstanceType::persistent:
            return "persistent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpotInstanceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
