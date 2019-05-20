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

#include <aws/mediapackage-vod/model/PackagingConfiguration.h>
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

PackagingConfiguration::PackagingConfiguration() : 
    m_arnHasBeenSet(false),
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false)
{
}

PackagingConfiguration::PackagingConfiguration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

PackagingConfiguration& PackagingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cmafPackage"))
  {
    m_cmafPackage = jsonValue.GetObject("cmafPackage");

    m_cmafPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dashPackage"))
  {
    m_dashPackage = jsonValue.GetObject("dashPackage");

    m_dashPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsPackage"))
  {
    m_hlsPackage = jsonValue.GetObject("hlsPackage");

    m_hlsPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mssPackage"))
  {
    m_mssPackage = jsonValue.GetObject("mssPackage");

    m_mssPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packagingGroupId"))
  {
    m_packagingGroupId = jsonValue.GetString("packagingGroupId");

    m_packagingGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PackagingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_cmafPackageHasBeenSet)
  {
   payload.WithObject("cmafPackage", m_cmafPackage.Jsonize());

  }

  if(m_dashPackageHasBeenSet)
  {
   payload.WithObject("dashPackage", m_dashPackage.Jsonize());

  }

  if(m_hlsPackageHasBeenSet)
  {
   payload.WithObject("hlsPackage", m_hlsPackage.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_mssPackageHasBeenSet)
  {
   payload.WithObject("mssPackage", m_mssPackage.Jsonize());

  }

  if(m_packagingGroupIdHasBeenSet)
  {
   payload.WithString("packagingGroupId", m_packagingGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
