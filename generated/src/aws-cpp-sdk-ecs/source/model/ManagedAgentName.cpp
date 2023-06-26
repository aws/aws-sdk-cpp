/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedAgentName.h>
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
      namespace ManagedAgentNameMapper
      {

        static const int ExecuteCommandAgent_HASH = HashingUtils::HashString("ExecuteCommandAgent");


        ManagedAgentName GetManagedAgentNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExecuteCommandAgent_HASH)
          {
            return ManagedAgentName::ExecuteCommandAgent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedAgentName>(hashCode);
          }

          return ManagedAgentName::NOT_SET;
        }

        Aws::String GetNameForManagedAgentName(ManagedAgentName enumValue)
        {
          switch(enumValue)
          {
          case ManagedAgentName::ExecuteCommandAgent:
            return "ExecuteCommandAgent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedAgentNameMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
