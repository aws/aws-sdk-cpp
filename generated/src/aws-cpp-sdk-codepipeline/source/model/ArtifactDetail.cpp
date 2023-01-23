/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ArtifactDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ArtifactDetail::ArtifactDetail() : 
    m_nameHasBeenSet(false),
    m_s3locationHasBeenSet(false)
{
}

ArtifactDetail::ArtifactDetail(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_s3locationHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactDetail& ArtifactDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3location"))
  {
    m_s3location = jsonValue.GetObject("s3location");

    m_s3locationHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactDetail::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3locationHasBeenSet)
  {
   payload.WithObject("s3location", m_s3location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
