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

        static const int MONITORING_HASH = HashingUtils::HashString("MONITORING");
        static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");
        static const int CONFIGURATION_HASH = HashingUtils::HashString("CONFIGURATION");
        static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        LaunchActionCategory GetLaunchActionCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
