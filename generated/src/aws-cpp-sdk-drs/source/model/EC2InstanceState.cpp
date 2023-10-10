/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/EC2InstanceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace EC2InstanceStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int SHUTTING_DOWN_HASH = HashingUtils::HashString("SHUTTING-DOWN");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");


        EC2InstanceState GetEC2InstanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return EC2InstanceState::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return EC2InstanceState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return EC2InstanceState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return EC2InstanceState::STOPPED;
          }
          else if (hashCode == SHUTTING_DOWN_HASH)
          {
            return EC2InstanceState::SHUTTING_DOWN;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return EC2InstanceState::TERMINATED;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return EC2InstanceState::NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EC2InstanceState>(hashCode);
          }

          return EC2InstanceState::NOT_SET;
        }

        Aws::String GetNameForEC2InstanceState(EC2InstanceState enumValue)
        {
          switch(enumValue)
          {
          case EC2InstanceState::NOT_SET:
            return {};
          case EC2InstanceState::PENDING:
            return "PENDING";
          case EC2InstanceState::RUNNING:
            return "RUNNING";
          case EC2InstanceState::STOPPING:
            return "STOPPING";
          case EC2InstanceState::STOPPED:
            return "STOPPED";
          case EC2InstanceState::SHUTTING_DOWN:
            return "SHUTTING-DOWN";
          case EC2InstanceState::TERMINATED:
            return "TERMINATED";
          case EC2InstanceState::NOT_FOUND:
            return "NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EC2InstanceStateMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
