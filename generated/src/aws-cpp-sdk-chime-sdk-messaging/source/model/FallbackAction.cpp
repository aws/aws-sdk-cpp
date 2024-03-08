/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/FallbackAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace FallbackActionMapper
      {

        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int ABORT_HASH = HashingUtils::HashString("ABORT");


        FallbackAction GetFallbackActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_HASH)
          {
            return FallbackAction::CONTINUE;
          }
          else if (hashCode == ABORT_HASH)
          {
            return FallbackAction::ABORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FallbackAction>(hashCode);
          }

          return FallbackAction::NOT_SET;
        }

        Aws::String GetNameForFallbackAction(FallbackAction enumValue)
        {
          switch(enumValue)
          {
          case FallbackAction::NOT_SET:
            return {};
          case FallbackAction::CONTINUE:
            return "CONTINUE";
          case FallbackAction::ABORT:
            return "ABORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FallbackActionMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
