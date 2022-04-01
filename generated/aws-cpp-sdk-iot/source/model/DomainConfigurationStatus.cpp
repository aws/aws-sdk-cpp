/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DomainConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DomainConfigurationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DomainConfigurationStatus GetDomainConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DomainConfigurationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DomainConfigurationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainConfigurationStatus>(hashCode);
          }

          return DomainConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForDomainConfigurationStatus(DomainConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainConfigurationStatus::ENABLED:
            return "ENABLED";
          case DomainConfigurationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainConfigurationStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
