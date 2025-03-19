/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inTransitEncryptionConfiguration"))
  {
    m_inTransitEncryptionConfiguration = jsonValue.GetObject("inTransitEncryptionConfiguration");
    m_inTransitEncryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inTransitEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("inTransitEncryptionConfiguration", m_inTransitEncryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
