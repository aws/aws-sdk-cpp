/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/SelectiveAuth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace SelectiveAuthMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        SelectiveAuth GetSelectiveAuthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return SelectiveAuth::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return SelectiveAuth::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectiveAuth>(hashCode);
          }

          return SelectiveAuth::NOT_SET;
        }

        Aws::String GetNameForSelectiveAuth(SelectiveAuth enumValue)
        {
          switch(enumValue)
          {
          case SelectiveAuth::Enabled:
            return "Enabled";
          case SelectiveAuth::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectiveAuthMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
