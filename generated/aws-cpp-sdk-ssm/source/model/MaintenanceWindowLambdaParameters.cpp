/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowLambdaParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowLambdaParameters::MaintenanceWindowLambdaParameters() : 
    m_clientContextHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

MaintenanceWindowLambdaParameters::MaintenanceWindowLambdaParameters(JsonView jsonValue) : 
    m_clientContextHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowLambdaParameters& MaintenanceWindowLambdaParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientContext"))
  {
    m_clientContext = jsonValue.GetString("ClientContext");

    m_clientContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Qualifier"))
  {
    m_qualifier = jsonValue.GetString("Qualifier");

    m_qualifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = HashingUtils::Base64Decode(jsonValue.GetString("Payload"));
    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowLambdaParameters::Jsonize() const
{
  JsonValue payload;

  if(m_clientContextHasBeenSet)
  {
   payload.WithString("ClientContext", m_clientContext);

  }

  if(m_qualifierHasBeenSet)
  {
   payload.WithString("Qualifier", m_qualifier);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("Payload", HashingUtils::Base64Encode(m_payload));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
