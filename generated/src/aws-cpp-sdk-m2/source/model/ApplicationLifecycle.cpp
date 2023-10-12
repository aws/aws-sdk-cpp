/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ApplicationLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace ApplicationLifecycleMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");
        static constexpr uint32_t Starting_HASH = ConstExprHashingUtils::HashString("Starting");
        static constexpr uint32_t Running_HASH = ConstExprHashingUtils::HashString("Running");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleting_From_Environment_HASH = ConstExprHashingUtils::HashString("Deleting From Environment");


        ApplicationLifecycle GetApplicationLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return ApplicationLifecycle::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return ApplicationLifecycle::Created;
          }
          else if (hashCode == Available_HASH)
          {
            return ApplicationLifecycle::Available;
          }
          else if (hashCode == Ready_HASH)
          {
            return ApplicationLifecycle::Ready;
          }
          else if (hashCode == Starting_HASH)
          {
            return ApplicationLifecycle::Starting;
          }
          else if (hashCode == Running_HASH)
          {
            return ApplicationLifecycle::Running;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ApplicationLifecycle::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ApplicationLifecycle::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return ApplicationLifecycle::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ApplicationLifecycle::Deleting;
          }
          else if (hashCode == Deleting_From_Environment_HASH)
          {
            return ApplicationLifecycle::Deleting_From_Environment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationLifecycle>(hashCode);
          }

          return ApplicationLifecycle::NOT_SET;
        }

        Aws::String GetNameForApplicationLifecycle(ApplicationLifecycle enumValue)
        {
          switch(enumValue)
          {
          case ApplicationLifecycle::NOT_SET:
            return {};
          case ApplicationLifecycle::Creating:
            return "Creating";
          case ApplicationLifecycle::Created:
            return "Created";
          case ApplicationLifecycle::Available:
            return "Available";
          case ApplicationLifecycle::Ready:
            return "Ready";
          case ApplicationLifecycle::Starting:
            return "Starting";
          case ApplicationLifecycle::Running:
            return "Running";
          case ApplicationLifecycle::Stopping:
            return "Stopping";
          case ApplicationLifecycle::Stopped:
            return "Stopped";
          case ApplicationLifecycle::Failed:
            return "Failed";
          case ApplicationLifecycle::Deleting:
            return "Deleting";
          case ApplicationLifecycle::Deleting_From_Environment:
            return "Deleting From Environment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationLifecycleMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
