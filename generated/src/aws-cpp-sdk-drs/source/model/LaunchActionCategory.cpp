/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LaunchActionCategoryMapper
      {

        static constexpr uint32_t MONITORING_HASH = ConstExprHashingUtils::HashString("MONITORING");
        static constexpr uint32_t VALIDATION_HASH = ConstExprHashingUtils::HashString("VALIDATION");
        static constexpr uint32_t CONFIGURATION_HASH = ConstExprHashingUtils::HashString("CONFIGURATION");
        static constexpr uint32_t SECURITY_HASH = ConstExprHashingUtils::HashString("SECURITY");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        LaunchActionCategory GetLaunchActionCategoryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONITORING_HASH)
          {
            return LaunchActionCategory::MONITORING;
          }
          else if (hashCode == VALIDATION_HASH)
          {
            return LaunchActionCategory::VALIDATION;
          }
          else if (hashCode == CONFIGURATION_HASH)
          {
            return LaunchActionCategory::CONFIGURATION;
          }
          else if (hashCode == SECURITY_HASH)
          {
            return LaunchActionCategory::SECURITY;
          }
          else if (hashCode == OTHER_HASH)
          {
            return LaunchActionCategory::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchActionCategory>(hashCode);
          }

          return LaunchActionCategory::NOT_SET;
        }

        Aws::String GetNameForLaunchActionCategory(LaunchActionCategory enumValue)
        {
          switch(enumValue)
          {
          case LaunchActionCategory::NOT_SET:
            return {};
          case LaunchActionCategory::MONITORING:
            return "MONITORING";
          case LaunchActionCategory::VALIDATION:
            return "VALIDATION";
          case LaunchActionCategory::CONFIGURATION:
            return "CONFIGURATION";
          case LaunchActionCategory::SECURITY:
            return "SECURITY";
          case LaunchActionCategory::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchActionCategoryMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
