/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CloudFormationStepSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

CloudFormationStepSummary::CloudFormationStepSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudFormationStepSummary& CloudFormationStepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createCloudformation"))
  {
    m_createCloudformation = jsonValue.GetObject("createCloudformation");
    m_createCloudformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteCloudformation"))
  {
    m_deleteCloudformation = jsonValue.GetObject("deleteCloudformation");
    m_deleteCloudformationHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudFormationStepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createCloudformationHasBeenSet)
  {
   payload.WithObject("createCloudformation", m_createCloudformation.Jsonize());

  }

  if(m_deleteCloudformationHasBeenSet)
  {
   payload.WithObject("deleteCloudformation", m_deleteCloudformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
