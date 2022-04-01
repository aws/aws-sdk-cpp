/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActionTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ActionTarget::ActionTarget() : 
    m_actionTargetArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ActionTarget::ActionTarget(JsonView jsonValue) : 
    m_actionTargetArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTarget& ActionTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionTargetArn"))
  {
    m_actionTargetArn = jsonValue.GetString("ActionTargetArn");

    m_actionTargetArnHasBeenSet = true;
  }

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

  return *this;
}

JsonValue ActionTarget::Jsonize() const
{
  JsonValue payload;

  if(m_actionTargetArnHasBeenSet)
  {
   payload.WithString("ActionTargetArn", m_actionTargetArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
