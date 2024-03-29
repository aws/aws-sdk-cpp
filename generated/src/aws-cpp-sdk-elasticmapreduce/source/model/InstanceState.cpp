﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceState.h>
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
      namespace InstanceStateMapper
      {

        static const int AWAITING_FULFILLMENT_HASH = HashingUtils::HashString("AWAITING_FULFILLMENT");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int BOOTSTRAPPING_HASH = HashingUtils::HashString("BOOTSTRAPPING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        InstanceState GetInstanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWAITING_FULFILLMENT_HASH)
          {
            return InstanceState::AWAITING_FULFILLMENT;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return InstanceState::PROVISIONING;
          }
          else if (hashCode == BOOTSTRAPPING_HASH)
          {
            return InstanceState::BOOTSTRAPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InstanceState::RUNNING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return InstanceState::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceState>(hashCode);
          }

          return InstanceState::NOT_SET;
        }

        Aws::String GetNameForInstanceState(InstanceState enumValue)
        {
          switch(enumValue)
          {
          case InstanceState::NOT_SET:
            return {};
          case InstanceState::AWAITING_FULFILLMENT:
            return "AWAITING_FULFILLMENT";
          case InstanceState::PROVISIONING:
            return "PROVISIONING";
          case InstanceState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case InstanceState::RUNNING:
            return "RUNNING";
          case InstanceState::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
