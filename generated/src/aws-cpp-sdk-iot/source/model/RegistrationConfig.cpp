/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RegistrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

RegistrationConfig::RegistrationConfig() : 
    m_templateBodyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

RegistrationConfig::RegistrationConfig(JsonView jsonValue) : 
    m_templateBodyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationConfig& RegistrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateBody"))
  {
    m_templateBody = jsonValue.GetString("templateBody");

    m_templateBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
