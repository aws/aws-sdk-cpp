/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ResourceInfo.h>
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

ResourceInfo::ResourceInfo() : 
    m_resourceArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_withFederation(false),
    m_withFederationHasBeenSet(false),
    m_hybridAccessEnabled(false),
    m_hybridAccessEnabledHasBeenSet(false)
{
}

ResourceInfo::ResourceInfo(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_withFederation(false),
    m_withFederationHasBeenSet(false),
    m_hybridAccessEnabled(false),
    m_hybridAccessEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceInfo& ResourceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WithFederation"))
  {
    m_withFederation = jsonValue.GetBool("WithFederation");

    m_withFederationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HybridAccessEnabled"))
  {
    m_hybridAccessEnabled = jsonValue.GetBool("HybridAccessEnabled");

    m_hybridAccessEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_withFederationHasBeenSet)
  {
   payload.WithBool("WithFederation", m_withFederation);

  }

  if(m_hybridAccessEnabledHasBeenSet)
  {
   payload.WithBool("HybridAccessEnabled", m_hybridAccessEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
