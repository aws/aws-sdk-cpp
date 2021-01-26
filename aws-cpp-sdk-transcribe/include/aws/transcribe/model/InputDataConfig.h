/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>The object that contains the Amazon S3 object location and access role
   * required to train and tune your custom language model.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API InputDataConfig
  {
  public:
    InputDataConfig();
    InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to train your custom language model.</p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline const Aws::String& GetTuningDataS3Uri() const{ return m_tuningDataS3Uri; }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline bool TuningDataS3UriHasBeenSet() const { return m_tuningDataS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline void SetTuningDataS3Uri(const Aws::String& value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri = value; }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline void SetTuningDataS3Uri(Aws::String&& value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline void SetTuningDataS3Uri(const char* value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline InputDataConfig& WithTuningDataS3Uri(const Aws::String& value) { SetTuningDataS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline InputDataConfig& WithTuningDataS3Uri(Aws::String&& value) { SetTuningDataS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 prefix you specify to access the plain text files that you use
     * to tune your custom language model.</p>
     */
    inline InputDataConfig& WithTuningDataS3Uri(const char* value) { SetTuningDataS3Uri(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline InputDataConfig& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline InputDataConfig& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the permissions
     * you've given Amazon Transcribe to access your Amazon S3 buckets containing your
     * media files or text data.</p>
     */
    inline InputDataConfig& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    Aws::String m_tuningDataS3Uri;
    bool m_tuningDataS3UriHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
