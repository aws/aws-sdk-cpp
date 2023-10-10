/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AcceleratorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace AcceleratorTypeMapper
      {

        static const int gpu_HASH = HashingUtils::HashString("gpu");
        static const int fpga_HASH = HashingUtils::HashString("fpga");
        static const int inference_HASH = HashingUtils::HashString("inference");


        AcceleratorType GetAcceleratorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gpu_HASH)
          {
            return AcceleratorType::gpu;
          }
          else if (hashCode == fpga_HASH)
          {
            return AcceleratorType::fpga;
          }
          else if (hashCode == inference_HASH)
          {
            return AcceleratorType::inference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceleratorType>(hashCode);
          }

          return AcceleratorType::NOT_SET;
        }

        Aws::String GetNameForAcceleratorType(AcceleratorType enumValue)
        {
          switch(enumValue)
          {
          case AcceleratorType::NOT_SET:
            return {};
          case AcceleratorType::gpu:
            return "gpu";
          case AcceleratorType::fpga:
            return "fpga";
          case AcceleratorType::inference:
            return "inference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceleratorTypeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
