﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorStatus.h>
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
      namespace StackRefactorStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        StackRefactorStatus GetStackRefactorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StackRefactorStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return StackRefactorStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StackRefactorStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StackRefactorStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return StackRefactorStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StackRefactorStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackRefactorStatus>(hashCode);
          }

          return StackRefactorStatus::NOT_SET;
        }

        Aws::String GetNameForStackRefactorStatus(StackRefactorStatus enumValue)
        {
          switch(enumValue)
          {
          case StackRefactorStatus::NOT_SET:
            return {};
          case StackRefactorStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StackRefactorStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case StackRefactorStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case StackRefactorStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StackRefactorStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case StackRefactorStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackRefactorStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
