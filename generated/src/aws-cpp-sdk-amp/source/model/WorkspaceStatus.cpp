/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/WorkspaceStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

WorkspaceStatus::WorkspaceStatus() : 
    m_statusCode(WorkspaceStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
}

WorkspaceStatus::WorkspaceStatus(JsonView jsonValue) : 
    m_statusCode(WorkspaceStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceStatus& WorkspaceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = WorkspaceStatusCodeMapper::GetWorkspaceStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", WorkspaceStatusCodeMapper::GetNameForWorkspaceStatusCode(m_statusCode));
  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
