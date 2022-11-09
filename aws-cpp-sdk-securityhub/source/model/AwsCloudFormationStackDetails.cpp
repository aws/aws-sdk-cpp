/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFormationStackDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudFormationStackDetails::AwsCloudFormationStackDetails() : 
    m_capabilitiesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableRollback(false),
    m_disableRollbackHasBeenSet(false),
    m_driftInformationHasBeenSet(false),
    m_enableTerminationProtection(false),
    m_enableTerminationProtectionHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_notificationArnsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_stackStatusHasBeenSet(false),
    m_stackStatusReasonHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false)
{
}

AwsCloudFormationStackDetails::AwsCloudFormationStackDetails(JsonView jsonValue) : 
    m_capabilitiesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableRollback(false),
    m_disableRollbackHasBeenSet(false),
    m_driftInformationHasBeenSet(false),
    m_enableTerminationProtection(false),
    m_enableTerminationProtectionHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_notificationArnsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_stackStatusHasBeenSet(false),
    m_stackStatusReasonHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFormationStackDetails& AwsCloudFormationStackDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("Capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(capabilitiesJsonList[capabilitiesIndex].AsString());
    }
    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableRollback"))
  {
    m_disableRollback = jsonValue.GetBool("DisableRollback");

    m_disableRollbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DriftInformation"))
  {
    m_driftInformation = jsonValue.GetObject("DriftInformation");

    m_driftInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableTerminationProtection"))
  {
    m_enableTerminationProtection = jsonValue.GetBool("EnableTerminationProtection");

    m_enableTerminationProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationArns"))
  {
    Aws::Utils::Array<JsonView> notificationArnsJsonList = jsonValue.GetArray("NotificationArns");
    for(unsigned notificationArnsIndex = 0; notificationArnsIndex < notificationArnsJsonList.GetLength(); ++notificationArnsIndex)
    {
      m_notificationArns.push_back(notificationArnsJsonList[notificationArnsIndex].AsString());
    }
    m_notificationArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackName"))
  {
    m_stackName = jsonValue.GetString("StackName");

    m_stackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackStatus"))
  {
    m_stackStatus = jsonValue.GetString("StackStatus");

    m_stackStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackStatusReason"))
  {
    m_stackStatusReason = jsonValue.GetString("StackStatusReason");

    m_stackStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutInMinutes"))
  {
    m_timeoutInMinutes = jsonValue.GetInteger("TimeoutInMinutes");

    m_timeoutInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFormationStackDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(m_capabilities[capabilitiesIndex]);
   }
   payload.WithArray("Capabilities", std::move(capabilitiesJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_disableRollbackHasBeenSet)
  {
   payload.WithBool("DisableRollback", m_disableRollback);

  }

  if(m_driftInformationHasBeenSet)
  {
   payload.WithObject("DriftInformation", m_driftInformation.Jsonize());

  }

  if(m_enableTerminationProtectionHasBeenSet)
  {
   payload.WithBool("EnableTerminationProtection", m_enableTerminationProtection);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("LastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_notificationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationArnsJsonList(m_notificationArns.size());
   for(unsigned notificationArnsIndex = 0; notificationArnsIndex < notificationArnsJsonList.GetLength(); ++notificationArnsIndex)
   {
     notificationArnsJsonList[notificationArnsIndex].AsString(m_notificationArns[notificationArnsIndex]);
   }
   payload.WithArray("NotificationArns", std::move(notificationArnsJsonList));

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_stackStatusHasBeenSet)
  {
   payload.WithString("StackStatus", m_stackStatus);

  }

  if(m_stackStatusReasonHasBeenSet)
  {
   payload.WithString("StackStatusReason", m_stackStatusReason);

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("TimeoutInMinutes", m_timeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
