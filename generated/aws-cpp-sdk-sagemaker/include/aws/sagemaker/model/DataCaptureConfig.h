/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CaptureContentTypeHeader.h>
#include <aws/sagemaker/model/CaptureOption.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataCaptureConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DataCaptureConfig
  {
  public:
    DataCaptureConfig();
    DataCaptureConfig(Aws::Utils::Json::JsonView jsonValue);
    DataCaptureConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline bool GetEnableCapture() const{ return m_enableCapture; }

    /**
     * <p/>
     */
    inline bool EnableCaptureHasBeenSet() const { return m_enableCaptureHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEnableCapture(bool value) { m_enableCaptureHasBeenSet = true; m_enableCapture = value; }

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithEnableCapture(bool value) { SetEnableCapture(value); return *this;}


    /**
     * <p/>
     */
    inline int GetInitialSamplingPercentage() const{ return m_initialSamplingPercentage; }

    /**
     * <p/>
     */
    inline bool InitialSamplingPercentageHasBeenSet() const { return m_initialSamplingPercentageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetInitialSamplingPercentage(int value) { m_initialSamplingPercentageHasBeenSet = true; m_initialSamplingPercentage = value; }

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithInitialSamplingPercentage(int value) { SetInitialSamplingPercentage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetDestinationS3Uri() const{ return m_destinationS3Uri; }

    /**
     * <p/>
     */
    inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDestinationS3Uri(const Aws::String& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = value; }

    /**
     * <p/>
     */
    inline void SetDestinationS3Uri(Aws::String&& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDestinationS3Uri(const char* value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri.assign(value); }

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithDestinationS3Uri(const Aws::String& value) { SetDestinationS3Uri(value); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithDestinationS3Uri(Aws::String&& value) { SetDestinationS3Uri(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithDestinationS3Uri(const char* value) { SetDestinationS3Uri(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p/>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p/>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<CaptureOption>& GetCaptureOptions() const{ return m_captureOptions; }

    /**
     * <p/>
     */
    inline bool CaptureOptionsHasBeenSet() const { return m_captureOptionsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCaptureOptions(const Aws::Vector<CaptureOption>& value) { m_captureOptionsHasBeenSet = true; m_captureOptions = value; }

    /**
     * <p/>
     */
    inline void SetCaptureOptions(Aws::Vector<CaptureOption>&& value) { m_captureOptionsHasBeenSet = true; m_captureOptions = std::move(value); }

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithCaptureOptions(const Aws::Vector<CaptureOption>& value) { SetCaptureOptions(value); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithCaptureOptions(Aws::Vector<CaptureOption>&& value) { SetCaptureOptions(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& AddCaptureOptions(const CaptureOption& value) { m_captureOptionsHasBeenSet = true; m_captureOptions.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DataCaptureConfig& AddCaptureOptions(CaptureOption&& value) { m_captureOptionsHasBeenSet = true; m_captureOptions.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const CaptureContentTypeHeader& GetCaptureContentTypeHeader() const{ return m_captureContentTypeHeader; }

    /**
     * <p/>
     */
    inline bool CaptureContentTypeHeaderHasBeenSet() const { return m_captureContentTypeHeaderHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCaptureContentTypeHeader(const CaptureContentTypeHeader& value) { m_captureContentTypeHeaderHasBeenSet = true; m_captureContentTypeHeader = value; }

    /**
     * <p/>
     */
    inline void SetCaptureContentTypeHeader(CaptureContentTypeHeader&& value) { m_captureContentTypeHeaderHasBeenSet = true; m_captureContentTypeHeader = std::move(value); }

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithCaptureContentTypeHeader(const CaptureContentTypeHeader& value) { SetCaptureContentTypeHeader(value); return *this;}

    /**
     * <p/>
     */
    inline DataCaptureConfig& WithCaptureContentTypeHeader(CaptureContentTypeHeader&& value) { SetCaptureContentTypeHeader(std::move(value)); return *this;}

  private:

    bool m_enableCapture;
    bool m_enableCaptureHasBeenSet;

    int m_initialSamplingPercentage;
    bool m_initialSamplingPercentageHasBeenSet;

    Aws::String m_destinationS3Uri;
    bool m_destinationS3UriHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::Vector<CaptureOption> m_captureOptions;
    bool m_captureOptionsHasBeenSet;

    CaptureContentTypeHeader m_captureContentTypeHeader;
    bool m_captureContentTypeHeaderHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
