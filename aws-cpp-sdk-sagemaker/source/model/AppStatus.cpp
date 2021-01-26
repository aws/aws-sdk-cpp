/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppStatusMapper
      {

        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Pending_HASH = HashingUtils::HashString("Pending");


        AppStatus GetAppStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deleted_HASH)
          {
            return AppStatus::Deleted;
          }
          else if (hashCode == Deleting_HASH)
          {
            return AppStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return AppStatus::Failed;
          }
          else if (hashCode == InService_HASH)
          {
            return AppStatus::InService;
          }
          else if (hashCode == Pending_HASH)
          {
            return AppStatus::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppStatus>(hashCode);
          }

          return AppStatus::NOT_SET;
        }

        Aws::String GetNameForAppStatus(AppStatus enumValue)
        {
          switch(enumValue)
          {
          case AppStatus::Deleted:
            return "Deleted";
          case AppStatus::Deleting:
            return "Deleting";
          case AppStatus::Failed:
            return "Failed";
          case AppStatus::InService:
            return "InService";
          case AppStatus::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
