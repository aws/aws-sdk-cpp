/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EBSMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace EBSMetricNameMapper
      {

        static const int VolumeReadOpsPerSecond_HASH = HashingUtils::HashString("VolumeReadOpsPerSecond");
        static const int VolumeWriteOpsPerSecond_HASH = HashingUtils::HashString("VolumeWriteOpsPerSecond");
        static const int VolumeReadBytesPerSecond_HASH = HashingUtils::HashString("VolumeReadBytesPerSecond");
        static const int VolumeWriteBytesPerSecond_HASH = HashingUtils::HashString("VolumeWriteBytesPerSecond");


        EBSMetricName GetEBSMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VolumeReadOpsPerSecond_HASH)
          {
            return EBSMetricName::VolumeReadOpsPerSecond;
          }
          else if (hashCode == VolumeWriteOpsPerSecond_HASH)
          {
            return EBSMetricName::VolumeWriteOpsPerSecond;
          }
          else if (hashCode == VolumeReadBytesPerSecond_HASH)
          {
            return EBSMetricName::VolumeReadBytesPerSecond;
          }
          else if (hashCode == VolumeWriteBytesPerSecond_HASH)
          {
            return EBSMetricName::VolumeWriteBytesPerSecond;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EBSMetricName>(hashCode);
          }

          return EBSMetricName::NOT_SET;
        }

        Aws::String GetNameForEBSMetricName(EBSMetricName enumValue)
        {
          switch(enumValue)
          {
          case EBSMetricName::NOT_SET:
            return {};
          case EBSMetricName::VolumeReadOpsPerSecond:
            return "VolumeReadOpsPerSecond";
          case EBSMetricName::VolumeWriteOpsPerSecond:
            return "VolumeWriteOpsPerSecond";
          case EBSMetricName::VolumeReadBytesPerSecond:
            return "VolumeReadBytesPerSecond";
          case EBSMetricName::VolumeWriteBytesPerSecond:
            return "VolumeWriteBytesPerSecond";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EBSMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
