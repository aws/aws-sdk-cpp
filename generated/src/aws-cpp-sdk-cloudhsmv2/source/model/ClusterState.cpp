/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/ClusterState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSMV2
  {
    namespace Model
    {
      namespace ClusterStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int UNINITIALIZED_HASH = HashingUtils::HashString("UNINITIALIZED");
        static const int INITIALIZE_IN_PROGRESS_HASH = HashingUtils::HashString("INITIALIZE_IN_PROGRESS");
        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");


        ClusterState GetClusterStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ClusterState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == UNINITIALIZED_HASH)
          {
            return ClusterState::UNINITIALIZED;
          }
          else if (hashCode == INITIALIZE_IN_PROGRESS_HASH)
          {
            return ClusterState::INITIALIZE_IN_PROGRESS;
          }
          else if (hashCode == INITIALIZED_HASH)
          {
            return ClusterState::INITIALIZED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ClusterState::ACTIVE;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ClusterState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ClusterState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ClusterState::DELETED;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return ClusterState::DEGRADED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterState>(hashCode);
          }

          return ClusterState::NOT_SET;
        }

        Aws::String GetNameForClusterState(ClusterState enumValue)
        {
          switch(enumValue)
          {
          case ClusterState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ClusterState::UNINITIALIZED:
            return "UNINITIALIZED";
          case ClusterState::INITIALIZE_IN_PROGRESS:
            return "INITIALIZE_IN_PROGRESS";
          case ClusterState::INITIALIZED:
            return "INITIALIZED";
          case ClusterState::ACTIVE:
            return "ACTIVE";
          case ClusterState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ClusterState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ClusterState::DELETED:
            return "DELETED";
          case ClusterState::DEGRADED:
            return "DEGRADED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterStateMapper
    } // namespace Model
  } // namespace CloudHSMV2
} // namespace Aws
