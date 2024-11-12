/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ListComputeInputStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ListComputeInputStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");


        ListComputeInputStatus GetListComputeInputStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ListComputeInputStatus::ACTIVE;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return ListComputeInputStatus::IMPAIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListComputeInputStatus>(hashCode);
          }

          return ListComputeInputStatus::NOT_SET;
        }

        Aws::String GetNameForListComputeInputStatus(ListComputeInputStatus enumValue)
        {
          switch(enumValue)
          {
          case ListComputeInputStatus::NOT_SET:
            return {};
          case ListComputeInputStatus::ACTIVE:
            return "ACTIVE";
          case ListComputeInputStatus::IMPAIRED:
            return "IMPAIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListComputeInputStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
