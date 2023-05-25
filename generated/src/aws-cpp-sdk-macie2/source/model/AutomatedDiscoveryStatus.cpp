/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutomatedDiscoveryStatus.h>
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
      namespace AutomatedDiscoveryStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutomatedDiscoveryStatus GetAutomatedDiscoveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutomatedDiscoveryStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutomatedDiscoveryStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedDiscoveryStatus>(hashCode);
          }

          return AutomatedDiscoveryStatus::NOT_SET;
        }

        Aws::String GetNameForAutomatedDiscoveryStatus(AutomatedDiscoveryStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomatedDiscoveryStatus::ENABLED:
            return "ENABLED";
          case AutomatedDiscoveryStatus::DISABLED:
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

      } // namespace AutomatedDiscoveryStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
