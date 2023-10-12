/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/DeletionTaskStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace DeletionTaskStatusTypeMapper
      {

        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");


        DeletionTaskStatusType GetDeletionTaskStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return DeletionTaskStatusType::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DeletionTaskStatusType::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeletionTaskStatusType::FAILED;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return DeletionTaskStatusType::NOT_STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionTaskStatusType>(hashCode);
          }

          return DeletionTaskStatusType::NOT_SET;
        }

        Aws::String GetNameForDeletionTaskStatusType(DeletionTaskStatusType enumValue)
        {
          switch(enumValue)
          {
          case DeletionTaskStatusType::NOT_SET:
            return {};
          case DeletionTaskStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case DeletionTaskStatusType::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeletionTaskStatusType::FAILED:
            return "FAILED";
          case DeletionTaskStatusType::NOT_STARTED:
            return "NOT_STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionTaskStatusTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
