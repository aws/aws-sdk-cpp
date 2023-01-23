/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ExplainabilityExportSummary.h>
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

ExplainabilityExportSummary::ExplainabilityExportSummary() : 
    m_explainabilityExportArnHasBeenSet(false),
    m_explainabilityExportNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

ExplainabilityExportSummary::ExplainabilityExportSummary(JsonView jsonValue) : 
    m_explainabilityExportArnHasBeenSet(false),
    m_explainabilityExportNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExplainabilityExportSummary& ExplainabilityExportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExplainabilityExportArn"))
  {
    m_explainabilityExportArn = jsonValue.GetString("ExplainabilityExportArn");

    m_explainabilityExportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplainabilityExportName"))
  {
    m_explainabilityExportName = jsonValue.GetString("ExplainabilityExportName");

    m_explainabilityExportNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

    m_destinationHasBeenSet = true;
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

JsonValue ExplainabilityExportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_explainabilityExportArnHasBeenSet)
  {
   payload.WithString("ExplainabilityExportArn", m_explainabilityExportArn);

  }

  if(m_explainabilityExportNameHasBeenSet)
  {
   payload.WithString("ExplainabilityExportName", m_explainabilityExportName);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

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
