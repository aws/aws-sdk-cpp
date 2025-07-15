/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/S3PropertiesOutput.h>
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

S3PropertiesOutput::S3PropertiesOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

S3PropertiesOutput& S3PropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3AccessGrantLocationId"))
  {
    m_s3AccessGrantLocationId = jsonValue.GetString("s3AccessGrantLocationId");
    m_s3AccessGrantLocationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue S3PropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_s3AccessGrantLocationIdHasBeenSet)
  {
   payload.WithString("s3AccessGrantLocationId", m_s3AccessGrantLocationId);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

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
