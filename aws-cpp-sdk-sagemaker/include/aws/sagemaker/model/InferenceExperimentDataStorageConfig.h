/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CaptureContentTypeHeader.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon S3 location and configuration for storing inference experiment
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceExperimentDataStorageConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API InferenceExperimentDataStorageConfig
  {
  public:
    InferenceExperimentDataStorageConfig();
    InferenceExperimentDataStorageConfig(Aws::Utils::Json::JsonView jsonValue);
    InferenceExperimentDataStorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline InferenceExperimentDataStorageConfig& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline InferenceExperimentDataStorageConfig& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket where the inference experiment data is stored. </p>
     */
    inline InferenceExperimentDataStorageConfig& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline InferenceExperimentDataStorageConfig& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline InferenceExperimentDataStorageConfig& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that Amazon SageMaker uses to encrypt captured data when uploading
     * to Amazon S3. </p>
     */
    inline InferenceExperimentDataStorageConfig& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    
    inline const CaptureContentTypeHeader& GetContentType() const{ return m_contentType; }

    
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    
    inline void SetContentType(const CaptureContentTypeHeader& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    
    inline void SetContentType(CaptureContentTypeHeader&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    
    inline InferenceExperimentDataStorageConfig& WithContentType(const CaptureContentTypeHeader& value) { SetContentType(value); return *this;}

    
    inline InferenceExperimentDataStorageConfig& WithContentType(CaptureContentTypeHeader&& value) { SetContentType(std::move(value)); return *this;}

  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    CaptureContentTypeHeader m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
