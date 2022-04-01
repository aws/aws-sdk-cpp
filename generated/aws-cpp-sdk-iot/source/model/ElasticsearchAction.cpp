/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ElasticsearchAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ElasticsearchAction::ElasticsearchAction() : 
    m_roleArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

ElasticsearchAction::ElasticsearchAction(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchAction& ElasticsearchAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetString("index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithString("index", m_index);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
