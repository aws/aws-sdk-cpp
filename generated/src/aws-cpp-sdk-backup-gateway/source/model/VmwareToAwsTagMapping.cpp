/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/VmwareToAwsTagMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

VmwareToAwsTagMapping::VmwareToAwsTagMapping() : 
    m_awsTagKeyHasBeenSet(false),
    m_awsTagValueHasBeenSet(false),
    m_vmwareCategoryHasBeenSet(false),
    m_vmwareTagNameHasBeenSet(false)
{
}

VmwareToAwsTagMapping::VmwareToAwsTagMapping(JsonView jsonValue) : 
    m_awsTagKeyHasBeenSet(false),
    m_awsTagValueHasBeenSet(false),
    m_vmwareCategoryHasBeenSet(false),
    m_vmwareTagNameHasBeenSet(false)
{
  *this = jsonValue;
}

VmwareToAwsTagMapping& VmwareToAwsTagMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsTagKey"))
  {
    m_awsTagKey = jsonValue.GetString("AwsTagKey");

    m_awsTagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsTagValue"))
  {
    m_awsTagValue = jsonValue.GetString("AwsTagValue");

    m_awsTagValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VmwareCategory"))
  {
    m_vmwareCategory = jsonValue.GetString("VmwareCategory");

    m_vmwareCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VmwareTagName"))
  {
    m_vmwareTagName = jsonValue.GetString("VmwareTagName");

    m_vmwareTagNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VmwareToAwsTagMapping::Jsonize() const
{
  JsonValue payload;

  if(m_awsTagKeyHasBeenSet)
  {
   payload.WithString("AwsTagKey", m_awsTagKey);

  }

  if(m_awsTagValueHasBeenSet)
  {
   payload.WithString("AwsTagValue", m_awsTagValue);

  }

  if(m_vmwareCategoryHasBeenSet)
  {
   payload.WithString("VmwareCategory", m_vmwareCategory);

  }

  if(m_vmwareTagNameHasBeenSet)
  {
   payload.WithString("VmwareTagName", m_vmwareTagName);

  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
