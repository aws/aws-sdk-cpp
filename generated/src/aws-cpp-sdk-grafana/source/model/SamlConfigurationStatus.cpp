/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/SamlConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace SamlConfigurationStatusMapper
      {

        static constexpr uint32_t CONFIGURED_HASH = ConstExprHashingUtils::HashString("CONFIGURED");
        static constexpr uint32_t NOT_CONFIGURED_HASH = ConstExprHashingUtils::HashString("NOT_CONFIGURED");


        SamlConfigurationStatus GetSamlConfigurationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURED_HASH)
          {
            return SamlConfigurationStatus::CONFIGURED;
          }
          else if (hashCode == NOT_CONFIGURED_HASH)
          {
            return SamlConfigurationStatus::NOT_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SamlConfigurationStatus>(hashCode);
          }

          return SamlConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForSamlConfigurationStatus(SamlConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case SamlConfigurationStatus::NOT_SET:
            return {};
          case SamlConfigurationStatus::CONFIGURED:
            return "CONFIGURED";
          case SamlConfigurationStatus::NOT_CONFIGURED:
            return "NOT_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SamlConfigurationStatusMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
