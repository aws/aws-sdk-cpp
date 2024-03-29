﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ClusterState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ClusterStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int BOOTSTRAPPING_HASH = HashingUtils::HashString("BOOTSTRAPPING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int TERMINATED_WITH_ERRORS_HASH = HashingUtils::HashString("TERMINATED_WITH_ERRORS");


        ClusterState GetClusterStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return ClusterState::STARTING;
          }
          else if (hashCode == BOOTSTRAPPING_HASH)
          {
            return ClusterState::BOOTSTRAPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ClusterState::RUNNING;
          }
          else if (hashCode == WAITING_HASH)
          {
            return ClusterState::WAITING;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return ClusterState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return ClusterState::TERMINATED;
          }
          else if (hashCode == TERMINATED_WITH_ERRORS_HASH)
          {
            return ClusterState::TERMINATED_WITH_ERRORS;
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
          case ClusterState::NOT_SET:
            return {};
          case ClusterState::STARTING:
            return "STARTING";
          case ClusterState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case ClusterState::RUNNING:
            return "RUNNING";
          case ClusterState::WAITING:
            return "WAITING";
          case ClusterState::TERMINATING:
            return "TERMINATING";
          case ClusterState::TERMINATED:
            return "TERMINATED";
          case ClusterState::TERMINATED_WITH_ERRORS:
            return "TERMINATED_WITH_ERRORS";
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
  } // namespace EMR
} // namespace Aws
