/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterIamRole.h>
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

AwsRedshiftClusterIamRole::AwsRedshiftClusterIamRole() : 
    m_applyStatusHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

AwsRedshiftClusterIamRole::AwsRedshiftClusterIamRole(JsonView jsonValue) : 
    m_applyStatusHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterIamRole& AwsRedshiftClusterIamRole::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplyStatus"))
  {
    m_applyStatus = jsonValue.GetString("ApplyStatus");

    m_applyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterIamRole::Jsonize() const
{
  JsonValue payload;

  if(m_applyStatusHasBeenSet)
  {
   payload.WithString("ApplyStatus", m_applyStatus);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
