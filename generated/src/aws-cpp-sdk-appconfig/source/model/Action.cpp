/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

Action::Action() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
