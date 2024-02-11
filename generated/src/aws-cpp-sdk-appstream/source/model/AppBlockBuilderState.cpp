/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilderState.h>
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
      namespace AppBlockBuilderStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        AppBlockBuilderState GetAppBlockBuilderStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return AppBlockBuilderState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return AppBlockBuilderState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return AppBlockBuilderState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return AppBlockBuilderState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppBlockBuilderState>(hashCode);
          }

          return AppBlockBuilderState::NOT_SET;
        }

        Aws::String GetNameForAppBlockBuilderState(AppBlockBuilderState enumValue)
        {
          switch(enumValue)
          {
          case AppBlockBuilderState::NOT_SET:
            return {};
          case AppBlockBuilderState::STARTING:
            return "STARTING";
          case AppBlockBuilderState::RUNNING:
            return "RUNNING";
          case AppBlockBuilderState::STOPPING:
            return "STOPPING";
          case AppBlockBuilderState::STOPPED:
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

      } // namespace AppBlockBuilderStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
