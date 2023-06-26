/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DynatraceConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

DynatraceConnectorProfileCredentials::DynatraceConnectorProfileCredentials() : 
    m_apiTokenHasBeenSet(false)
{
}

DynatraceConnectorProfileCredentials::DynatraceConnectorProfileCredentials(JsonView jsonValue) : 
    m_apiTokenHasBeenSet(false)
{
  *this = jsonValue;
}

DynatraceConnectorProfileCredentials& DynatraceConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiToken"))
  {
    m_apiToken = jsonValue.GetString("apiToken");

    m_apiTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue DynatraceConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_apiTokenHasBeenSet)
  {
   payload.WithString("apiToken", m_apiToken);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
