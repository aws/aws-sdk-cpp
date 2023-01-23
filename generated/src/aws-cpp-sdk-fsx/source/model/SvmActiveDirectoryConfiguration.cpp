/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SvmActiveDirectoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

SvmActiveDirectoryConfiguration::SvmActiveDirectoryConfiguration() : 
    m_netBiosNameHasBeenSet(false),
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false)
{
}

SvmActiveDirectoryConfiguration::SvmActiveDirectoryConfiguration(JsonView jsonValue) : 
    m_netBiosNameHasBeenSet(false),
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SvmActiveDirectoryConfiguration& SvmActiveDirectoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetBiosName"))
  {
    m_netBiosName = jsonValue.GetString("NetBiosName");

    m_netBiosNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfManagedActiveDirectoryConfiguration"))
  {
    m_selfManagedActiveDirectoryConfiguration = jsonValue.GetObject("SelfManagedActiveDirectoryConfiguration");

    m_selfManagedActiveDirectoryConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SvmActiveDirectoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_netBiosNameHasBeenSet)
  {
   payload.WithString("NetBiosName", m_netBiosName);

  }

  if(m_selfManagedActiveDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("SelfManagedActiveDirectoryConfiguration", m_selfManagedActiveDirectoryConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
