/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/LifecyclePolicyPreviewStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace LifecyclePolicyPreviewStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LifecyclePolicyPreviewStatus GetLifecyclePolicyPreviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return LifecyclePolicyPreviewStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return LifecyclePolicyPreviewStatus::COMPLETE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return LifecyclePolicyPreviewStatus::EXPIRED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LifecyclePolicyPreviewStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyPreviewStatus>(hashCode);
          }

          return LifecyclePolicyPreviewStatus::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyPreviewStatus(LifecyclePolicyPreviewStatus enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyPreviewStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LifecyclePolicyPreviewStatus::COMPLETE:
            return "COMPLETE";
          case LifecyclePolicyPreviewStatus::EXPIRED:
            return "EXPIRED";
          case LifecyclePolicyPreviewStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyPreviewStatusMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
