/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutomatedDiscoveryAccountStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace AutomatedDiscoveryAccountStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutomatedDiscoveryAccountStatus GetAutomatedDiscoveryAccountStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutomatedDiscoveryAccountStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutomatedDiscoveryAccountStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedDiscoveryAccountStatus>(hashCode);
          }

          return AutomatedDiscoveryAccountStatus::NOT_SET;
        }

        Aws::String GetNameForAutomatedDiscoveryAccountStatus(AutomatedDiscoveryAccountStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomatedDiscoveryAccountStatus::NOT_SET:
            return {};
          case AutomatedDiscoveryAccountStatus::ENABLED:
            return "ENABLED";
          case AutomatedDiscoveryAccountStatus::DISABLED:
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

      } // namespace AutomatedDiscoveryAccountStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
