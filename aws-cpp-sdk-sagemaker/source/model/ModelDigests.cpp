/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelDigests.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelDigests::ModelDigests() : 
    m_artifactDigestHasBeenSet(false)
{
}

ModelDigests::ModelDigests(JsonView jsonValue) : 
    m_artifactDigestHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDigests& ModelDigests::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArtifactDigest"))
  {
    m_artifactDigest = jsonValue.GetString("ArtifactDigest");

    m_artifactDigestHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDigests::Jsonize() const
{
  JsonValue payload;

  if(m_artifactDigestHasBeenSet)
  {
   payload.WithString("ArtifactDigest", m_artifactDigest);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
