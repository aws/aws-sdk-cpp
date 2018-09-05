/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
