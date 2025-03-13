/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeConnectionResourceParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

DescribeConnectionResourceParameters::DescribeConnectionResourceParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeConnectionResourceParameters& DescribeConnectionResourceParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("ResourceConfigurationArn");
    m_resourceConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceAssociationArn"))
  {
    m_resourceAssociationArn = jsonValue.GetString("ResourceAssociationArn");
    m_resourceAssociationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeConnectionResourceParameters::Jsonize() const
{
  JsonValue payload;

  if(m_resourceConfigurationArnHasBeenSet)
  {
   payload.WithString("ResourceConfigurationArn", m_resourceConfigurationArn);

  }

  if(m_resourceAssociationArnHasBeenSet)
  {
   payload.WithString("ResourceAssociationArn", m_resourceAssociationArn);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
