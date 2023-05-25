/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ResourceStatus::ResourceStatus() : 
    m_ec2(Status::NOT_SET),
    m_ec2HasBeenSet(false),
    m_ecr(Status::NOT_SET),
    m_ecrHasBeenSet(false),
    m_lambda(Status::NOT_SET),
    m_lambdaHasBeenSet(false)
{
}

ResourceStatus::ResourceStatus(JsonView jsonValue) : 
    m_ec2(Status::NOT_SET),
    m_ec2HasBeenSet(false),
    m_ecr(Status::NOT_SET),
    m_ecrHasBeenSet(false),
    m_lambda(Status::NOT_SET),
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceStatus& ResourceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2"))
  {
    m_ec2 = StatusMapper::GetStatusForName(jsonValue.GetString("ec2"));

    m_ec2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecr"))
  {
    m_ecr = StatusMapper::GetStatusForName(jsonValue.GetString("ecr"));

    m_ecrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = StatusMapper::GetStatusForName(jsonValue.GetString("lambda"));

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_ec2HasBeenSet)
  {
   payload.WithString("ec2", StatusMapper::GetNameForStatus(m_ec2));
  }

  if(m_ecrHasBeenSet)
  {
   payload.WithString("ecr", StatusMapper::GetNameForStatus(m_ecr));
  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithString("lambda", StatusMapper::GetNameForStatus(m_lambda));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
