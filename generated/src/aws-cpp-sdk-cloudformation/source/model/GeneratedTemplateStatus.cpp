/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GeneratedTemplateStatus.h>
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
      namespace GeneratedTemplateStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int UPDATE_PENDING_HASH = HashingUtils::HashString("UPDATE_PENDING");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");


        GeneratedTemplateStatus GetGeneratedTemplateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return GeneratedTemplateStatus::CREATE_PENDING;
          }
          else if (hashCode == UPDATE_PENDING_HASH)
          {
            return GeneratedTemplateStatus::UPDATE_PENDING;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return GeneratedTemplateStatus::DELETE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return GeneratedTemplateStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return GeneratedTemplateStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return GeneratedTemplateStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GeneratedTemplateStatus::FAILED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return GeneratedTemplateStatus::COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedTemplateStatus>(hashCode);
          }

          return GeneratedTemplateStatus::NOT_SET;
        }

        Aws::String GetNameForGeneratedTemplateStatus(GeneratedTemplateStatus enumValue)
        {
          switch(enumValue)
          {
          case GeneratedTemplateStatus::NOT_SET:
            return {};
          case GeneratedTemplateStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case GeneratedTemplateStatus::UPDATE_PENDING:
            return "UPDATE_PENDING";
          case GeneratedTemplateStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case GeneratedTemplateStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case GeneratedTemplateStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case GeneratedTemplateStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case GeneratedTemplateStatus::FAILED:
            return "FAILED";
          case GeneratedTemplateStatus::COMPLETE:
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

      } // namespace GeneratedTemplateStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
