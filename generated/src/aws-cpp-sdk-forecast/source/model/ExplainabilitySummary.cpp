/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ExplainabilitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

ExplainabilitySummary::ExplainabilitySummary() : 
    m_explainabilityArnHasBeenSet(false),
    m_explainabilityNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_explainabilityConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

ExplainabilitySummary::ExplainabilitySummary(JsonView jsonValue) : 
    m_explainabilityArnHasBeenSet(false),
    m_explainabilityNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_explainabilityConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExplainabilitySummary& ExplainabilitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExplainabilityArn"))
  {
    m_explainabilityArn = jsonValue.GetString("ExplainabilityArn");

    m_explainabilityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplainabilityName"))
  {
    m_explainabilityName = jsonValue.GetString("ExplainabilityName");

    m_explainabilityNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplainabilityConfig"))
  {
    m_explainabilityConfig = jsonValue.GetObject("ExplainabilityConfig");

    m_explainabilityConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExplainabilitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_explainabilityArnHasBeenSet)
  {
   payload.WithString("ExplainabilityArn", m_explainabilityArn);

  }

  if(m_explainabilityNameHasBeenSet)
  {
   payload.WithString("ExplainabilityName", m_explainabilityName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_explainabilityConfigHasBeenSet)
  {
   payload.WithObject("ExplainabilityConfig", m_explainabilityConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
