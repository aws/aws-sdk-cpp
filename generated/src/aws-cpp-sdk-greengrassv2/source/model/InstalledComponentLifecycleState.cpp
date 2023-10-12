/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/InstalledComponentLifecycleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace InstalledComponentLifecycleStateMapper
      {

        static constexpr uint32_t NEW__HASH = ConstExprHashingUtils::HashString("NEW");
        static constexpr uint32_t INSTALLED_HASH = ConstExprHashingUtils::HashString("INSTALLED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t ERRORED_HASH = ConstExprHashingUtils::HashString("ERRORED");
        static constexpr uint32_t BROKEN_HASH = ConstExprHashingUtils::HashString("BROKEN");
        static constexpr uint32_t FINISHED_HASH = ConstExprHashingUtils::HashString("FINISHED");


        InstalledComponentLifecycleState GetInstalledComponentLifecycleStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return InstalledComponentLifecycleState::NEW_;
          }
          else if (hashCode == INSTALLED_HASH)
          {
            return InstalledComponentLifecycleState::INSTALLED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return InstalledComponentLifecycleState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InstalledComponentLifecycleState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return InstalledComponentLifecycleState::STOPPING;
          }
          else if (hashCode == ERRORED_HASH)
          {
            return InstalledComponentLifecycleState::ERRORED;
          }
          else if (hashCode == BROKEN_HASH)
          {
            return InstalledComponentLifecycleState::BROKEN;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return InstalledComponentLifecycleState::FINISHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstalledComponentLifecycleState>(hashCode);
          }

          return InstalledComponentLifecycleState::NOT_SET;
        }

        Aws::String GetNameForInstalledComponentLifecycleState(InstalledComponentLifecycleState enumValue)
        {
          switch(enumValue)
          {
          case InstalledComponentLifecycleState::NOT_SET:
            return {};
          case InstalledComponentLifecycleState::NEW_:
            return "NEW";
          case InstalledComponentLifecycleState::INSTALLED:
            return "INSTALLED";
          case InstalledComponentLifecycleState::STARTING:
            return "STARTING";
          case InstalledComponentLifecycleState::RUNNING:
            return "RUNNING";
          case InstalledComponentLifecycleState::STOPPING:
            return "STOPPING";
          case InstalledComponentLifecycleState::ERRORED:
            return "ERRORED";
          case InstalledComponentLifecycleState::BROKEN:
            return "BROKEN";
          case InstalledComponentLifecycleState::FINISHED:
            return "FINISHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstalledComponentLifecycleStateMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
