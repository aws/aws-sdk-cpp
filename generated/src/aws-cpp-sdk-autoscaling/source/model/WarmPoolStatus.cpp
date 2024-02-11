/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/WarmPoolStatus.h>
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
      namespace WarmPoolStatusMapper
      {

        static const int PendingDelete_HASH = HashingUtils::HashString("PendingDelete");


        WarmPoolStatus GetWarmPoolStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingDelete_HASH)
          {
            return WarmPoolStatus::PendingDelete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WarmPoolStatus>(hashCode);
          }

          return WarmPoolStatus::NOT_SET;
        }

        Aws::String GetNameForWarmPoolStatus(WarmPoolStatus enumValue)
        {
          switch(enumValue)
          {
          case WarmPoolStatus::NOT_SET:
            return {};
          case WarmPoolStatus::PendingDelete:
            return "PendingDelete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WarmPoolStatusMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
