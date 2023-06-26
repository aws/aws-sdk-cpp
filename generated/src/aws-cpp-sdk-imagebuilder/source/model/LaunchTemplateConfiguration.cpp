/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LaunchTemplateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LaunchTemplateConfiguration::LaunchTemplateConfiguration() : 
    m_launchTemplateIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_setDefaultVersion(false),
    m_setDefaultVersionHasBeenSet(false)
{
}

LaunchTemplateConfiguration::LaunchTemplateConfiguration(JsonView jsonValue) : 
    m_launchTemplateIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_setDefaultVersion(false),
    m_setDefaultVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchTemplateConfiguration& LaunchTemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchTemplateId"))
  {
    m_launchTemplateId = jsonValue.GetString("launchTemplateId");

    m_launchTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("setDefaultVersion"))
  {
    m_setDefaultVersion = jsonValue.GetBool("setDefaultVersion");

    m_setDefaultVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchTemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateIdHasBeenSet)
  {
   payload.WithString("launchTemplateId", m_launchTemplateId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_setDefaultVersionHasBeenSet)
  {
   payload.WithBool("setDefaultVersion", m_setDefaultVersion);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
