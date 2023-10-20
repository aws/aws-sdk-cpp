/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DeleteAgentErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace DeleteAgentErrorCodeMapper
      {

        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");
        static const int AGENT_IN_USE_HASH = HashingUtils::HashString("AGENT_IN_USE");


        DeleteAgentErrorCode GetDeleteAgentErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_FOUND_HASH)
          {
            return DeleteAgentErrorCode::NOT_FOUND;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return DeleteAgentErrorCode::INTERNAL_SERVER_ERROR;
          }
          else if (hashCode == AGENT_IN_USE_HASH)
          {
            return DeleteAgentErrorCode::AGENT_IN_USE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteAgentErrorCode>(hashCode);
          }

          return DeleteAgentErrorCode::NOT_SET;
        }

        Aws::String GetNameForDeleteAgentErrorCode(DeleteAgentErrorCode enumValue)
        {
          switch(enumValue)
          {
          case DeleteAgentErrorCode::NOT_SET:
            return {};
          case DeleteAgentErrorCode::NOT_FOUND:
            return "NOT_FOUND";
          case DeleteAgentErrorCode::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          case DeleteAgentErrorCode::AGENT_IN_USE:
            return "AGENT_IN_USE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteAgentErrorCodeMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
