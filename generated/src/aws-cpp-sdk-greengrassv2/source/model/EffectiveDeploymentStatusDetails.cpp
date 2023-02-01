/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/EffectiveDeploymentStatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

EffectiveDeploymentStatusDetails::EffectiveDeploymentStatusDetails() : 
    m_errorStackHasBeenSet(false),
    m_errorTypesHasBeenSet(false)
{
}

EffectiveDeploymentStatusDetails::EffectiveDeploymentStatusDetails(JsonView jsonValue) : 
    m_errorStackHasBeenSet(false),
    m_errorTypesHasBeenSet(false)
{
  *this = jsonValue;
}

EffectiveDeploymentStatusDetails& EffectiveDeploymentStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorStack"))
  {
    Aws::Utils::Array<JsonView> errorStackJsonList = jsonValue.GetArray("errorStack");
    for(unsigned errorStackIndex = 0; errorStackIndex < errorStackJsonList.GetLength(); ++errorStackIndex)
    {
      m_errorStack.push_back(errorStackJsonList[errorStackIndex].AsString());
    }
    m_errorStackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorTypes"))
  {
    Aws::Utils::Array<JsonView> errorTypesJsonList = jsonValue.GetArray("errorTypes");
    for(unsigned errorTypesIndex = 0; errorTypesIndex < errorTypesJsonList.GetLength(); ++errorTypesIndex)
    {
      m_errorTypes.push_back(errorTypesJsonList[errorTypesIndex].AsString());
    }
    m_errorTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectiveDeploymentStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorStackHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorStackJsonList(m_errorStack.size());
   for(unsigned errorStackIndex = 0; errorStackIndex < errorStackJsonList.GetLength(); ++errorStackIndex)
   {
     errorStackJsonList[errorStackIndex].AsString(m_errorStack[errorStackIndex]);
   }
   payload.WithArray("errorStack", std::move(errorStackJsonList));

  }

  if(m_errorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorTypesJsonList(m_errorTypes.size());
   for(unsigned errorTypesIndex = 0; errorTypesIndex < errorTypesJsonList.GetLength(); ++errorTypesIndex)
   {
     errorTypesJsonList[errorTypesIndex].AsString(m_errorTypes[errorTypesIndex]);
   }
   payload.WithArray("errorTypes", std::move(errorTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
