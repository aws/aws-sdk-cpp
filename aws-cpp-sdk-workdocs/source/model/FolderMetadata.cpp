﻿/*
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

#include <aws/workdocs/model/FolderMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

FolderMetadata::FolderMetadata() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_resourceState(ResourceStateType::NOT_SET),
    m_resourceStateHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_latestVersionSize(0),
    m_latestVersionSizeHasBeenSet(false)
{
}

FolderMetadata::FolderMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_resourceState(ResourceStateType::NOT_SET),
    m_resourceStateHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_latestVersionSize(0),
    m_latestVersionSizeHasBeenSet(false)
{
  *this = jsonValue;
}

FolderMetadata& FolderMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorId"))
  {
    m_creatorId = jsonValue.GetString("CreatorId");

    m_creatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentFolderId"))
  {
    m_parentFolderId = jsonValue.GetString("ParentFolderId");

    m_parentFolderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedTimestamp"))
  {
    m_modifiedTimestamp = jsonValue.GetDouble("ModifiedTimestamp");

    m_modifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceState"))
  {
    m_resourceState = ResourceStateTypeMapper::GetResourceStateTypeForName(jsonValue.GetString("ResourceState"));

    m_resourceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Signature"))
  {
    m_signature = jsonValue.GetString("Signature");

    m_signatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionSize"))
  {
    m_latestVersionSize = jsonValue.GetInt64("LatestVersionSize");

    m_latestVersionSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue FolderMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("CreatorId", m_creatorId);

  }

  if(m_parentFolderIdHasBeenSet)
  {
   payload.WithString("ParentFolderId", m_parentFolderId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_modifiedTimestampHasBeenSet)
  {
   payload.WithDouble("ModifiedTimestamp", m_modifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_resourceStateHasBeenSet)
  {
   payload.WithString("ResourceState", ResourceStateTypeMapper::GetNameForResourceStateType(m_resourceState));
  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("Signature", m_signature);

  }

  if(m_labelsHasBeenSet)
  {
   Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  if(m_latestVersionSizeHasBeenSet)
  {
   payload.WithInt64("LatestVersionSize", m_latestVersionSize);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
