/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/InteractionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace InteractionModeMapper
      {

        static const int INTERACTIVE_HASH = HashingUtils::HashString("INTERACTIVE");
        static const int NO_VIDEO_HASH = HashingUtils::HashString("NO_VIDEO");
        static const int VIDEO_ONLY_HASH = HashingUtils::HashString("VIDEO_ONLY");


        InteractionMode GetInteractionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERACTIVE_HASH)
          {
            return InteractionMode::INTERACTIVE;
          }
          else if (hashCode == NO_VIDEO_HASH)
          {
            return InteractionMode::NO_VIDEO;
          }
          else if (hashCode == VIDEO_ONLY_HASH)
          {
            return InteractionMode::VIDEO_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InteractionMode>(hashCode);
          }

          return InteractionMode::NOT_SET;
        }

        Aws::String GetNameForInteractionMode(InteractionMode enumValue)
        {
          switch(enumValue)
          {
          case InteractionMode::INTERACTIVE:
            return "INTERACTIVE";
          case InteractionMode::NO_VIDEO:
            return "NO_VIDEO";
          case InteractionMode::VIDEO_ONLY:
            return "VIDEO_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InteractionModeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
