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

#include <aws/personalize/model/Recipe.h>
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

Recipe::Recipe() : 
    m_nameHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_featureTransformationArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_recipeTypeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

Recipe::Recipe(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_featureTransformationArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_recipeTypeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Recipe& Recipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipeArn"))
  {
    m_recipeArn = jsonValue.GetString("recipeArn");

    m_recipeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("algorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("algorithmArn");

    m_algorithmArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureTransformationArn"))
  {
    m_featureTransformationArn = jsonValue.GetString("featureTransformationArn");

    m_featureTransformationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipeType"))
  {
    m_recipeType = jsonValue.GetString("recipeType");

    m_recipeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Recipe::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("recipeArn", m_recipeArn);

  }

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("algorithmArn", m_algorithmArn);

  }

  if(m_featureTransformationArnHasBeenSet)
  {
   payload.WithString("featureTransformationArn", m_featureTransformationArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_recipeTypeHasBeenSet)
  {
   payload.WithString("recipeType", m_recipeType);

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
