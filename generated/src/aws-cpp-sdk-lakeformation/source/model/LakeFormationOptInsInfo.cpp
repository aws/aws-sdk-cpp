/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/LakeFormationOptInsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

LakeFormationOptInsInfo::LakeFormationOptInsInfo() : 
    m_resourceHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false)
{
}

LakeFormationOptInsInfo::LakeFormationOptInsInfo(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false)
{
  *this = jsonValue;
}

LakeFormationOptInsInfo& LakeFormationOptInsInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = jsonValue.GetObject("Resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Principal"))
  {
    m_principal = jsonValue.GetObject("Principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");

    m_lastUpdatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeFormationOptInsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("Principal", m_principal.Jsonize());

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("LastUpdatedBy", m_lastUpdatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
