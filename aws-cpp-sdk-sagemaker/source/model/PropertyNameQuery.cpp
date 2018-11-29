/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
