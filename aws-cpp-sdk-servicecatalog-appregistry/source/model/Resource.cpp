/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

Resource::Resource() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_integrationsHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_integrationsHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationTime"))
  {
    m_associationTime = jsonValue.GetString("associationTime");

    m_associationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrations"))
  {
    m_integrations = jsonValue.GetObject("integrations");

    m_integrationsHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_associationTimeHasBeenSet)
  {
   payload.WithString("associationTime", m_associationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_integrationsHasBeenSet)
  {
   payload.WithObject("integrations", m_integrations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
