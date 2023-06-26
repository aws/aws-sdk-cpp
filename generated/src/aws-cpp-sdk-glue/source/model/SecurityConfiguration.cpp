/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SecurityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SecurityConfiguration::SecurityConfiguration() : 
    m_nameHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

SecurityConfiguration::SecurityConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityConfiguration& SecurityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimeStamp"))
  {
    m_createdTimeStamp = jsonValue.GetDouble("CreatedTimeStamp");

    m_createdTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimeStampHasBeenSet)
  {
   payload.WithDouble("CreatedTimeStamp", m_createdTimeStamp.SecondsWithMSPrecision());
  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
