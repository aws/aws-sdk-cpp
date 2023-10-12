/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServicePowerName.h>
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
      namespace ContainerServicePowerNameMapper
      {

        static constexpr uint32_t nano_HASH = ConstExprHashingUtils::HashString("nano");
        static constexpr uint32_t micro_HASH = ConstExprHashingUtils::HashString("micro");
        static constexpr uint32_t small_HASH = ConstExprHashingUtils::HashString("small");
        static constexpr uint32_t medium_HASH = ConstExprHashingUtils::HashString("medium");
        static constexpr uint32_t large_HASH = ConstExprHashingUtils::HashString("large");
        static constexpr uint32_t xlarge_HASH = ConstExprHashingUtils::HashString("xlarge");


        ContainerServicePowerName GetContainerServicePowerNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nano_HASH)
          {
            return ContainerServicePowerName::nano;
          }
          else if (hashCode == micro_HASH)
          {
            return ContainerServicePowerName::micro;
          }
          else if (hashCode == small_HASH)
          {
            return ContainerServicePowerName::small;
          }
          else if (hashCode == medium_HASH)
          {
            return ContainerServicePowerName::medium;
          }
          else if (hashCode == large_HASH)
          {
            return ContainerServicePowerName::large;
          }
          else if (hashCode == xlarge_HASH)
          {
            return ContainerServicePowerName::xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerServicePowerName>(hashCode);
          }

          return ContainerServicePowerName::NOT_SET;
        }

        Aws::String GetNameForContainerServicePowerName(ContainerServicePowerName enumValue)
        {
          switch(enumValue)
          {
          case ContainerServicePowerName::NOT_SET:
            return {};
          case ContainerServicePowerName::nano:
            return "nano";
          case ContainerServicePowerName::micro:
            return "micro";
          case ContainerServicePowerName::small:
            return "small";
          case ContainerServicePowerName::medium:
            return "medium";
          case ContainerServicePowerName::large:
            return "large";
          case ContainerServicePowerName::xlarge:
            return "xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerServicePowerNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
