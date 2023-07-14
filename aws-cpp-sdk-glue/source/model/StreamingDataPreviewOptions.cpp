/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StreamingDataPreviewOptions.h>
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

StreamingDataPreviewOptions::StreamingDataPreviewOptions() : 
    m_pollingTime(0),
    m_pollingTimeHasBeenSet(false),
    m_recordPollingLimit(0),
    m_recordPollingLimitHasBeenSet(false)
{
}

StreamingDataPreviewOptions::StreamingDataPreviewOptions(JsonView jsonValue) : 
    m_pollingTime(0),
    m_pollingTimeHasBeenSet(false),
    m_recordPollingLimit(0),
    m_recordPollingLimitHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingDataPreviewOptions& StreamingDataPreviewOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PollingTime"))
  {
    m_pollingTime = jsonValue.GetInt64("PollingTime");

    m_pollingTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordPollingLimit"))
  {
    m_recordPollingLimit = jsonValue.GetInt64("RecordPollingLimit");

    m_recordPollingLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingDataPreviewOptions::Jsonize() const
{
  JsonValue payload;

  if(m_pollingTimeHasBeenSet)
  {
   payload.WithInt64("PollingTime", m_pollingTime);

  }

  if(m_recordPollingLimitHasBeenSet)
  {
   payload.WithInt64("RecordPollingLimit", m_recordPollingLimit);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
