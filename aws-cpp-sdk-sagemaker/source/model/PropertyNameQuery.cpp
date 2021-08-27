/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PropertyNameQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

PropertyNameQuery::PropertyNameQuery() : 
    m_propertyNameHintHasBeenSet(false)
{
}

PropertyNameQuery::PropertyNameQuery(JsonView jsonValue) : 
    m_propertyNameHintHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyNameQuery& PropertyNameQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyNameHint"))
  {
    m_propertyNameHint = jsonValue.GetString("PropertyNameHint");

    m_propertyNameHintHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyNameQuery::Jsonize() const
{
  JsonValue payload;

  if(m_propertyNameHintHasBeenSet)
  {
   payload.WithString("PropertyNameHint", m_propertyNameHint);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
