/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/CompositionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace CompositionStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        CompositionState GetCompositionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return CompositionState::STARTING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CompositionState::ACTIVE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return CompositionState::STOPPING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CompositionState::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return CompositionState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompositionState>(hashCode);
          }

          return CompositionState::NOT_SET;
        }

        Aws::String GetNameForCompositionState(CompositionState enumValue)
        {
          switch(enumValue)
          {
          case CompositionState::NOT_SET:
            return {};
          case CompositionState::STARTING:
            return "STARTING";
          case CompositionState::ACTIVE:
            return "ACTIVE";
          case CompositionState::STOPPING:
            return "STOPPING";
          case CompositionState::FAILED:
            return "FAILED";
          case CompositionState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompositionStateMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
