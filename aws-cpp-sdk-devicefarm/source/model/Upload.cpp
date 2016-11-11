/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/Upload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Upload::Upload() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_type(UploadType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(UploadStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

Upload::Upload(const JsonValue& jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_type(UploadType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(UploadStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

Upload& Upload::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UploadTypeMapper::GetUploadTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = UploadStatusMapper::GetUploadStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetString("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue Upload::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UploadTypeMapper::GetNameForUploadType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UploadStatusMapper::GetNameForUploadStatus(m_status));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("metadata", m_metadata);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws