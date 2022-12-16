/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/VmwareTag.h>
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

VmwareTag::VmwareTag() : 
    m_vmwareCategoryHasBeenSet(false),
    m_vmwareTagDescriptionHasBeenSet(false),
    m_vmwareTagNameHasBeenSet(false)
{
}

VmwareTag::VmwareTag(JsonView jsonValue) : 
    m_vmwareCategoryHasBeenSet(false),
    m_vmwareTagDescriptionHasBeenSet(false),
    m_vmwareTagNameHasBeenSet(false)
{
  *this = jsonValue;
}

VmwareTag& VmwareTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VmwareCategory"))
  {
    m_vmwareCategory = jsonValue.GetString("VmwareCategory");

    m_vmwareCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VmwareTagDescription"))
  {
    m_vmwareTagDescription = jsonValue.GetString("VmwareTagDescription");

    m_vmwareTagDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VmwareTagName"))
  {
    m_vmwareTagName = jsonValue.GetString("VmwareTagName");

    m_vmwareTagNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VmwareTag::Jsonize() const
{
  JsonValue payload;

  if(m_vmwareCategoryHasBeenSet)
  {
   payload.WithString("VmwareCategory", m_vmwareCategory);

  }

  if(m_vmwareTagDescriptionHasBeenSet)
  {
   payload.WithString("VmwareTagDescription", m_vmwareTagDescription);

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
