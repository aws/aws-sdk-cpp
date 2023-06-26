/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/SourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

SourceConfiguration::SourceConfiguration() : 
    m_codeRepositoryHasBeenSet(false),
    m_imageRepositoryHasBeenSet(false),
    m_autoDeploymentsEnabled(false),
    m_autoDeploymentsEnabledHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false)
{
}

SourceConfiguration::SourceConfiguration(JsonView jsonValue) : 
    m_codeRepositoryHasBeenSet(false),
    m_imageRepositoryHasBeenSet(false),
    m_autoDeploymentsEnabled(false),
    m_autoDeploymentsEnabledHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfiguration& SourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeRepository"))
  {
    m_codeRepository = jsonValue.GetObject("CodeRepository");

    m_codeRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageRepository"))
  {
    m_imageRepository = jsonValue.GetObject("ImageRepository");

    m_imageRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoDeploymentsEnabled"))
  {
    m_autoDeploymentsEnabled = jsonValue.GetBool("AutoDeploymentsEnabled");

    m_autoDeploymentsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");

    m_authenticationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_codeRepositoryHasBeenSet)
  {
   payload.WithObject("CodeRepository", m_codeRepository.Jsonize());

  }

  if(m_imageRepositoryHasBeenSet)
  {
   payload.WithObject("ImageRepository", m_imageRepository.Jsonize());

  }

  if(m_autoDeploymentsEnabledHasBeenSet)
  {
   payload.WithBool("AutoDeploymentsEnabled", m_autoDeploymentsEnabled);

  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("AuthenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
