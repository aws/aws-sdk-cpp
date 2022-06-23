/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TranscriptSourceSetting.h>
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

TranscriptSourceSetting::TranscriptSourceSetting() : 
    m_s3BucketTranscriptSourceHasBeenSet(false)
{
}

TranscriptSourceSetting::TranscriptSourceSetting(JsonView jsonValue) : 
    m_s3BucketTranscriptSourceHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptSourceSetting& TranscriptSourceSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3BucketTranscriptSource"))
  {
    m_s3BucketTranscriptSource = jsonValue.GetObject("s3BucketTranscriptSource");

    m_s3BucketTranscriptSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptSourceSetting::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketTranscriptSourceHasBeenSet)
  {
   payload.WithObject("s3BucketTranscriptSource", m_s3BucketTranscriptSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
