/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdNamespaceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IdNamespaceSummary::IdNamespaceSummary() : 
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idNamespaceArnHasBeenSet(false),
    m_idNamespaceNameHasBeenSet(false),
    m_type(IdNamespaceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

IdNamespaceSummary::IdNamespaceSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idNamespaceArnHasBeenSet(false),
    m_idNamespaceNameHasBeenSet(false),
    m_type(IdNamespaceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

IdNamespaceSummary& IdNamespaceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idNamespaceArn"))
  {
    m_idNamespaceArn = jsonValue.GetString("idNamespaceArn");

    m_idNamespaceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idNamespaceName"))
  {
    m_idNamespaceName = jsonValue.GetString("idNamespaceName");

    m_idNamespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue IdNamespaceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idNamespaceArnHasBeenSet)
  {
   payload.WithString("idNamespaceArn", m_idNamespaceArn);

  }

  if(m_idNamespaceNameHasBeenSet)
  {
   payload.WithString("idNamespaceName", m_idNamespaceName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IdNamespaceTypeMapper::GetNameForIdNamespaceType(m_type));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
