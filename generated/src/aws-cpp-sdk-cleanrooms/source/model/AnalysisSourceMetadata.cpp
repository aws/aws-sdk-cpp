/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisSourceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisSourceMetadata::AnalysisSourceMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisSourceMetadata& AnalysisSourceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("artifacts"))
  {
    m_artifacts = jsonValue.GetObject("artifacts");
    m_artifactsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisSourceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_artifactsHasBeenSet)
  {
   payload.WithObject("artifacts", m_artifacts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
