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
    AWS_LEXMODELSV2_API S3BucketTranscriptSource();
    AWS_LEXMODELSV2_API S3BucketTranscriptSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API S3BucketTranscriptSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline S3BucketTranscriptSource& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline S3BucketTranscriptSource& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket containing the transcript and the associated
     * metadata.</p>
     */
    inline S3BucketTranscriptSource& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline const PathFormat& GetPathFormat() const{ return m_pathFormat; }

    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline bool PathFormatHasBeenSet() const { return m_pathFormatHasBeenSet; }

    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline void SetPathFormat(const PathFormat& value) { m_pathFormatHasBeenSet = true; m_pathFormat = value; }

    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline void SetPathFormat(PathFormat&& value) { m_pathFormatHasBeenSet = true; m_pathFormat = std::move(value); }

    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline S3BucketTranscriptSource& WithPathFormat(const PathFormat& value) { SetPathFormat(value); return *this;}

    /**
     * <p>The object that contains a path format that will be applied when Amazon Lex
     * reads the transcript file in the bucket you provide. Specify this object if you
     * only want Lex to read a subset of files in your Amazon S3 bucket.</p>
     */
    inline S3BucketTranscriptSource& WithPathFormat(PathFormat&& value) { SetPathFormat(std::move(value)); return *this;}


    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline const TranscriptFormat& GetTranscriptFormat() const{ return m_transcriptFormat; }

    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline bool TranscriptFormatHasBeenSet() const { return m_transcriptFormatHasBeenSet; }

    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline void SetTranscriptFormat(const TranscriptFormat& value) { m_transcriptFormatHasBeenSet = true; m_transcriptFormat = value; }

    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline void SetTranscriptFormat(TranscriptFormat&& value) { m_transcriptFormatHasBeenSet = true; m_transcriptFormat = std::move(value); }

    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline S3BucketTranscriptSource& WithTranscriptFormat(const TranscriptFormat& value) { SetTranscriptFormat(value); return *this;}

    /**
     * <p>The format of the transcript content. Currently, Genie only supports the
     * Amazon Lex transcript format.</p>
     */
    inline S3BucketTranscriptSource& WithTranscriptFormat(TranscriptFormat&& value) { SetTranscriptFormat(std::move(value)); return *this;}


    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline const TranscriptFilter& GetTranscriptFilter() const{ return m_transcriptFilter; }

    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline bool TranscriptFilterHasBeenSet() const { return m_transcriptFilterHasBeenSet; }

    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline void SetTranscriptFilter(const TranscriptFilter& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = value; }

    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline void SetTranscriptFilter(TranscriptFilter&& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = std::move(value); }

    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline S3BucketTranscriptSource& WithTranscriptFilter(const TranscriptFilter& value) { SetTranscriptFilter(value); return *this;}

    /**
     * <p>The object that contains the filter which will be applied when Amazon Lex
     * reads through the Amazon S3 bucket. Specify this object if you want Amazon Lex
     * to read only a subset of the Amazon S3 bucket based on the filter you
     * provide.</p>
     */
    inline S3BucketTranscriptSource& WithTranscriptFilter(TranscriptFilter&& value) { SetTranscriptFilter(std::move(value)); return *this;}


    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline S3BucketTranscriptSource& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline S3BucketTranscriptSource& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key that customer use to encrypt their Amazon S3 bucket.
     * Only use this field if your bucket is encrypted using a customer managed KMS
     * key.</p>
     */
    inline S3BucketTranscriptSource& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    PathFormat m_pathFormat;
    bool m_pathFormatHasBeenSet = false;

    TranscriptFormat m_transcriptFormat;
    bool m_transcriptFormatHasBeenSet = false;

    TranscriptFilter m_transcriptFilter;
    bool m_transcriptFilterHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
