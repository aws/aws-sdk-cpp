/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AmazonCodeGuruProfilerIntegration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

AmazonCodeGuruProfilerIntegration::AmazonCodeGuruProfilerIntegration() : 
    m_status(EventSourceOptInStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AmazonCodeGuruProfilerIntegration::AmazonCodeGuruProfilerIntegration(JsonView jsonValue) : 
    m_status(EventSourceOptInStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonCodeGuruProfilerIntegration& AmazonCodeGuruProfilerIntegration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EventSourceOptInStatusMapper::GetEventSourceOptInStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AmazonCodeGuruProfilerIntegration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EventSourceOptInStatusMapper::GetNameForEventSourceOptInStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
