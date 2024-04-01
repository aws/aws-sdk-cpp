/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionLifecycleTargetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace SessionLifecycleTargetStatusMapper
      {

        static const int ENDED_HASH = HashingUtils::HashString("ENDED");


        SessionLifecycleTargetStatus GetSessionLifecycleTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENDED_HASH)
          {
            return SessionLifecycleTargetStatus::ENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionLifecycleTargetStatus>(hashCode);
          }

          return SessionLifecycleTargetStatus::NOT_SET;
        }

        Aws::String GetNameForSessionLifecycleTargetStatus(SessionLifecycleTargetStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionLifecycleTargetStatus::NOT_SET:
            return {};
          case SessionLifecycleTargetStatus::ENDED:
            return "ENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionLifecycleTargetStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
