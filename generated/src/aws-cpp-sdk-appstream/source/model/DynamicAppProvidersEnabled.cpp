/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DynamicAppProvidersEnabled.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace DynamicAppProvidersEnabledMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DynamicAppProvidersEnabled GetDynamicAppProvidersEnabledForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DynamicAppProvidersEnabled::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DynamicAppProvidersEnabled::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynamicAppProvidersEnabled>(hashCode);
          }

          return DynamicAppProvidersEnabled::NOT_SET;
        }

        Aws::String GetNameForDynamicAppProvidersEnabled(DynamicAppProvidersEnabled enumValue)
        {
          switch(enumValue)
          {
          case DynamicAppProvidersEnabled::NOT_SET:
            return {};
          case DynamicAppProvidersEnabled::ENABLED:
            return "ENABLED";
          case DynamicAppProvidersEnabled::DISABLED:
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

      } // namespace DynamicAppProvidersEnabledMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
