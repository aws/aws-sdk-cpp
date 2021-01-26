/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceMetricName.h>
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
      namespace ContainerServiceMetricNameMapper
      {

        static const int CPUUtilization_HASH = HashingUtils::HashString("CPUUtilization");
        static const int MemoryUtilization_HASH = HashingUtils::HashString("MemoryUtilization");


        ContainerServiceMetricName GetContainerServiceMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUUtilization_HASH)
          {
            return ContainerServiceMetricName::CPUUtilization;
          }
          else if (hashCode == MemoryUtilization_HASH)
          {
            return ContainerServiceMetricName::MemoryUtilization;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerServiceMetricName>(hashCode);
          }

          return ContainerServiceMetricName::NOT_SET;
        }

        Aws::String GetNameForContainerServiceMetricName(ContainerServiceMetricName enumValue)
        {
          switch(enumValue)
          {
          case ContainerServiceMetricName::CPUUtilization:
            return "CPUUtilization";
          case ContainerServiceMetricName::MemoryUtilization:
            return "MemoryUtilization";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerServiceMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
