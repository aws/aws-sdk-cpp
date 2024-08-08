/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResourceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ResourceStateMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ResourceState GetResourceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return ResourceState::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceState::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ResourceState::SUCCESS;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ResourceState::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceState>(hashCode);
          }

          return ResourceState::NOT_SET;
        }

        Aws::String GetNameForResourceState(ResourceState enumValue)
        {
          switch(enumValue)
          {
          case ResourceState::NOT_SET:
            return {};
          case ResourceState::QUEUED:
            return "QUEUED";
          case ResourceState::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceState::SUCCESS:
            return "SUCCESS";
          case ResourceState::STOPPED:
            return "STOPPED";
          case ResourceState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
