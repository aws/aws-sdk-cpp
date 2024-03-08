/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/TargetProtectedQueryStatus.h>
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
      namespace TargetProtectedQueryStatusMapper
      {

        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        TargetProtectedQueryStatus GetTargetProtectedQueryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELLED_HASH)
          {
            return TargetProtectedQueryStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetProtectedQueryStatus>(hashCode);
          }

          return TargetProtectedQueryStatus::NOT_SET;
        }

        Aws::String GetNameForTargetProtectedQueryStatus(TargetProtectedQueryStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetProtectedQueryStatus::NOT_SET:
            return {};
          case TargetProtectedQueryStatus::CANCELLED:
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

      } // namespace TargetProtectedQueryStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
