/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Scope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ScopeMapper
      {

        static const int task_HASH = HashingUtils::HashString("task");
        static const int shared_HASH = HashingUtils::HashString("shared");


        Scope GetScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == task_HASH)
          {
            return Scope::task;
          }
          else if (hashCode == shared_HASH)
          {
            return Scope::shared;
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
          case Scope::task:
            return "task";
          case Scope::shared:
            return "shared";
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
  } // namespace ECS
} // namespace Aws
