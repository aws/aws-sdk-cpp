/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/GraphQLRenderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

GraphQLRenderConfig::GraphQLRenderConfig() : 
    m_typesFilePathHasBeenSet(false),
    m_queriesFilePathHasBeenSet(false),
    m_mutationsFilePathHasBeenSet(false),
    m_subscriptionsFilePathHasBeenSet(false),
    m_fragmentsFilePathHasBeenSet(false)
{
}

GraphQLRenderConfig::GraphQLRenderConfig(JsonView jsonValue) : 
    m_typesFilePathHasBeenSet(false),
    m_queriesFilePathHasBeenSet(false),
    m_mutationsFilePathHasBeenSet(false),
    m_subscriptionsFilePathHasBeenSet(false),
    m_fragmentsFilePathHasBeenSet(false)
{
  *this = jsonValue;
}

GraphQLRenderConfig& GraphQLRenderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("typesFilePath"))
  {
    m_typesFilePath = jsonValue.GetString("typesFilePath");

    m_typesFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queriesFilePath"))
  {
    m_queriesFilePath = jsonValue.GetString("queriesFilePath");

    m_queriesFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mutationsFilePath"))
  {
    m_mutationsFilePath = jsonValue.GetString("mutationsFilePath");

    m_mutationsFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionsFilePath"))
  {
    m_subscriptionsFilePath = jsonValue.GetString("subscriptionsFilePath");

    m_subscriptionsFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentsFilePath"))
  {
    m_fragmentsFilePath = jsonValue.GetString("fragmentsFilePath");

    m_fragmentsFilePathHasBeenSet = true;
  }

  return *this;
}

JsonValue GraphQLRenderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typesFilePathHasBeenSet)
  {
   payload.WithString("typesFilePath", m_typesFilePath);

  }

  if(m_queriesFilePathHasBeenSet)
  {
   payload.WithString("queriesFilePath", m_queriesFilePath);

  }

  if(m_mutationsFilePathHasBeenSet)
  {
   payload.WithString("mutationsFilePath", m_mutationsFilePath);

  }

  if(m_subscriptionsFilePathHasBeenSet)
  {
   payload.WithString("subscriptionsFilePath", m_subscriptionsFilePath);

  }

  if(m_fragmentsFilePathHasBeenSet)
  {
   payload.WithString("fragmentsFilePath", m_fragmentsFilePath);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
