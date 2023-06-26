/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/S3BucketTranscriptSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

S3BucketTranscriptSource::S3BucketTranscriptSource() : 
    m_s3BucketNameHasBeenSet(false),
    m_pathFormatHasBeenSet(false),
    m_transcriptFormat(TranscriptFormat::NOT_SET),
    m_transcriptFormatHasBeenSet(false),
    m_transcriptFilterHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3BucketTranscriptSource::S3BucketTranscriptSource(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_pathFormatHasBeenSet(false),
    m_transcriptFormat(TranscriptFormat::NOT_SET),
    m_transcriptFormatHasBeenSet(false),
    m_transcriptFilterHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketTranscriptSource& S3BucketTranscriptSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pathFormat"))
  {
    m_pathFormat = jsonValue.GetObject("pathFormat");

    m_pathFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transcriptFormat"))
  {
    m_transcriptFormat = TranscriptFormatMapper::GetTranscriptFormatForName(jsonValue.GetString("transcriptFormat"));

    m_transcriptFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transcriptFilter"))
  {
    m_transcriptFilter = jsonValue.GetObject("transcriptFilter");

    m_transcriptFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketTranscriptSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_pathFormatHasBeenSet)
  {
   payload.WithObject("pathFormat", m_pathFormat.Jsonize());

  }

  if(m_transcriptFormatHasBeenSet)
  {
   payload.WithString("transcriptFormat", TranscriptFormatMapper::GetNameForTranscriptFormat(m_transcriptFormat));
  }

  if(m_transcriptFilterHasBeenSet)
  {
   payload.WithObject("transcriptFilter", m_transcriptFilter.Jsonize());

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
