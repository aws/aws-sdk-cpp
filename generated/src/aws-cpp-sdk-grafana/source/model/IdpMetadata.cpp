/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/IdpMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

IdpMetadata::IdpMetadata() : 
    m_urlHasBeenSet(false),
    m_xmlHasBeenSet(false)
{
}

IdpMetadata::IdpMetadata(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_xmlHasBeenSet(false)
{
  *this = jsonValue;
}

IdpMetadata& IdpMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xml"))
  {
    m_xml = jsonValue.GetString("xml");

    m_xmlHasBeenSet = true;
  }

  return *this;
}

JsonValue IdpMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_xmlHasBeenSet)
  {
   payload.WithString("xml", m_xml);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
