/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/S3BucketTranscriptSource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Indicates the setting of the location where the transcript is
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TranscriptSourceSetting">AWS
   * API Reference</a></p>
   */
  class TranscriptSourceSetting
  {
  public:
    AWS_LEXMODELSV2_API TranscriptSourceSetting();
    AWS_LEXMODELSV2_API TranscriptSourceSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TranscriptSourceSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the setting of the Amazon S3 bucket where the transcript is
     * stored.</p>
     */
    inline const S3BucketTranscriptSource& GetS3BucketTranscriptSource() const{ return m_s3BucketTranscriptSource; }

    /**
     * <p>Indicates the setting of the Amazon S3 bucket where the transcript is
     * stored.</p>
     */
    inline bool S3BucketTranscriptSourceHasBeenSet() const { return m_s3BucketTranscriptSourceHasBeenSet; }

    /**
     * <p>Indicates the setting of the Amazon S3 bucket where the transcript is
     * stored.</p>
     */
    inline void SetS3BucketTranscriptSource(const S3BucketTranscriptSource& value) { m_s3BucketTranscriptSourceHasBeenSet = true; m_s3BucketTranscriptSource = value; }

    /**
     * <p>Indicates the setting of the Amazon S3 bucket where the transcript is
     * stored.</p>
     */
    inline void SetS3BucketTranscriptSource(S3BucketTranscriptSource&& value) { m_s3BucketTranscriptSourceHasBeenSet = true; m_s3BucketTranscriptSource = std::move(value); }

    /**
     * <p>Indicates the setting of the Amazon S3 bucket where the transcript is
     * stored.</p>
     */
    inline TranscriptSourceSetting& WithS3BucketTranscriptSource(const S3BucketTranscriptSource& value) { SetS3BucketTranscriptSource(value); return *this;}

    /**
     * <p>Indicates the setting of the Amazon S3 bucket where the transcript is
     * stored.</p>
     */
    inline TranscriptSourceSetting& WithS3BucketTranscriptSource(S3BucketTranscriptSource&& value) { SetS3BucketTranscriptSource(std::move(value)); return *this;}

  private:

    S3BucketTranscriptSource m_s3BucketTranscriptSource;
    bool m_s3BucketTranscriptSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
