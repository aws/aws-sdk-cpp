/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/AcceleratorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace AcceleratorStatusMapper
      {

        static const int DEPLOYED_HASH = HashingUtils::HashString("DEPLOYED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        AcceleratorStatus GetAcceleratorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOYED_HASH)
          {
            return AcceleratorStatus::DEPLOYED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AcceleratorStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceleratorStatus>(hashCode);
          }

          return AcceleratorStatus::NOT_SET;
        }

        Aws::String GetNameForAcceleratorStatus(AcceleratorStatus enumValue)
        {
          switch(enumValue)
          {
          case AcceleratorStatus::DEPLOYED:
            return "DEPLOYED";
          case AcceleratorStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceleratorStatusMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
