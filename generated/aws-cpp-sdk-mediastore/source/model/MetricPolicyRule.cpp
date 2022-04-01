/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/MetricPolicyRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStore
{
namespace Model
{

MetricPolicyRule::MetricPolicyRule() : 
    m_objectGroupHasBeenSet(false),
    m_objectGroupNameHasBeenSet(false)
{
}

MetricPolicyRule::MetricPolicyRule(JsonView jsonValue) : 
    m_objectGroupHasBeenSet(false),
    m_objectGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

MetricPolicyRule& MetricPolicyRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectGroup"))
  {
    m_objectGroup = jsonValue.GetString("ObjectGroup");

    m_objectGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectGroupName"))
  {
    m_objectGroupName = jsonValue.GetString("ObjectGroupName");

    m_objectGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricPolicyRule::Jsonize() const
{
  JsonValue payload;

  if(m_objectGroupHasBeenSet)
  {
   payload.WithString("ObjectGroup", m_objectGroup);

  }

  if(m_objectGroupNameHasBeenSet)
  {
   payload.WithString("ObjectGroupName", m_objectGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaStore
} // namespace Aws
