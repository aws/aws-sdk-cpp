/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterClusterParameterStatus.h>
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

AwsRedshiftClusterClusterParameterStatus::AwsRedshiftClusterClusterParameterStatus() : 
    m_parameterNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_parameterApplyErrorDescriptionHasBeenSet(false)
{
}

AwsRedshiftClusterClusterParameterStatus::AwsRedshiftClusterClusterParameterStatus(JsonView jsonValue) : 
    m_parameterNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_parameterApplyErrorDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterClusterParameterStatus& AwsRedshiftClusterClusterParameterStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterApplyStatus"))
  {
    m_parameterApplyStatus = jsonValue.GetString("ParameterApplyStatus");

    m_parameterApplyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterApplyErrorDescription"))
  {
    m_parameterApplyErrorDescription = jsonValue.GetString("ParameterApplyErrorDescription");

    m_parameterApplyErrorDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterClusterParameterStatus::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_parameterApplyStatusHasBeenSet)
  {
   payload.WithString("ParameterApplyStatus", m_parameterApplyStatus);

  }

  if(m_parameterApplyErrorDescriptionHasBeenSet)
  {
   payload.WithString("ParameterApplyErrorDescription", m_parameterApplyErrorDescription);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
