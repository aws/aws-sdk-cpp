/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ConcatenationSink.h>
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

ConcatenationSink::ConcatenationSink() : 
    m_type(ConcatenationSinkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_s3BucketSinkConfigurationHasBeenSet(false)
{
}

ConcatenationSink::ConcatenationSink(JsonView jsonValue) : 
    m_type(ConcatenationSinkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_s3BucketSinkConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConcatenationSink& ConcatenationSink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ConcatenationSinkTypeMapper::GetConcatenationSinkTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketSinkConfiguration"))
  {
    m_s3BucketSinkConfiguration = jsonValue.GetObject("S3BucketSinkConfiguration");

    m_s3BucketSinkConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConcatenationSink::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ConcatenationSinkTypeMapper::GetNameForConcatenationSinkType(m_type));
  }

  if(m_s3BucketSinkConfigurationHasBeenSet)
  {
   payload.WithObject("S3BucketSinkConfiguration", m_s3BucketSinkConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
