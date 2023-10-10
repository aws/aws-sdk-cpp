/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/PersistentAppUI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace PersistentAppUIMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PersistentAppUI GetPersistentAppUIForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PersistentAppUI::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PersistentAppUI::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersistentAppUI>(hashCode);
          }

          return PersistentAppUI::NOT_SET;
        }

        Aws::String GetNameForPersistentAppUI(PersistentAppUI enumValue)
        {
          switch(enumValue)
          {
          case PersistentAppUI::NOT_SET:
            return {};
          case PersistentAppUI::ENABLED:
            return "ENABLED";
          case PersistentAppUI::DISABLED:
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

      } // namespace PersistentAppUIMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
