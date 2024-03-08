/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/TargetPlatformAccelerator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace TargetPlatformAcceleratorMapper
      {

        static const int NVIDIA_HASH = HashingUtils::HashString("NVIDIA");


        TargetPlatformAccelerator GetTargetPlatformAcceleratorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NVIDIA_HASH)
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
          case TargetPlatformAccelerator::NOT_SET:
            return {};
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
  } // namespace LookoutforVision
} // namespace Aws
