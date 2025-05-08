/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/InboundIntegration.h>
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

InboundIntegration::InboundIntegration(JsonView jsonValue)
{
  *this = jsonValue;
}

InboundIntegration& InboundIntegration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetArn"))
  {
    m_targetArn = jsonValue.GetString("TargetArn");
    m_targetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntegrationArn"))
  {
    m_integrationArn = jsonValue.GetString("IntegrationArn");
    m_integrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntegrationConfig"))
  {
    m_integrationConfig = jsonValue.GetObject("IntegrationConfig");
    m_integrationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundIntegration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("IntegrationArn", m_integrationArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IntegrationStatusMapper::GetNameForIntegrationStatus(m_status));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_integrationConfigHasBeenSet)
  {
   payload.WithObject("IntegrationConfig", m_integrationConfig.Jsonize());

  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
