/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MitigationAction.h>
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

MitigationAction::MitigationAction() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_actionParamsHasBeenSet(false)
{
}

MitigationAction::MitigationAction(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_actionParamsHasBeenSet(false)
{
  *this = jsonValue;
}

MitigationAction& MitigationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionParams"))
  {
    m_actionParams = jsonValue.GetObject("actionParams");

    m_actionParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue MitigationAction::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_actionParamsHasBeenSet)
  {
   payload.WithObject("actionParams", m_actionParams.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
