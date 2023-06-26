/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ExtensionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

ExtensionDetails::ExtensionDetails() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

ExtensionDetails::ExtensionDetails(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

ExtensionDetails& ExtensionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtensionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
