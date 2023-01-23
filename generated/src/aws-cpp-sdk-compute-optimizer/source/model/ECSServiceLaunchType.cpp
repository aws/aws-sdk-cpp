/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceLaunchType.h>
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
      namespace ECSServiceLaunchTypeMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int Fargate_HASH = HashingUtils::HashString("Fargate");


        ECSServiceLaunchType GetECSServiceLaunchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return ECSServiceLaunchType::EC2;
          }
          else if (hashCode == Fargate_HASH)
          {
            return ECSServiceLaunchType::Fargate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSServiceLaunchType>(hashCode);
          }

          return ECSServiceLaunchType::NOT_SET;
        }

        Aws::String GetNameForECSServiceLaunchType(ECSServiceLaunchType enumValue)
        {
          switch(enumValue)
          {
          case ECSServiceLaunchType::EC2:
            return "EC2";
          case ECSServiceLaunchType::Fargate:
            return "Fargate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ECSServiceLaunchTypeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
