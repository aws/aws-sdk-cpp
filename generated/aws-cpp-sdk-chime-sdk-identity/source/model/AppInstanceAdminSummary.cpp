/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceAdminSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

AppInstanceAdminSummary::AppInstanceAdminSummary() : 
    m_adminHasBeenSet(false)
{
}

AppInstanceAdminSummary::AppInstanceAdminSummary(JsonView jsonValue) : 
    m_adminHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceAdminSummary& AppInstanceAdminSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Admin"))
  {
    m_admin = jsonValue.GetObject("Admin");

    m_adminHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceAdminSummary::Jsonize() const
{
  JsonValue payload;

  if(m_adminHasBeenSet)
  {
   payload.WithObject("Admin", m_admin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
