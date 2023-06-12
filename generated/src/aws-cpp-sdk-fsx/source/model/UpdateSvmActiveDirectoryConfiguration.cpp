/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateSvmActiveDirectoryConfiguration.h>
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

UpdateSvmActiveDirectoryConfiguration::UpdateSvmActiveDirectoryConfiguration() : 
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false),
    m_netBiosNameHasBeenSet(false)
{
}

UpdateSvmActiveDirectoryConfiguration::UpdateSvmActiveDirectoryConfiguration(JsonView jsonValue) : 
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false),
    m_netBiosNameHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateSvmActiveDirectoryConfiguration& UpdateSvmActiveDirectoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelfManagedActiveDirectoryConfiguration"))
  {
    m_selfManagedActiveDirectoryConfiguration = jsonValue.GetObject("SelfManagedActiveDirectoryConfiguration");

    m_selfManagedActiveDirectoryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetBiosName"))
  {
    m_netBiosName = jsonValue.GetString("NetBiosName");

    m_netBiosNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateSvmActiveDirectoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selfManagedActiveDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("SelfManagedActiveDirectoryConfiguration", m_selfManagedActiveDirectoryConfiguration.Jsonize());

  }

  if(m_netBiosNameHasBeenSet)
  {
   payload.WithString("NetBiosName", m_netBiosName);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
