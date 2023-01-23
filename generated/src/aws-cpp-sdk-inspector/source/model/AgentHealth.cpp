/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AgentHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace AgentHealthMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        AgentHealth GetAgentHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return AgentHealth::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return AgentHealth::UNHEALTHY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return AgentHealth::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentHealth>(hashCode);
          }

          return AgentHealth::NOT_SET;
        }

        Aws::String GetNameForAgentHealth(AgentHealth enumValue)
        {
          switch(enumValue)
          {
          case AgentHealth::HEALTHY:
            return "HEALTHY";
          case AgentHealth::UNHEALTHY:
            return "UNHEALTHY";
          case AgentHealth::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentHealthMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
