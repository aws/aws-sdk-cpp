/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationVersionSummary::ApplicationVersionSummary() : 
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false)
{
}

ApplicationVersionSummary::ApplicationVersionSummary(JsonView jsonValue) : 
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationVersionSummary& ApplicationVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

    m_applicationVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationStatus"))
  {
    m_applicationStatus = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("ApplicationStatus"));

    m_applicationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationVersionIdHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionId", m_applicationVersionId);

  }

  if(m_applicationStatusHasBeenSet)
  {
   payload.WithString("ApplicationStatus", ApplicationStatusMapper::GetNameForApplicationStatus(m_applicationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
