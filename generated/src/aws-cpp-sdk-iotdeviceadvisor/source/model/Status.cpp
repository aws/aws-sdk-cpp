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

        static constexpr uint32_t PASS_HASH = ConstExprHashingUtils::HashString("PASS");
        static constexpr uint32_t FAIL_HASH = ConstExprHashingUtils::HashString("FAIL");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t PASS_WITH_WARNINGS_HASH = ConstExprHashingUtils::HashString("PASS_WITH_WARNINGS");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        Status GetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
