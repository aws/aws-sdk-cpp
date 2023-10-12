/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageBuilderState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace ImageBuilderStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t UPDATING_AGENT_HASH = ConstExprHashingUtils::HashString("UPDATING_AGENT");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t REBOOTING_HASH = ConstExprHashingUtils::HashString("REBOOTING");
        static constexpr uint32_t SNAPSHOTTING_HASH = ConstExprHashingUtils::HashString("SNAPSHOTTING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t PENDING_QUALIFICATION_HASH = ConstExprHashingUtils::HashString("PENDING_QUALIFICATION");


        ImageBuilderState GetImageBuilderStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ImageBuilderState::PENDING;
          }
          else if (hashCode == UPDATING_AGENT_HASH)
          {
            return ImageBuilderState::UPDATING_AGENT;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ImageBuilderState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ImageBuilderState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ImageBuilderState::STOPPED;
          }
          else if (hashCode == REBOOTING_HASH)
          {
            return ImageBuilderState::REBOOTING;
          }
          else if (hashCode == SNAPSHOTTING_HASH)
          {
            return ImageBuilderState::SNAPSHOTTING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ImageBuilderState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImageBuilderState::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ImageBuilderState::UPDATING;
          }
          else if (hashCode == PENDING_QUALIFICATION_HASH)
          {
            return ImageBuilderState::PENDING_QUALIFICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageBuilderState>(hashCode);
          }

          return ImageBuilderState::NOT_SET;
        }

        Aws::String GetNameForImageBuilderState(ImageBuilderState enumValue)
        {
          switch(enumValue)
          {
          case ImageBuilderState::NOT_SET:
            return {};
          case ImageBuilderState::PENDING:
            return "PENDING";
          case ImageBuilderState::UPDATING_AGENT:
            return "UPDATING_AGENT";
          case ImageBuilderState::RUNNING:
            return "RUNNING";
          case ImageBuilderState::STOPPING:
            return "STOPPING";
          case ImageBuilderState::STOPPED:
            return "STOPPED";
          case ImageBuilderState::REBOOTING:
            return "REBOOTING";
          case ImageBuilderState::SNAPSHOTTING:
            return "SNAPSHOTTING";
          case ImageBuilderState::DELETING:
            return "DELETING";
          case ImageBuilderState::FAILED:
            return "FAILED";
          case ImageBuilderState::UPDATING:
            return "UPDATING";
          case ImageBuilderState::PENDING_QUALIFICATION:
            return "PENDING_QUALIFICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageBuilderStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
