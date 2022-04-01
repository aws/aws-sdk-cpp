/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ArtifactDetails.h>
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

ArtifactDetails::ArtifactDetails() : 
    m_minimumCount(0),
    m_minimumCountHasBeenSet(false),
    m_maximumCount(0),
    m_maximumCountHasBeenSet(false)
{
}

ArtifactDetails::ArtifactDetails(JsonView jsonValue) : 
    m_minimumCount(0),
    m_minimumCountHasBeenSet(false),
    m_maximumCount(0),
    m_maximumCountHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactDetails& ArtifactDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minimumCount"))
  {
    m_minimumCount = jsonValue.GetInteger("minimumCount");

    m_minimumCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumCount"))
  {
    m_maximumCount = jsonValue.GetInteger("maximumCount");

    m_maximumCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactDetails::Jsonize() const
{
  JsonValue payload;

  if(m_minimumCountHasBeenSet)
  {
   payload.WithInteger("minimumCount", m_minimumCount);

  }

  if(m_maximumCountHasBeenSet)
  {
   payload.WithInteger("maximumCount", m_maximumCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
