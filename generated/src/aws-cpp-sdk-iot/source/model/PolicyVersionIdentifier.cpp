/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PolicyVersionIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PolicyVersionIdentifier::PolicyVersionIdentifier() : 
    m_policyNameHasBeenSet(false),
    m_policyVersionIdHasBeenSet(false)
{
}

PolicyVersionIdentifier::PolicyVersionIdentifier(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyVersionIdentifier& PolicyVersionIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyVersionId"))
  {
    m_policyVersionId = jsonValue.GetString("policyVersionId");

    m_policyVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyVersionIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_policyVersionIdHasBeenSet)
  {
   payload.WithString("policyVersionId", m_policyVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
