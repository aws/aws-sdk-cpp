/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BucketMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace BucketMetricNameMapper
      {

        static constexpr uint32_t BucketSizeBytes_HASH = ConstExprHashingUtils::HashString("BucketSizeBytes");
        static constexpr uint32_t NumberOfObjects_HASH = ConstExprHashingUtils::HashString("NumberOfObjects");


        BucketMetricName GetBucketMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BucketSizeBytes_HASH)
          {
            return BucketMetricName::BucketSizeBytes;
          }
          else if (hashCode == NumberOfObjects_HASH)
          {
            return BucketMetricName::NumberOfObjects;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketMetricName>(hashCode);
          }

          return BucketMetricName::NOT_SET;
        }

        Aws::String GetNameForBucketMetricName(BucketMetricName enumValue)
        {
          switch(enumValue)
          {
          case BucketMetricName::NOT_SET:
            return {};
          case BucketMetricName::BucketSizeBytes:
            return "BucketSizeBytes";
          case BucketMetricName::NumberOfObjects:
            return "NumberOfObjects";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
