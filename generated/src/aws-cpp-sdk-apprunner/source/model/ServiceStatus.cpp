/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ServiceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace ServiceStatusMapper
      {

        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OPERATION_IN_PROGRESS");


        ServiceStatus GetServiceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_FAILED_HASH)
          {
            return ServiceStatus::CREATE_FAILED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ServiceStatus::RUNNING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ServiceStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ServiceStatus::DELETE_FAILED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return ServiceStatus::PAUSED;
          }
          else if (hashCode == OPERATION_IN_PROGRESS_HASH)
          {
            return ServiceStatus::OPERATION_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceStatus>(hashCode);
          }

          return ServiceStatus::NOT_SET;
        }

        Aws::String GetNameForServiceStatus(ServiceStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceStatus::NOT_SET:
            return {};
          case ServiceStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ServiceStatus::RUNNING:
            return "RUNNING";
          case ServiceStatus::DELETED:
            return "DELETED";
          case ServiceStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ServiceStatus::PAUSED:
            return "PAUSED";
          case ServiceStatus::OPERATION_IN_PROGRESS:
            return "OPERATION_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
