/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

FindingDetails::FindingDetails() : 
    m_externalAccessDetailsHasBeenSet(false),
    m_unusedPermissionDetailsHasBeenSet(false),
    m_unusedIamUserAccessKeyDetailsHasBeenSet(false),
    m_unusedIamRoleDetailsHasBeenSet(false),
    m_unusedIamUserPasswordDetailsHasBeenSet(false)
{
}

FindingDetails::FindingDetails(JsonView jsonValue) : 
    m_externalAccessDetailsHasBeenSet(false),
    m_unusedPermissionDetailsHasBeenSet(false),
    m_unusedIamUserAccessKeyDetailsHasBeenSet(false),
    m_unusedIamRoleDetailsHasBeenSet(false),
    m_unusedIamUserPasswordDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

FindingDetails& FindingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("externalAccessDetails"))
  {
    m_externalAccessDetails = jsonValue.GetObject("externalAccessDetails");

    m_externalAccessDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unusedPermissionDetails"))
  {
    m_unusedPermissionDetails = jsonValue.GetObject("unusedPermissionDetails");

    m_unusedPermissionDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unusedIamUserAccessKeyDetails"))
  {
    m_unusedIamUserAccessKeyDetails = jsonValue.GetObject("unusedIamUserAccessKeyDetails");

    m_unusedIamUserAccessKeyDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unusedIamRoleDetails"))
  {
    m_unusedIamRoleDetails = jsonValue.GetObject("unusedIamRoleDetails");

    m_unusedIamRoleDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unusedIamUserPasswordDetails"))
  {
    m_unusedIamUserPasswordDetails = jsonValue.GetObject("unusedIamUserPasswordDetails");

    m_unusedIamUserPasswordDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_externalAccessDetailsHasBeenSet)
  {
   payload.WithObject("externalAccessDetails", m_externalAccessDetails.Jsonize());

  }

  if(m_unusedPermissionDetailsHasBeenSet)
  {
   payload.WithObject("unusedPermissionDetails", m_unusedPermissionDetails.Jsonize());

  }

  if(m_unusedIamUserAccessKeyDetailsHasBeenSet)
  {
   payload.WithObject("unusedIamUserAccessKeyDetails", m_unusedIamUserAccessKeyDetails.Jsonize());

  }

  if(m_unusedIamRoleDetailsHasBeenSet)
  {
   payload.WithObject("unusedIamRoleDetails", m_unusedIamRoleDetails.Jsonize());

  }

  if(m_unusedIamUserPasswordDetailsHasBeenSet)
  {
   payload.WithObject("unusedIamUserPasswordDetails", m_unusedIamUserPasswordDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
