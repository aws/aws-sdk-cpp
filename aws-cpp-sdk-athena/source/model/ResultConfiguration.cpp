/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ResultConfiguration::ResultConfiguration() : 
    m_outputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

ResultConfiguration::ResultConfiguration(JsonView jsonValue) : 
    m_outputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ResultConfiguration& ResultConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetString("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("OutputLocation", m_outputLocation);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
