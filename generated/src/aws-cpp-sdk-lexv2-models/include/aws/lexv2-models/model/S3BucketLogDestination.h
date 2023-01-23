/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies an Amazon S3 bucket for logging audio conversations</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/S3BucketLogDestination">AWS
   * API Reference</a></p>
   */
  class S3BucketLogDestination
  {
  public:
    AWS_LEXMODELSV2_API S3BucketLogDestination();
    AWS_LEXMODELSV2_API S3BucketLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API S3BucketLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline S3BucketLogDestination& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline S3BucketLogDestination& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS) key for
     * encrypting audio log files stored in an S3 bucket.</p>
     */
    inline S3BucketLogDestination& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline S3BucketLogDestination& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline S3BucketLogDestination& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline S3BucketLogDestination& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline const Aws::String& GetLogPrefix() const{ return m_logPrefix; }

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline bool LogPrefixHasBeenSet() const { return m_logPrefixHasBeenSet; }

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline void SetLogPrefix(const Aws::String& value) { m_logPrefixHasBeenSet = true; m_logPrefix = value; }

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline void SetLogPrefix(Aws::String&& value) { m_logPrefixHasBeenSet = true; m_logPrefix = std::move(value); }

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline void SetLogPrefix(const char* value) { m_logPrefixHasBeenSet = true; m_logPrefix.assign(value); }

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline S3BucketLogDestination& WithLogPrefix(const Aws::String& value) { SetLogPrefix(value); return *this;}

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline S3BucketLogDestination& WithLogPrefix(Aws::String&& value) { SetLogPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline S3BucketLogDestination& WithLogPrefix(const char* value) { SetLogPrefix(value); return *this;}

  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    Aws::String m_logPrefix;
    bool m_logPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
