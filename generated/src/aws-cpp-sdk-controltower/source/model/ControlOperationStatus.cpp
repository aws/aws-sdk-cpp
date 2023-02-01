/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ControlOperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlTower
  {
    namespace Model
    {
      namespace ControlOperationStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        ControlOperationStatus GetControlOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return ControlOperationStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ControlOperationStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ControlOperationStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlOperationStatus>(hashCode);
          }

          return ControlOperationStatus::NOT_SET;
        }

        Aws::String GetNameForControlOperationStatus(ControlOperationStatus enumValue)
        {
          switch(enumValue)
          {
          case ControlOperationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ControlOperationStatus::FAILED:
            return "FAILED";
          case ControlOperationStatus::IN_PROGRESS:
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

      } // namespace ControlOperationStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
