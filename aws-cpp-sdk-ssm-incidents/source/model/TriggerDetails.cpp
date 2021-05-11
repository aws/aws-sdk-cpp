/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/TriggerDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

TriggerDetails::TriggerDetails() : 
    m_rawDataHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_triggerArnHasBeenSet(false)
{
}

TriggerDetails::TriggerDetails(JsonView jsonValue) : 
    m_rawDataHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_triggerArnHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerDetails& TriggerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rawData"))
  {
    m_rawData = jsonValue.GetString("rawData");

    m_rawDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerArn"))
  {
    m_triggerArn = jsonValue.GetString("triggerArn");

    m_triggerArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_rawDataHasBeenSet)
  {
   payload.WithString("rawData", m_rawData);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_triggerArnHasBeenSet)
  {
   payload.WithString("triggerArn", m_triggerArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
