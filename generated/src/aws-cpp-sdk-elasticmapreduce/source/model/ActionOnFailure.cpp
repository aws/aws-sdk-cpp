﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ActionOnFailure.h>
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
      namespace ActionOnFailureMapper
      {

        static const int TERMINATE_JOB_FLOW_HASH = HashingUtils::HashString("TERMINATE_JOB_FLOW");
        static const int TERMINATE_CLUSTER_HASH = HashingUtils::HashString("TERMINATE_CLUSTER");
        static const int CANCEL_AND_WAIT_HASH = HashingUtils::HashString("CANCEL_AND_WAIT");
        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");


        ActionOnFailure GetActionOnFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERMINATE_JOB_FLOW_HASH)
          {
            return ActionOnFailure::TERMINATE_JOB_FLOW;
          }
          else if (hashCode == TERMINATE_CLUSTER_HASH)
          {
            return ActionOnFailure::TERMINATE_CLUSTER;
          }
          else if (hashCode == CANCEL_AND_WAIT_HASH)
          {
            return ActionOnFailure::CANCEL_AND_WAIT;
          }
          else if (hashCode == CONTINUE_HASH)
          {
            return ActionOnFailure::CONTINUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionOnFailure>(hashCode);
          }

          return ActionOnFailure::NOT_SET;
        }

        Aws::String GetNameForActionOnFailure(ActionOnFailure enumValue)
        {
          switch(enumValue)
          {
          case ActionOnFailure::NOT_SET:
            return {};
          case ActionOnFailure::TERMINATE_JOB_FLOW:
            return "TERMINATE_JOB_FLOW";
          case ActionOnFailure::TERMINATE_CLUSTER:
            return "TERMINATE_CLUSTER";
          case ActionOnFailure::CANCEL_AND_WAIT:
            return "CANCEL_AND_WAIT";
          case ActionOnFailure::CONTINUE:
            return "CONTINUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionOnFailureMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
