/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
