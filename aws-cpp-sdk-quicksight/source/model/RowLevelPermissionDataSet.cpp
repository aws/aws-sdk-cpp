/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowLevelPermissionDataSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RowLevelPermissionDataSet::RowLevelPermissionDataSet() : 
    m_namespaceHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_permissionPolicy(RowLevelPermissionPolicy::NOT_SET),
    m_permissionPolicyHasBeenSet(false),
    m_formatVersion(RowLevelPermissionFormatVersion::NOT_SET),
    m_formatVersionHasBeenSet(false)
{
}

RowLevelPermissionDataSet::RowLevelPermissionDataSet(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_permissionPolicy(RowLevelPermissionPolicy::NOT_SET),
    m_permissionPolicyHasBeenSet(false),
    m_formatVersion(RowLevelPermissionFormatVersion::NOT_SET),
    m_formatVersionHasBeenSet(false)
{
  *this = jsonValue;
}

RowLevelPermissionDataSet& RowLevelPermissionDataSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionPolicy"))
  {
    m_permissionPolicy = RowLevelPermissionPolicyMapper::GetRowLevelPermissionPolicyForName(jsonValue.GetString("PermissionPolicy"));

    m_permissionPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatVersion"))
  {
    m_formatVersion = RowLevelPermissionFormatVersionMapper::GetRowLevelPermissionFormatVersionForName(jsonValue.GetString("FormatVersion"));

    m_formatVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue RowLevelPermissionDataSet::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_permissionPolicyHasBeenSet)
  {
   payload.WithString("PermissionPolicy", RowLevelPermissionPolicyMapper::GetNameForRowLevelPermissionPolicy(m_permissionPolicy));
  }

  if(m_formatVersionHasBeenSet)
  {
   payload.WithString("FormatVersion", RowLevelPermissionFormatVersionMapper::GetNameForRowLevelPermissionFormatVersion(m_formatVersion));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
