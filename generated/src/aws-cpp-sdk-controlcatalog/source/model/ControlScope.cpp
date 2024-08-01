/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlCatalog
  {
    namespace Model
    {
      namespace ControlScopeMapper
      {

        static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");
        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");


        ControlScope GetControlScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GLOBAL_HASH)
          {
            return ControlScope::GLOBAL;
          }
          else if (hashCode == REGIONAL_HASH)
          {
            return ControlScope::REGIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlScope>(hashCode);
          }

          return ControlScope::NOT_SET;
        }

        Aws::String GetNameForControlScope(ControlScope enumValue)
        {
          switch(enumValue)
          {
          case ControlScope::NOT_SET:
            return {};
          case ControlScope::GLOBAL:
            return "GLOBAL";
          case ControlScope::REGIONAL:
            return "REGIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlScopeMapper
    } // namespace Model
  } // namespace ControlCatalog
} // namespace Aws
