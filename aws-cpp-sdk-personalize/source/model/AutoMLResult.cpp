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

#include <aws/personalize/model/AutoMLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

AutoMLResult::AutoMLResult() : 
    m_bestRecipeArnHasBeenSet(false)
{
}

AutoMLResult::AutoMLResult(JsonView jsonValue) : 
    m_bestRecipeArnHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLResult& AutoMLResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bestRecipeArn"))
  {
    m_bestRecipeArn = jsonValue.GetString("bestRecipeArn");

    m_bestRecipeArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLResult::Jsonize() const
{
  JsonValue payload;

  if(m_bestRecipeArnHasBeenSet)
  {
   payload.WithString("bestRecipeArn", m_bestRecipeArn);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
