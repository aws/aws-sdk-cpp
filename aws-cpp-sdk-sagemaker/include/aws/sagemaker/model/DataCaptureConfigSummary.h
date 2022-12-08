/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CaptureStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The currently active data capture configuration used by your
   * Endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataCaptureConfigSummary">AWS
   * API Reference</a></p>
   */
  class DataCaptureConfigSummary
  {
  public:
    AWS_SAGEMAKER_API DataCaptureConfigSummary();
    AWS_SAGEMAKER_API DataCaptureConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataCaptureConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether data capture is enabled or disabled.</p>
     */
    inline bool GetEnableCapture() const{ return m_enableCapture; }

    /**
     * <p>Whether data capture is enabled or disabled.</p>
     */
    inline bool EnableCaptureHasBeenSet() const { return m_enableCaptureHasBeenSet; }

    /**
     * <p>Whether data capture is enabled or disabled.</p>
     */
    inline void SetEnableCapture(bool value) { m_enableCaptureHasBeenSet = true; m_enableCapture = value; }

    /**
     * <p>Whether data capture is enabled or disabled.</p>
     */
    inline DataCaptureConfigSummary& WithEnableCapture(bool value) { SetEnableCapture(value); return *this;}


    /**
     * <p>Whether data capture is currently functional.</p>
     */
    inline const CaptureStatus& GetCaptureStatus() const{ return m_captureStatus; }

    /**
     * <p>Whether data capture is currently functional.</p>
     */
    inline bool CaptureStatusHasBeenSet() const { return m_captureStatusHasBeenSet; }

    /**
     * <p>Whether data capture is currently functional.</p>
     */
    inline void SetCaptureStatus(const CaptureStatus& value) { m_captureStatusHasBeenSet = true; m_captureStatus = value; }

    /**
     * <p>Whether data capture is currently functional.</p>
     */
    inline void SetCaptureStatus(CaptureStatus&& value) { m_captureStatusHasBeenSet = true; m_captureStatus = std::move(value); }

    /**
     * <p>Whether data capture is currently functional.</p>
     */
    inline DataCaptureConfigSummary& WithCaptureStatus(const CaptureStatus& value) { SetCaptureStatus(value); return *this;}

    /**
     * <p>Whether data capture is currently functional.</p>
     */
    inline DataCaptureConfigSummary& WithCaptureStatus(CaptureStatus&& value) { SetCaptureStatus(std::move(value)); return *this;}


    /**
     * <p>The percentage of requests being captured by your Endpoint.</p>
     */
    inline int GetCurrentSamplingPercentage() const{ return m_currentSamplingPercentage; }

    /**
     * <p>The percentage of requests being captured by your Endpoint.</p>
     */
    inline bool CurrentSamplingPercentageHasBeenSet() const { return m_currentSamplingPercentageHasBeenSet; }

    /**
     * <p>The percentage of requests being captured by your Endpoint.</p>
     */
    inline void SetCurrentSamplingPercentage(int value) { m_currentSamplingPercentageHasBeenSet = true; m_currentSamplingPercentage = value; }

    /**
     * <p>The percentage of requests being captured by your Endpoint.</p>
     */
    inline DataCaptureConfigSummary& WithCurrentSamplingPercentage(int value) { SetCurrentSamplingPercentage(value); return *this;}


    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline const Aws::String& GetDestinationS3Uri() const{ return m_destinationS3Uri; }

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline void SetDestinationS3Uri(const Aws::String& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = value; }

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline void SetDestinationS3Uri(Aws::String&& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline void SetDestinationS3Uri(const char* value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline DataCaptureConfigSummary& WithDestinationS3Uri(const Aws::String& value) { SetDestinationS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline DataCaptureConfigSummary& WithDestinationS3Uri(Aws::String&& value) { SetDestinationS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline DataCaptureConfigSummary& WithDestinationS3Uri(const char* value) { SetDestinationS3Uri(value); return *this;}


    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline DataCaptureConfigSummary& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline DataCaptureConfigSummary& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key being used to encrypt the data in Amazon S3.</p>
     */
    inline DataCaptureConfigSummary& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    bool m_enableCapture;
    bool m_enableCaptureHasBeenSet = false;

    CaptureStatus m_captureStatus;
    bool m_captureStatusHasBeenSet = false;

    int m_currentSamplingPercentage;
    bool m_currentSamplingPercentageHasBeenSet = false;

    Aws::String m_destinationS3Uri;
    bool m_destinationS3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
