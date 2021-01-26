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
