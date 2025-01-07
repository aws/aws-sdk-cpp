/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GluePropertiesOutput.h>
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

GluePropertiesOutput::GluePropertiesOutput() : 
    m_errorMessageHasBeenSet(false),
    m_status(ConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

GluePropertiesOutput::GluePropertiesOutput(JsonView jsonValue)
  : GluePropertiesOutput()
{
  *this = jsonValue;
}

GluePropertiesOutput& GluePropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue GluePropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
