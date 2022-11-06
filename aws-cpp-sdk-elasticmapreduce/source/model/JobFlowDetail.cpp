/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/JobFlowDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

JobFlowDetail::JobFlowDetail() : 
    m_jobFlowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_logEncryptionKmsKeyIdHasBeenSet(false),
    m_amiVersionHasBeenSet(false),
    m_executionStatusDetailHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_bootstrapActionsHasBeenSet(false),
    m_supportedProductsHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_jobFlowRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_autoScalingRoleHasBeenSet(false),
    m_scaleDownBehavior(ScaleDownBehavior::NOT_SET),
    m_scaleDownBehaviorHasBeenSet(false)
{
}

JobFlowDetail::JobFlowDetail(JsonView jsonValue) : 
    m_jobFlowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_logEncryptionKmsKeyIdHasBeenSet(false),
    m_amiVersionHasBeenSet(false),
    m_executionStatusDetailHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_bootstrapActionsHasBeenSet(false),
    m_supportedProductsHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_jobFlowRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_autoScalingRoleHasBeenSet(false),
    m_scaleDownBehavior(ScaleDownBehavior::NOT_SET),
    m_scaleDownBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

JobFlowDetail& JobFlowDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobFlowId"))
  {
    m_jobFlowId = jsonValue.GetString("JobFlowId");

    m_jobFlowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

    m_logUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogEncryptionKmsKeyId"))
  {
    m_logEncryptionKmsKeyId = jsonValue.GetString("LogEncryptionKmsKeyId");

    m_logEncryptionKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmiVersion"))
  {
    m_amiVersion = jsonValue.GetString("AmiVersion");

    m_amiVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionStatusDetail"))
  {
    m_executionStatusDetail = jsonValue.GetObject("ExecutionStatusDetail");

    m_executionStatusDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Instances"))
  {
    m_instances = jsonValue.GetObject("Instances");

    m_instancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BootstrapActions"))
  {
    Aws::Utils::Array<JsonView> bootstrapActionsJsonList = jsonValue.GetArray("BootstrapActions");
    for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
    {
      m_bootstrapActions.push_back(bootstrapActionsJsonList[bootstrapActionsIndex].AsObject());
    }
    m_bootstrapActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedProducts"))
  {
    Aws::Utils::Array<JsonView> supportedProductsJsonList = jsonValue.GetArray("SupportedProducts");
    for(unsigned supportedProductsIndex = 0; supportedProductsIndex < supportedProductsJsonList.GetLength(); ++supportedProductsIndex)
    {
      m_supportedProducts.push_back(supportedProductsJsonList[supportedProductsIndex].AsString());
    }
    m_supportedProductsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibleToAllUsers"))
  {
    m_visibleToAllUsers = jsonValue.GetBool("VisibleToAllUsers");

    m_visibleToAllUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobFlowRole"))
  {
    m_jobFlowRole = jsonValue.GetString("JobFlowRole");

    m_jobFlowRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingRole"))
  {
    m_autoScalingRole = jsonValue.GetString("AutoScalingRole");

    m_autoScalingRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScaleDownBehavior"))
  {
    m_scaleDownBehavior = ScaleDownBehaviorMapper::GetScaleDownBehaviorForName(jsonValue.GetString("ScaleDownBehavior"));

    m_scaleDownBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue JobFlowDetail::Jsonize() const
{
  JsonValue payload;

  if(m_jobFlowIdHasBeenSet)
  {
   payload.WithString("JobFlowId", m_jobFlowId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("LogUri", m_logUri);

  }

  if(m_logEncryptionKmsKeyIdHasBeenSet)
  {
   payload.WithString("LogEncryptionKmsKeyId", m_logEncryptionKmsKeyId);

  }

  if(m_amiVersionHasBeenSet)
  {
   payload.WithString("AmiVersion", m_amiVersion);

  }

  if(m_executionStatusDetailHasBeenSet)
  {
   payload.WithObject("ExecutionStatusDetail", m_executionStatusDetail.Jsonize());

  }

  if(m_instancesHasBeenSet)
  {
   payload.WithObject("Instances", m_instances.Jsonize());

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_bootstrapActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bootstrapActionsJsonList(m_bootstrapActions.size());
   for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
   {
     bootstrapActionsJsonList[bootstrapActionsIndex].AsObject(m_bootstrapActions[bootstrapActionsIndex].Jsonize());
   }
   payload.WithArray("BootstrapActions", std::move(bootstrapActionsJsonList));

  }

  if(m_supportedProductsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedProductsJsonList(m_supportedProducts.size());
   for(unsigned supportedProductsIndex = 0; supportedProductsIndex < supportedProductsJsonList.GetLength(); ++supportedProductsIndex)
   {
     supportedProductsJsonList[supportedProductsIndex].AsString(m_supportedProducts[supportedProductsIndex]);
   }
   payload.WithArray("SupportedProducts", std::move(supportedProductsJsonList));

  }

  if(m_visibleToAllUsersHasBeenSet)
  {
   payload.WithBool("VisibleToAllUsers", m_visibleToAllUsers);

  }

  if(m_jobFlowRoleHasBeenSet)
  {
   payload.WithString("JobFlowRole", m_jobFlowRole);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_autoScalingRoleHasBeenSet)
  {
   payload.WithString("AutoScalingRole", m_autoScalingRole);

  }

  if(m_scaleDownBehaviorHasBeenSet)
  {
   payload.WithString("ScaleDownBehavior", ScaleDownBehaviorMapper::GetNameForScaleDownBehavior(m_scaleDownBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
