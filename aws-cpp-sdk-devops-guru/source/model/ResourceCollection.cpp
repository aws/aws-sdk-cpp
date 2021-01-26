/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ResourceCollection.h>
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

ResourceCollection::ResourceCollection() : 
    m_cloudFormationHasBeenSet(false)
{
}

ResourceCollection::ResourceCollection(JsonView jsonValue) : 
    m_cloudFormationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceCollection& ResourceCollection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudFormation"))
  {
    m_cloudFormation = jsonValue.GetObject("CloudFormation");

    m_cloudFormationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceCollection::Jsonize() const
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
