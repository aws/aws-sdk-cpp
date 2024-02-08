/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GeneratedTemplateResourceStatus.h>
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
      namespace GeneratedTemplateResourceStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");


        GeneratedTemplateResourceStatus GetGeneratedTemplateResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return GeneratedTemplateResourceStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return GeneratedTemplateResourceStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GeneratedTemplateResourceStatus::FAILED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return GeneratedTemplateResourceStatus::COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedTemplateResourceStatus>(hashCode);
          }

          return GeneratedTemplateResourceStatus::NOT_SET;
        }

        Aws::String GetNameForGeneratedTemplateResourceStatus(GeneratedTemplateResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case GeneratedTemplateResourceStatus::NOT_SET:
            return {};
          case GeneratedTemplateResourceStatus::PENDING:
            return "PENDING";
          case GeneratedTemplateResourceStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case GeneratedTemplateResourceStatus::FAILED:
            return "FAILED";
          case GeneratedTemplateResourceStatus::COMPLETE:
            return "COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedTemplateResourceStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
