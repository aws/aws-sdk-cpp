/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerValidationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerValidationConfiguration::ServerValidationConfiguration() : 
    m_serverHasBeenSet(false),
    m_validationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverValidationStrategy(ServerValidationStrategy::NOT_SET),
    m_serverValidationStrategyHasBeenSet(false),
    m_userDataValidationParametersHasBeenSet(false)
{
}

ServerValidationConfiguration::ServerValidationConfiguration(JsonView jsonValue) : 
    m_serverHasBeenSet(false),
    m_validationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverValidationStrategy(ServerValidationStrategy::NOT_SET),
    m_serverValidationStrategyHasBeenSet(false),
    m_userDataValidationParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ServerValidationConfiguration& ServerValidationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("server"))
  {
    m_server = jsonValue.GetObject("server");

    m_serverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationId"))
  {
    m_validationId = jsonValue.GetString("validationId");

    m_validationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverValidationStrategy"))
  {
    m_serverValidationStrategy = ServerValidationStrategyMapper::GetServerValidationStrategyForName(jsonValue.GetString("serverValidationStrategy"));

    m_serverValidationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userDataValidationParameters"))
  {
    m_userDataValidationParameters = jsonValue.GetObject("userDataValidationParameters");

    m_userDataValidationParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerValidationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverHasBeenSet)
  {
   payload.WithObject("server", m_server.Jsonize());

  }

  if(m_validationIdHasBeenSet)
  {
   payload.WithString("validationId", m_validationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serverValidationStrategyHasBeenSet)
  {
   payload.WithString("serverValidationStrategy", ServerValidationStrategyMapper::GetNameForServerValidationStrategy(m_serverValidationStrategy));
  }

  if(m_userDataValidationParametersHasBeenSet)
  {
   payload.WithObject("userDataValidationParameters", m_userDataValidationParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
