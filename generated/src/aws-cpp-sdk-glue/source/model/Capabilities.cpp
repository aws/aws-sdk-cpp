/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Capabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Capabilities::Capabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

Capabilities& Capabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SupportedAuthenticationTypes"))
  {
    Aws::Utils::Array<JsonView> supportedAuthenticationTypesJsonList = jsonValue.GetArray("SupportedAuthenticationTypes");
    for(unsigned supportedAuthenticationTypesIndex = 0; supportedAuthenticationTypesIndex < supportedAuthenticationTypesJsonList.GetLength(); ++supportedAuthenticationTypesIndex)
    {
      m_supportedAuthenticationTypes.push_back(AuthenticationTypeMapper::GetAuthenticationTypeForName(supportedAuthenticationTypesJsonList[supportedAuthenticationTypesIndex].AsString()));
    }
    m_supportedAuthenticationTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedDataOperations"))
  {
    Aws::Utils::Array<JsonView> supportedDataOperationsJsonList = jsonValue.GetArray("SupportedDataOperations");
    for(unsigned supportedDataOperationsIndex = 0; supportedDataOperationsIndex < supportedDataOperationsJsonList.GetLength(); ++supportedDataOperationsIndex)
    {
      m_supportedDataOperations.push_back(DataOperationMapper::GetDataOperationForName(supportedDataOperationsJsonList[supportedDataOperationsIndex].AsString()));
    }
    m_supportedDataOperationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedComputeEnvironments"))
  {
    Aws::Utils::Array<JsonView> supportedComputeEnvironmentsJsonList = jsonValue.GetArray("SupportedComputeEnvironments");
    for(unsigned supportedComputeEnvironmentsIndex = 0; supportedComputeEnvironmentsIndex < supportedComputeEnvironmentsJsonList.GetLength(); ++supportedComputeEnvironmentsIndex)
    {
      m_supportedComputeEnvironments.push_back(ComputeEnvironmentMapper::GetComputeEnvironmentForName(supportedComputeEnvironmentsJsonList[supportedComputeEnvironmentsIndex].AsString()));
    }
    m_supportedComputeEnvironmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue Capabilities::Jsonize() const
{
  JsonValue payload;

  if(m_supportedAuthenticationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedAuthenticationTypesJsonList(m_supportedAuthenticationTypes.size());
   for(unsigned supportedAuthenticationTypesIndex = 0; supportedAuthenticationTypesIndex < supportedAuthenticationTypesJsonList.GetLength(); ++supportedAuthenticationTypesIndex)
   {
     supportedAuthenticationTypesJsonList[supportedAuthenticationTypesIndex].AsString(AuthenticationTypeMapper::GetNameForAuthenticationType(m_supportedAuthenticationTypes[supportedAuthenticationTypesIndex]));
   }
   payload.WithArray("SupportedAuthenticationTypes", std::move(supportedAuthenticationTypesJsonList));

  }

  if(m_supportedDataOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedDataOperationsJsonList(m_supportedDataOperations.size());
   for(unsigned supportedDataOperationsIndex = 0; supportedDataOperationsIndex < supportedDataOperationsJsonList.GetLength(); ++supportedDataOperationsIndex)
   {
     supportedDataOperationsJsonList[supportedDataOperationsIndex].AsString(DataOperationMapper::GetNameForDataOperation(m_supportedDataOperations[supportedDataOperationsIndex]));
   }
   payload.WithArray("SupportedDataOperations", std::move(supportedDataOperationsJsonList));

  }

  if(m_supportedComputeEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedComputeEnvironmentsJsonList(m_supportedComputeEnvironments.size());
   for(unsigned supportedComputeEnvironmentsIndex = 0; supportedComputeEnvironmentsIndex < supportedComputeEnvironmentsJsonList.GetLength(); ++supportedComputeEnvironmentsIndex)
   {
     supportedComputeEnvironmentsJsonList[supportedComputeEnvironmentsIndex].AsString(ComputeEnvironmentMapper::GetNameForComputeEnvironment(m_supportedComputeEnvironments[supportedComputeEnvironmentsIndex]));
   }
   payload.WithArray("SupportedComputeEnvironments", std::move(supportedComputeEnvironmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
