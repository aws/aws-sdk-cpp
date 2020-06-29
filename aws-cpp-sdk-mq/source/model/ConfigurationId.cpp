/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/ConfigurationId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

ConfigurationId::ConfigurationId() : 
    m_idHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

ConfigurationId::ConfigurationId(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationId& ConfigurationId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInteger("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationId::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
