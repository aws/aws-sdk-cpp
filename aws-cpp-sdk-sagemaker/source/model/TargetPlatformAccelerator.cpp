/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TargetPlatformAccelerator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TargetPlatformAcceleratorMapper
      {

        static const int INTEL_GRAPHICS_HASH = HashingUtils::HashString("INTEL_GRAPHICS");
        static const int MALI_HASH = HashingUtils::HashString("MALI");
        static const int NVIDIA_HASH = HashingUtils::HashString("NVIDIA");


        TargetPlatformAccelerator GetTargetPlatformAcceleratorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTEL_GRAPHICS_HASH)
          {
            return TargetPlatformAccelerator::INTEL_GRAPHICS;
          }
          else if (hashCode == MALI_HASH)
          {
            return TargetPlatformAccelerator::MALI;
          }
          else if (hashCode == NVIDIA_HASH)
          {
            return TargetPlatformAccelerator::NVIDIA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetPlatformAccelerator>(hashCode);
          }

          return TargetPlatformAccelerator::NOT_SET;
        }

        Aws::String GetNameForTargetPlatformAccelerator(TargetPlatformAccelerator enumValue)
        {
          switch(enumValue)
          {
          case TargetPlatformAccelerator::INTEL_GRAPHICS:
            return "INTEL_GRAPHICS";
          case TargetPlatformAccelerator::MALI:
            return "MALI";
          case TargetPlatformAccelerator::NVIDIA:
            return "NVIDIA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetPlatformAcceleratorMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
