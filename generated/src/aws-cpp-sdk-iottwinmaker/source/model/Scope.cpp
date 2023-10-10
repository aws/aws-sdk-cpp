/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/Scope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace ScopeMapper
      {

        static const int ENTITY_HASH = HashingUtils::HashString("ENTITY");
        static const int WORKSPACE_HASH = HashingUtils::HashString("WORKSPACE");


        Scope GetScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTITY_HASH)
          {
            return Scope::ENTITY;
          }
          else if (hashCode == WORKSPACE_HASH)
          {
            return Scope::WORKSPACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scope>(hashCode);
          }

          return Scope::NOT_SET;
        }

        Aws::String GetNameForScope(Scope enumValue)
        {
          switch(enumValue)
          {
          case Scope::NOT_SET:
            return {};
          case Scope::ENTITY:
            return "ENTITY";
          case Scope::WORKSPACE:
            return "WORKSPACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
