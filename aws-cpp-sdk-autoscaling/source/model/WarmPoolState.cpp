/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/WarmPoolState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace WarmPoolStateMapper
      {

        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Running_HASH = HashingUtils::HashString("Running");


        WarmPoolState GetWarmPoolStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Stopped_HASH)
          {
            return WarmPoolState::Stopped;
          }
          else if (hashCode == Running_HASH)
          {
            return WarmPoolState::Running;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WarmPoolState>(hashCode);
          }

          return WarmPoolState::NOT_SET;
        }

        Aws::String GetNameForWarmPoolState(WarmPoolState enumValue)
        {
          switch(enumValue)
          {
          case WarmPoolState::Stopped:
            return "Stopped";
          case WarmPoolState::Running:
            return "Running";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WarmPoolStateMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
