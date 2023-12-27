/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/EndpointState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace EndpointStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        EndpointState GetEndpointStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return EndpointState::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return EndpointState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EndpointState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EndpointState::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EndpointState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return EndpointState::UPDATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return EndpointState::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointState>(hashCode);
          }

          return EndpointState::NOT_SET;
        }

        Aws::String GetNameForEndpointState(EndpointState enumValue)
        {
          switch(enumValue)
          {
          case EndpointState::NOT_SET:
            return {};
          case EndpointState::ACTIVE:
            return "ACTIVE";
          case EndpointState::CREATING:
            return "CREATING";
          case EndpointState::UPDATING:
            return "UPDATING";
          case EndpointState::DELETING:
            return "DELETING";
          case EndpointState::CREATE_FAILED:
            return "CREATE_FAILED";
          case EndpointState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case EndpointState::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStateMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
