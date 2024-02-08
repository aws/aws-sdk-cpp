/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceScanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ResourceScanStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        ResourceScanStatus GetResourceScanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceScanStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceScanStatus::FAILED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ResourceScanStatus::COMPLETE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ResourceScanStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceScanStatus>(hashCode);
          }

          return ResourceScanStatus::NOT_SET;
        }

        Aws::String GetNameForResourceScanStatus(ResourceScanStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceScanStatus::NOT_SET:
            return {};
          case ResourceScanStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceScanStatus::FAILED:
            return "FAILED";
          case ResourceScanStatus::COMPLETE:
            return "COMPLETE";
          case ResourceScanStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceScanStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
