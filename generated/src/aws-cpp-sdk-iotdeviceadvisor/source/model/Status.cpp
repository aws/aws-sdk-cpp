/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTDeviceAdvisor
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int PASS_WITH_WARNINGS_HASH = HashingUtils::HashString("PASS_WITH_WARNINGS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return Status::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return Status::FAIL;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return Status::CANCELED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return Status::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return Status::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return Status::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return Status::STOPPED;
          }
          else if (hashCode == PASS_WITH_WARNINGS_HASH)
          {
            return Status::PASS_WITH_WARNINGS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return Status::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::PASS:
            return "PASS";
          case Status::FAIL:
            return "FAIL";
          case Status::CANCELED:
            return "CANCELED";
          case Status::PENDING:
            return "PENDING";
          case Status::RUNNING:
            return "RUNNING";
          case Status::STOPPING:
            return "STOPPING";
          case Status::STOPPED:
            return "STOPPED";
          case Status::PASS_WITH_WARNINGS:
            return "PASS_WITH_WARNINGS";
          case Status::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace IoTDeviceAdvisor
} // namespace Aws
