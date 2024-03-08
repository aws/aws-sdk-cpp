/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/BaselineOperationStatus.h>
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
      namespace BaselineOperationStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        BaselineOperationStatus GetBaselineOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return BaselineOperationStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BaselineOperationStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return BaselineOperationStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BaselineOperationStatus>(hashCode);
          }

          return BaselineOperationStatus::NOT_SET;
        }

        Aws::String GetNameForBaselineOperationStatus(BaselineOperationStatus enumValue)
        {
          switch(enumValue)
          {
          case BaselineOperationStatus::NOT_SET:
            return {};
          case BaselineOperationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case BaselineOperationStatus::FAILED:
            return "FAILED";
          case BaselineOperationStatus::IN_PROGRESS:
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

      } // namespace BaselineOperationStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
