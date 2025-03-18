/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/TargetProtectedJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace TargetProtectedJobStatusMapper
      {

        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        TargetProtectedJobStatus GetTargetProtectedJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELLED_HASH)
          {
            return TargetProtectedJobStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetProtectedJobStatus>(hashCode);
          }

          return TargetProtectedJobStatus::NOT_SET;
        }

        Aws::String GetNameForTargetProtectedJobStatus(TargetProtectedJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetProtectedJobStatus::NOT_SET:
            return {};
          case TargetProtectedJobStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetProtectedJobStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
