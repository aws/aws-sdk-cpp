/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/IAMRoleIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

IAMRoleIdentity::IAMRoleIdentity() : 
    m_arnHasBeenSet(false)
{
}

IAMRoleIdentity::IAMRoleIdentity(JsonView jsonValue) : 
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

IAMRoleIdentity& IAMRoleIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue IAMRoleIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
