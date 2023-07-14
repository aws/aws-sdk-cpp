/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/LogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace LogTypeMapper
      {

        static const int api_HASH = HashingUtils::HashString("api");
        static const int audit_HASH = HashingUtils::HashString("audit");
        static const int authenticator_HASH = HashingUtils::HashString("authenticator");
        static const int controllerManager_HASH = HashingUtils::HashString("controllerManager");
        static const int scheduler_HASH = HashingUtils::HashString("scheduler");


        LogType GetLogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == api_HASH)
          {
            return LogType::api;
          }
          else if (hashCode == audit_HASH)
          {
            return LogType::audit;
          }
          else if (hashCode == authenticator_HASH)
          {
            return LogType::authenticator;
          }
          else if (hashCode == controllerManager_HASH)
          {
            return LogType::controllerManager;
          }
          else if (hashCode == scheduler_HASH)
          {
            return LogType::scheduler;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogType>(hashCode);
          }

          return LogType::NOT_SET;
        }

        Aws::String GetNameForLogType(LogType enumValue)
        {
          switch(enumValue)
          {
          case LogType::api:
            return "api";
          case LogType::audit:
            return "audit";
          case LogType::authenticator:
            return "authenticator";
          case LogType::controllerManager:
            return "controllerManager";
          case LogType::scheduler:
            return "scheduler";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
