/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/TriggerEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace TriggerEventTypeMapper
      {

        static const int DeploymentStart_HASH = HashingUtils::HashString("DeploymentStart");
        static const int DeploymentSuccess_HASH = HashingUtils::HashString("DeploymentSuccess");
        static const int DeploymentFailure_HASH = HashingUtils::HashString("DeploymentFailure");
        static const int DeploymentStop_HASH = HashingUtils::HashString("DeploymentStop");
        static const int DeploymentRollback_HASH = HashingUtils::HashString("DeploymentRollback");
        static const int InstanceStart_HASH = HashingUtils::HashString("InstanceStart");
        static const int InstanceSuccess_HASH = HashingUtils::HashString("InstanceSuccess");
        static const int InstanceFailure_HASH = HashingUtils::HashString("InstanceFailure");


        TriggerEventType GetTriggerEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeploymentStart_HASH)
          {
            return TriggerEventType::DeploymentStart;
          }
          else if (hashCode == DeploymentSuccess_HASH)
          {
            return TriggerEventType::DeploymentSuccess;
          }
          else if (hashCode == DeploymentFailure_HASH)
          {
            return TriggerEventType::DeploymentFailure;
          }
          else if (hashCode == DeploymentStop_HASH)
          {
            return TriggerEventType::DeploymentStop;
          }
          else if (hashCode == DeploymentRollback_HASH)
          {
            return TriggerEventType::DeploymentRollback;
          }
          else if (hashCode == InstanceStart_HASH)
          {
            return TriggerEventType::InstanceStart;
          }
          else if (hashCode == InstanceSuccess_HASH)
          {
            return TriggerEventType::InstanceSuccess;
          }
          else if (hashCode == InstanceFailure_HASH)
          {
            return TriggerEventType::InstanceFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggerEventType>(hashCode);
          }

          return TriggerEventType::NOT_SET;
        }

        Aws::String GetNameForTriggerEventType(TriggerEventType enumValue)
        {
          switch(enumValue)
          {
          case TriggerEventType::DeploymentStart:
            return "DeploymentStart";
          case TriggerEventType::DeploymentSuccess:
            return "DeploymentSuccess";
          case TriggerEventType::DeploymentFailure:
            return "DeploymentFailure";
          case TriggerEventType::DeploymentStop:
            return "DeploymentStop";
          case TriggerEventType::DeploymentRollback:
            return "DeploymentRollback";
          case TriggerEventType::InstanceStart:
            return "InstanceStart";
          case TriggerEventType::InstanceSuccess:
            return "InstanceSuccess";
          case TriggerEventType::InstanceFailure:
            return "InstanceFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TriggerEventTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
