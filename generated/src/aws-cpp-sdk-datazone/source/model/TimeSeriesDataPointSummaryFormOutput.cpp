/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/TimeSeriesDataPointSummaryFormOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

TimeSeriesDataPointSummaryFormOutput::TimeSeriesDataPointSummaryFormOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeSeriesDataPointSummaryFormOutput& TimeSeriesDataPointSummaryFormOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentSummary"))
  {
    m_contentSummary = jsonValue.GetString("contentSummary");
    m_contentSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formName"))
  {
    m_formName = jsonValue.GetString("formName");
    m_formNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeIdentifier"))
  {
    m_typeIdentifier = jsonValue.GetString("typeIdentifier");
    m_typeIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");
    m_typeRevisionHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeSeriesDataPointSummaryFormOutput::Jsonize() const
{
  JsonValue payload;

  if(m_contentSummaryHasBeenSet)
  {
   payload.WithString("contentSummary", m_contentSummary);

  }

  if(m_formNameHasBeenSet)
  {
   payload.WithString("formName", m_formName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_typeIdentifierHasBeenSet)
  {
   payload.WithString("typeIdentifier", m_typeIdentifier);

  }

  if(m_typeRevisionHasBeenSet)
  {
   payload.WithString("typeRevision", m_typeRevision);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
