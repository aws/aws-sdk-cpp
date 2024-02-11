/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentVisibilityScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace ComponentVisibilityScopeMapper
      {

        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");
        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");


        ComponentVisibilityScope GetComponentVisibilityScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIVATE__HASH)
          {
            return ComponentVisibilityScope::PRIVATE_;
          }
          else if (hashCode == PUBLIC__HASH)
          {
            return ComponentVisibilityScope::PUBLIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentVisibilityScope>(hashCode);
          }

          return ComponentVisibilityScope::NOT_SET;
        }

        Aws::String GetNameForComponentVisibilityScope(ComponentVisibilityScope enumValue)
        {
          switch(enumValue)
          {
          case ComponentVisibilityScope::NOT_SET:
            return {};
          case ComponentVisibilityScope::PRIVATE_:
            return "PRIVATE";
          case ComponentVisibilityScope::PUBLIC_:
            return "PUBLIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentVisibilityScopeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
