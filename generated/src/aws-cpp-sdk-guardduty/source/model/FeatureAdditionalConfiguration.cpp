/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FeatureAdditionalConfiguration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace FeatureAdditionalConfigurationMapper
      {

        static const int EKS_ADDON_MANAGEMENT_HASH = HashingUtils::HashString("EKS_ADDON_MANAGEMENT");


        FeatureAdditionalConfiguration GetFeatureAdditionalConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_ADDON_MANAGEMENT_HASH)
          {
            return FeatureAdditionalConfiguration::EKS_ADDON_MANAGEMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureAdditionalConfiguration>(hashCode);
          }

          return FeatureAdditionalConfiguration::NOT_SET;
        }

        Aws::String GetNameForFeatureAdditionalConfiguration(FeatureAdditionalConfiguration enumValue)
        {
          switch(enumValue)
          {
          case FeatureAdditionalConfiguration::EKS_ADDON_MANAGEMENT:
            return "EKS_ADDON_MANAGEMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureAdditionalConfigurationMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
