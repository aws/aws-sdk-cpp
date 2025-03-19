/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/TimeSeriesDataPointFormOutput.h>
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

TimeSeriesDataPointFormOutput::TimeSeriesDataPointFormOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeSeriesDataPointFormOutput& TimeSeriesDataPointFormOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
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

JsonValue TimeSeriesDataPointFormOutput::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

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
