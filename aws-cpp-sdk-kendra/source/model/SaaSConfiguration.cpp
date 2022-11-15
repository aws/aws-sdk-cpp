/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SaaSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

SaaSConfiguration::SaaSConfiguration() : 
    m_organizationNameHasBeenSet(false),
    m_hostUrlHasBeenSet(false)
{
}

SaaSConfiguration::SaaSConfiguration(JsonView jsonValue) : 
    m_organizationNameHasBeenSet(false),
    m_hostUrlHasBeenSet(false)
{
  *this = jsonValue;
}

SaaSConfiguration& SaaSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationName"))
  {
    m_organizationName = jsonValue.GetString("OrganizationName");

    m_organizationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostUrl"))
  {
    m_hostUrl = jsonValue.GetString("HostUrl");

    m_hostUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue SaaSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_organizationNameHasBeenSet)
  {
   payload.WithString("OrganizationName", m_organizationName);

  }

  if(m_hostUrlHasBeenSet)
  {
   payload.WithString("HostUrl", m_hostUrl);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
