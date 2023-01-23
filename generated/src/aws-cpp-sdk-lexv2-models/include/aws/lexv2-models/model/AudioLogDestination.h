/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/S3BucketLogDestination.h>
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
   * <p>The location of audio log files collected when conversation logging is
   * enabled for a bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AudioLogDestination">AWS
   * API Reference</a></p>
   */
  class AudioLogDestination
  {
  public:
    AWS_LEXMODELSV2_API AudioLogDestination();
    AWS_LEXMODELSV2_API AudioLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AudioLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket where the audio log files are stored. The IAM role
     * specified in the <code>roleArn</code> parameter of the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation must have permission to write to this bucket.</p>
     */
    inline const S3BucketLogDestination& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The Amazon S3 bucket where the audio log files are stored. The IAM role
     * specified in the <code>roleArn</code> parameter of the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation must have permission to write to this bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the audio log files are stored. The IAM role
     * specified in the <code>roleArn</code> parameter of the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation must have permission to write to this bucket.</p>
     */
    inline void SetS3Bucket(const S3BucketLogDestination& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The Amazon S3 bucket where the audio log files are stored. The IAM role
     * specified in the <code>roleArn</code> parameter of the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation must have permission to write to this bucket.</p>
     */
    inline void SetS3Bucket(S3BucketLogDestination&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the audio log files are stored. The IAM role
     * specified in the <code>roleArn</code> parameter of the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation must have permission to write to this bucket.</p>
     */
    inline AudioLogDestination& WithS3Bucket(const S3BucketLogDestination& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the audio log files are stored. The IAM role
     * specified in the <code>roleArn</code> parameter of the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation must have permission to write to this bucket.</p>
     */
    inline AudioLogDestination& WithS3Bucket(S3BucketLogDestination&& value) { SetS3Bucket(std::move(value)); return *this;}

  private:

    S3BucketLogDestination m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
