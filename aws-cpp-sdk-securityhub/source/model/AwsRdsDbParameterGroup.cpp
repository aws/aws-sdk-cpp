/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbParameterGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsDbParameterGroup::AwsRdsDbParameterGroup() : 
    m_dbParameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false)
{
}

AwsRdsDbParameterGroup::AwsRdsDbParameterGroup(JsonView jsonValue) : 
    m_dbParameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbParameterGroup& AwsRdsDbParameterGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DbParameterGroupName"))
  {
    m_dbParameterGroupName = jsonValue.GetString("DbParameterGroupName");

    m_dbParameterGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterApplyStatus"))
  {
    m_parameterApplyStatus = jsonValue.GetString("ParameterApplyStatus");

    m_parameterApplyStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbParameterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_dbParameterGroupNameHasBeenSet)
  {
   payload.WithString("DbParameterGroupName", m_dbParameterGroupName);

  }

  if(m_parameterApplyStatusHasBeenSet)
  {
   payload.WithString("ParameterApplyStatus", m_parameterApplyStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
