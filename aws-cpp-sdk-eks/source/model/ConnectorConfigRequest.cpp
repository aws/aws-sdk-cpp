/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ConnectorConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ConnectorConfigRequest::ConnectorConfigRequest() : 
    m_roleArnHasBeenSet(false),
    m_provider(ConnectorConfigProvider::NOT_SET),
    m_providerHasBeenSet(false)
{
}

ConnectorConfigRequest::ConnectorConfigRequest(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_provider(ConnectorConfigProvider::NOT_SET),
    m_providerHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorConfigRequest& ConnectorConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = ConnectorConfigProviderMapper::GetConnectorConfigProviderForName(jsonValue.GetString("provider"));

    m_providerHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", ConnectorConfigProviderMapper::GetNameForConnectorConfigProvider(m_provider));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
