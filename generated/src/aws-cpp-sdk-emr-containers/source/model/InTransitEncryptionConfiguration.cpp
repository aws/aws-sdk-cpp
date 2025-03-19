/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/InTransitEncryptionConfiguration.h>
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

InTransitEncryptionConfiguration::InTransitEncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InTransitEncryptionConfiguration& InTransitEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tlsCertificateConfiguration"))
  {
    m_tlsCertificateConfiguration = jsonValue.GetObject("tlsCertificateConfiguration");
    m_tlsCertificateConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue InTransitEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tlsCertificateConfigurationHasBeenSet)
  {
   payload.WithObject("tlsCertificateConfiguration", m_tlsCertificateConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
