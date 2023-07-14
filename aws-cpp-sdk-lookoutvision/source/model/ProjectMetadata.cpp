/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ProjectMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

ProjectMetadata::ProjectMetadata() : 
    m_projectArnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
{
}

ProjectMetadata::ProjectMetadata(JsonView jsonValue) : 
    m_projectArnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectMetadata& ProjectMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");

    m_projectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
