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

#include <aws/mediapackage-vod/model/AssetShallow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

AssetShallow::AssetShallow() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceRoleArnHasBeenSet(false)
{
}

AssetShallow::AssetShallow(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AssetShallow& AssetShallow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packagingGroupId"))
  {
    m_packagingGroupId = jsonValue.GetString("packagingGroupId");

    m_packagingGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceRoleArn"))
  {
    m_sourceRoleArn = jsonValue.GetString("sourceRoleArn");

    m_sourceRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetShallow::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_packagingGroupIdHasBeenSet)
  {
   payload.WithString("packagingGroupId", m_packagingGroupId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_sourceRoleArnHasBeenSet)
  {
   payload.WithString("sourceRoleArn", m_sourceRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
