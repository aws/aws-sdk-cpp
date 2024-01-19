/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

FleetStatus::FleetStatus() : 
    m_statusCode(FleetStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_context(FleetContextCode::NOT_SET),
    m_contextHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

FleetStatus::FleetStatus(JsonView jsonValue) : 
    m_statusCode(FleetStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_context(FleetContextCode::NOT_SET),
    m_contextHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

FleetStatus& FleetStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = FleetStatusCodeMapper::GetFleetStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("context"))
  {
    m_context = FleetContextCodeMapper::GetFleetContextCodeForName(jsonValue.GetString("context"));

    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", FleetStatusCodeMapper::GetNameForFleetStatusCode(m_statusCode));
  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", FleetContextCodeMapper::GetNameForFleetContextCode(m_context));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
