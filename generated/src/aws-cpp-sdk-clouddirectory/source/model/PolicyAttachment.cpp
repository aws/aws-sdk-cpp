/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/PolicyAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

PolicyAttachment::PolicyAttachment() : 
    m_policyIdHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false),
    m_policyTypeHasBeenSet(false)
{
}

PolicyAttachment::PolicyAttachment(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false),
    m_policyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyAttachment& PolicyAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = jsonValue.GetString("PolicyType");

    m_policyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", m_policyType);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
