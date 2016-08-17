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
    m_amiVersionHasBeenSet(false),
    m_executionStatusDetailHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_bootstrapActionsHasBeenSet(false),
    m_supportedProductsHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_jobFlowRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false)
{
}

JobFlowDetail::JobFlowDetail(const JsonValue& jsonValue) : 
    m_jobFlowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_amiVersionHasBeenSet(false),
    m_executionStatusDetailHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_bootstrapActionsHasBeenSet(false),
    m_supportedProductsHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_jobFlowRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false)
{
  *this = jsonValue;
}

JobFlowDetail& JobFlowDetail::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BootstrapActions"))
  {
    Array<JsonValue> bootstrapActionsJsonList = jsonValue.GetArray("BootstrapActions");
    for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
    {
      m_bootstrapActions.push_back(bootstrapActionsJsonList[bootstrapActionsIndex].AsObject());
    }
    m_bootstrapActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedProducts"))
  {
    Array<JsonValue> supportedProductsJsonList = jsonValue.GetArray("SupportedProducts");
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
   Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_bootstrapActionsHasBeenSet)
  {
   Array<JsonValue> bootstrapActionsJsonList(m_bootstrapActions.size());
   for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
   {
     bootstrapActionsJsonList[bootstrapActionsIndex].AsObject(m_bootstrapActions[bootstrapActionsIndex].Jsonize());
   }
   payload.WithArray("BootstrapActions", std::move(bootstrapActionsJsonList));

  }

  if(m_supportedProductsHasBeenSet)
  {
   Array<JsonValue> supportedProductsJsonList(m_supportedProducts.size());
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

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws