/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExtensionAssociationSummary.h>
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

ExtensionAssociationSummary::ExtensionAssociationSummary() : 
    m_idHasBeenSet(false),
    m_extensionArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

ExtensionAssociationSummary::ExtensionAssociationSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_extensionArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

ExtensionAssociationSummary& ExtensionAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtensionArn"))
  {
    m_extensionArn = jsonValue.GetString("ExtensionArn");

    m_extensionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtensionAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_extensionArnHasBeenSet)
  {
   payload.WithString("ExtensionArn", m_extensionArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
