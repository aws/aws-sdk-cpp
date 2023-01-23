/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/EffectivePolicy.h>
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

EffectivePolicy::EffectivePolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
}

EffectivePolicy::EffectivePolicy(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

EffectivePolicy& EffectivePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

    m_policyDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectivePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
