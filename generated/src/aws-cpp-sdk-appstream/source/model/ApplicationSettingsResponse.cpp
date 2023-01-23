/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ApplicationSettingsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ApplicationSettingsResponse::ApplicationSettingsResponse() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_settingsGroupHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
}

ApplicationSettingsResponse::ApplicationSettingsResponse(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_settingsGroupHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSettingsResponse& ApplicationSettingsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SettingsGroup"))
  {
    m_settingsGroup = jsonValue.GetString("SettingsGroup");

    m_settingsGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSettingsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_settingsGroupHasBeenSet)
  {
   payload.WithString("SettingsGroup", m_settingsGroup);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
