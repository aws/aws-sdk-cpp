/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/PathFormat.h>
#include <aws/lexv2-models/model/TranscriptFormat.h>
#include <aws/lexv2-models/model/TranscriptFilter.h>
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
   * <p>The object representing the Amazon S3 bucket containing the transcript, as
   * well as the associated metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/S3BucketTranscriptSource">AWS
   * API Reference</a></p>
   */
  class S3BucketTranscriptSource
  {
  public:
    AWS_LEXMODELSV2_API S3BucketTranscriptSource() = default;
    AWS_LEXMODELSV2_API S3BucketTranscriptSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API S3BucketTranscriptSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    S3BucketTranscriptSource& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline const PathFormat& GetPathFormat() const { return m_pathFormat; }
    inline bool PathFormatHasBeenSet() const { return m_pathFormatHasBeenSet; }
    template<typename PathFormatT = PathFormat>
    void SetPathFormat(PathFormatT&& value) { m_pathFormatHasBeenSet = true; m_pathFormat = std::forward<PathFormatT>(value); }
    template<typename PathFormatT = PathFormat>
    S3BucketTranscriptSource& WithPathFormat(PathFormatT&& value) { SetPathFormat(std::forward<PathFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline TranscriptFormat GetTranscriptFormat() const { return m_transcriptFormat; }
    inline bool TranscriptFormatHasBeenSet() const { return m_transcriptFormatHasBeenSet; }
    inline void SetTranscriptFormat(TranscriptFormat value) { m_transcriptFormatHasBeenSet = true; m_transcriptFormat = value; }
    inline S3BucketTranscriptSource& WithTranscriptFormat(TranscriptFormat value) { SetTranscriptFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline const TranscriptFilter& GetTranscriptFilter() const { return m_transcriptFilter; }
    inline bool TranscriptFilterHasBeenSet() const { return m_transcriptFilterHasBeenSet; }
    template<typename TranscriptFilterT = TranscriptFilter>
    void SetTranscriptFilter(TranscriptFilterT&& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = std::forward<TranscriptFilterT>(value); }
    template<typename TranscriptFilterT = TranscriptFilter>
    S3BucketTranscriptSource& WithTranscriptFilter(TranscriptFilterT&& value) { SetTranscriptFilter(std::forward<TranscriptFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    S3BucketTranscriptSource& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    PathFormat m_pathFormat;
    bool m_pathFormatHasBeenSet = false;

    TranscriptFormat m_transcriptFormat{TranscriptFormat::NOT_SET};
    bool m_transcriptFormatHasBeenSet = false;

    TranscriptFilter m_transcriptFilter;
    bool m_transcriptFilterHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
