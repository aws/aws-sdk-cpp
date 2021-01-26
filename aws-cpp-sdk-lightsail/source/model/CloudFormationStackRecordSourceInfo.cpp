/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CloudFormationStackRecordSourceInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

CloudFormationStackRecordSourceInfo::CloudFormationStackRecordSourceInfo() : 
    m_resourceType(CloudFormationStackRecordSourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

CloudFormationStackRecordSourceInfo::CloudFormationStackRecordSourceInfo(JsonView jsonValue) : 
    m_resourceType(CloudFormationStackRecordSourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

CloudFormationStackRecordSourceInfo& CloudFormationStackRecordSourceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = CloudFormationStackRecordSourceTypeMapper::GetCloudFormationStackRecordSourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudFormationStackRecordSourceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", CloudFormationStackRecordSourceTypeMapper::GetNameForCloudFormationStackRecordSourceType(m_resourceType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
