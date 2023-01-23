/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace InstanceTypeMapper
      {

        static const int dev_standard1_small_HASH = HashingUtils::HashString("dev.standard1.small");
        static const int dev_standard1_medium_HASH = HashingUtils::HashString("dev.standard1.medium");
        static const int dev_standard1_large_HASH = HashingUtils::HashString("dev.standard1.large");
        static const int dev_standard1_xlarge_HASH = HashingUtils::HashString("dev.standard1.xlarge");


        InstanceType GetInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == dev_standard1_small_HASH)
          {
            return InstanceType::dev_standard1_small;
          }
          else if (hashCode == dev_standard1_medium_HASH)
          {
            return InstanceType::dev_standard1_medium;
          }
          else if (hashCode == dev_standard1_large_HASH)
          {
            return InstanceType::dev_standard1_large;
          }
          else if (hashCode == dev_standard1_xlarge_HASH)
          {
            return InstanceType::dev_standard1_xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceType>(hashCode);
          }

          return InstanceType::NOT_SET;
        }

        Aws::String GetNameForInstanceType(InstanceType enumValue)
        {
          switch(enumValue)
          {
          case InstanceType::dev_standard1_small:
            return "dev.standard1.small";
          case InstanceType::dev_standard1_medium:
            return "dev.standard1.medium";
          case InstanceType::dev_standard1_large:
            return "dev.standard1.large";
          case InstanceType::dev_standard1_xlarge:
            return "dev.standard1.xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceTypeMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
