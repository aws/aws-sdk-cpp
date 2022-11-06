/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StreamInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StreamInfo::StreamInfo() : 
    m_streamIdHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_streamVersion(0),
    m_streamVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

StreamInfo::StreamInfo(JsonView jsonValue) : 
    m_streamIdHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_streamVersion(0),
    m_streamVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

StreamInfo& StreamInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamArn"))
  {
    m_streamArn = jsonValue.GetString("streamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamVersion"))
  {
    m_streamVersion = jsonValue.GetInteger("streamVersion");

    m_streamVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
    m_filesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamInfo::Jsonize() const
{
  JsonValue payload;

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("streamArn", m_streamArn);

  }

  if(m_streamVersionHasBeenSet)
  {
   payload.WithInteger("streamVersion", m_streamVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsObject(m_files[filesIndex].Jsonize());
   }
   payload.WithArray("files", std::move(filesJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
