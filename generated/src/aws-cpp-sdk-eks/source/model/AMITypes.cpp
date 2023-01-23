/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AMITypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace AMITypesMapper
      {

        static const int AL2_x86_64_HASH = HashingUtils::HashString("AL2_x86_64");
        static const int AL2_x86_64_GPU_HASH = HashingUtils::HashString("AL2_x86_64_GPU");
        static const int AL2_ARM_64_HASH = HashingUtils::HashString("AL2_ARM_64");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int BOTTLEROCKET_ARM_64_HASH = HashingUtils::HashString("BOTTLEROCKET_ARM_64");
        static const int BOTTLEROCKET_x86_64_HASH = HashingUtils::HashString("BOTTLEROCKET_x86_64");
        static const int BOTTLEROCKET_ARM_64_NVIDIA_HASH = HashingUtils::HashString("BOTTLEROCKET_ARM_64_NVIDIA");
        static const int BOTTLEROCKET_x86_64_NVIDIA_HASH = HashingUtils::HashString("BOTTLEROCKET_x86_64_NVIDIA");
        static const int WINDOWS_CORE_2019_x86_64_HASH = HashingUtils::HashString("WINDOWS_CORE_2019_x86_64");
        static const int WINDOWS_FULL_2019_x86_64_HASH = HashingUtils::HashString("WINDOWS_FULL_2019_x86_64");
        static const int WINDOWS_CORE_2022_x86_64_HASH = HashingUtils::HashString("WINDOWS_CORE_2022_x86_64");
        static const int WINDOWS_FULL_2022_x86_64_HASH = HashingUtils::HashString("WINDOWS_FULL_2022_x86_64");


        AMITypes GetAMITypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AL2_x86_64_HASH)
          {
            return AMITypes::AL2_x86_64;
          }
          else if (hashCode == AL2_x86_64_GPU_HASH)
          {
            return AMITypes::AL2_x86_64_GPU;
          }
          else if (hashCode == AL2_ARM_64_HASH)
          {
            return AMITypes::AL2_ARM_64;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AMITypes::CUSTOM;
          }
          else if (hashCode == BOTTLEROCKET_ARM_64_HASH)
          {
            return AMITypes::BOTTLEROCKET_ARM_64;
          }
          else if (hashCode == BOTTLEROCKET_x86_64_HASH)
          {
            return AMITypes::BOTTLEROCKET_x86_64;
          }
          else if (hashCode == BOTTLEROCKET_ARM_64_NVIDIA_HASH)
          {
            return AMITypes::BOTTLEROCKET_ARM_64_NVIDIA;
          }
          else if (hashCode == BOTTLEROCKET_x86_64_NVIDIA_HASH)
          {
            return AMITypes::BOTTLEROCKET_x86_64_NVIDIA;
          }
          else if (hashCode == WINDOWS_CORE_2019_x86_64_HASH)
          {
            return AMITypes::WINDOWS_CORE_2019_x86_64;
          }
          else if (hashCode == WINDOWS_FULL_2019_x86_64_HASH)
          {
            return AMITypes::WINDOWS_FULL_2019_x86_64;
          }
          else if (hashCode == WINDOWS_CORE_2022_x86_64_HASH)
          {
            return AMITypes::WINDOWS_CORE_2022_x86_64;
          }
          else if (hashCode == WINDOWS_FULL_2022_x86_64_HASH)
          {
            return AMITypes::WINDOWS_FULL_2022_x86_64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AMITypes>(hashCode);
          }

          return AMITypes::NOT_SET;
        }

        Aws::String GetNameForAMITypes(AMITypes enumValue)
        {
          switch(enumValue)
          {
          case AMITypes::AL2_x86_64:
            return "AL2_x86_64";
          case AMITypes::AL2_x86_64_GPU:
            return "AL2_x86_64_GPU";
          case AMITypes::AL2_ARM_64:
            return "AL2_ARM_64";
          case AMITypes::CUSTOM:
            return "CUSTOM";
          case AMITypes::BOTTLEROCKET_ARM_64:
            return "BOTTLEROCKET_ARM_64";
          case AMITypes::BOTTLEROCKET_x86_64:
            return "BOTTLEROCKET_x86_64";
          case AMITypes::BOTTLEROCKET_ARM_64_NVIDIA:
            return "BOTTLEROCKET_ARM_64_NVIDIA";
          case AMITypes::BOTTLEROCKET_x86_64_NVIDIA:
            return "BOTTLEROCKET_x86_64_NVIDIA";
          case AMITypes::WINDOWS_CORE_2019_x86_64:
            return "WINDOWS_CORE_2019_x86_64";
          case AMITypes::WINDOWS_FULL_2019_x86_64:
            return "WINDOWS_FULL_2019_x86_64";
          case AMITypes::WINDOWS_CORE_2022_x86_64:
            return "WINDOWS_CORE_2022_x86_64";
          case AMITypes::WINDOWS_FULL_2022_x86_64:
            return "WINDOWS_FULL_2022_x86_64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AMITypesMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
