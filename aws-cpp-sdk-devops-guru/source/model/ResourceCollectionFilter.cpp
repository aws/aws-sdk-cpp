/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ResourceCollectionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ResourceCollectionFilter::ResourceCollectionFilter() : 
    m_cloudFormationHasBeenSet(false)
{
}

ResourceCollectionFilter::ResourceCollectionFilter(JsonView jsonValue) : 
    m_cloudFormationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceCollectionFilter& ResourceCollectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudFormation"))
  {
    m_cloudFormation = jsonValue.GetObject("CloudFormation");

    m_cloudFormationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceCollectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_cloudFormationHasBeenSet)
  {
   payload.WithObject("CloudFormation", m_cloudFormation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
