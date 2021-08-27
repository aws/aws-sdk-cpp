/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultConfigurationUpdates.h>
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

ResultConfigurationUpdates::ResultConfigurationUpdates() : 
    m_outputLocationHasBeenSet(false),
    m_removeOutputLocation(false),
    m_removeOutputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_removeEncryptionConfiguration(false),
    m_removeEncryptionConfigurationHasBeenSet(false)
{
}

ResultConfigurationUpdates::ResultConfigurationUpdates(JsonView jsonValue) : 
    m_outputLocationHasBeenSet(false),
    m_removeOutputLocation(false),
    m_removeOutputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_removeEncryptionConfiguration(false),
    m_removeEncryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ResultConfigurationUpdates& ResultConfigurationUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetString("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveOutputLocation"))
  {
    m_removeOutputLocation = jsonValue.GetBool("RemoveOutputLocation");

    m_removeOutputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveEncryptionConfiguration"))
  {
    m_removeEncryptionConfiguration = jsonValue.GetBool("RemoveEncryptionConfiguration");

    m_removeEncryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultConfigurationUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("OutputLocation", m_outputLocation);

  }

  if(m_removeOutputLocationHasBeenSet)
  {
   payload.WithBool("RemoveOutputLocation", m_removeOutputLocation);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_removeEncryptionConfigurationHasBeenSet)
  {
   payload.WithBool("RemoveEncryptionConfiguration", m_removeEncryptionConfiguration);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
