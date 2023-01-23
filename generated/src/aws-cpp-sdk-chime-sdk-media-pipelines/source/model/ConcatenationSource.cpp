/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ConcatenationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

ConcatenationSource::ConcatenationSource() : 
    m_type(ConcatenationSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_mediaCapturePipelineSourceConfigurationHasBeenSet(false)
{
}

ConcatenationSource::ConcatenationSource(JsonView jsonValue) : 
    m_type(ConcatenationSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_mediaCapturePipelineSourceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConcatenationSource& ConcatenationSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ConcatenationSourceTypeMapper::GetConcatenationSourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaCapturePipelineSourceConfiguration"))
  {
    m_mediaCapturePipelineSourceConfiguration = jsonValue.GetObject("MediaCapturePipelineSourceConfiguration");

    m_mediaCapturePipelineSourceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConcatenationSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ConcatenationSourceTypeMapper::GetNameForConcatenationSourceType(m_type));
  }

  if(m_mediaCapturePipelineSourceConfigurationHasBeenSet)
  {
   payload.WithObject("MediaCapturePipelineSourceConfiguration", m_mediaCapturePipelineSourceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
