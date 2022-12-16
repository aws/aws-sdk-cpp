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

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Ready_HASH = HashingUtils::HashString("Ready");
        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleting_From_Environment_HASH = HashingUtils::HashString("Deleting From Environment");


        ApplicationLifecycle GetApplicationLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
