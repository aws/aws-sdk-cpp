/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AwsSsoAuthentication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

AwsSsoAuthentication::AwsSsoAuthentication() : 
    m_ssoClientIdHasBeenSet(false)
{
}

AwsSsoAuthentication::AwsSsoAuthentication(JsonView jsonValue) : 
    m_ssoClientIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSsoAuthentication& AwsSsoAuthentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ssoClientId"))
  {
    m_ssoClientId = jsonValue.GetString("ssoClientId");

    m_ssoClientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSsoAuthentication::Jsonize() const
{
  JsonValue payload;

  if(m_ssoClientIdHasBeenSet)
  {
   payload.WithString("ssoClientId", m_ssoClientId);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
