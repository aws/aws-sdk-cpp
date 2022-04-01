/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ApplicationVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

ApplicationVersionSummary::ApplicationVersionSummary() : 
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_status(ApplicationVersionLifecycle::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

ApplicationVersionSummary::ApplicationVersionSummary(JsonView jsonValue) : 
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_status(ApplicationVersionLifecycle::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationVersionSummary& ApplicationVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationVersion"))
  {
    m_applicationVersion = jsonValue.GetInteger("applicationVersion");

    m_applicationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ApplicationVersionLifecycleMapper::GetApplicationVersionLifecycleForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithInteger("applicationVersion", m_applicationVersion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ApplicationVersionLifecycleMapper::GetNameForApplicationVersionLifecycle(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
