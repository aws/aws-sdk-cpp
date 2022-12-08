/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration for the payload for a recommendation job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobPayloadConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobPayloadConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobPayloadConfig();
    AWS_SAGEMAKER_API RecommendationJobPayloadConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobPayloadConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const{ return m_samplePayloadUrl; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline bool SamplePayloadUrlHasBeenSet() const { return m_samplePayloadUrlHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetSamplePayloadUrl(const Aws::String& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = value; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetSamplePayloadUrl(Aws::String&& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetSamplePayloadUrl(const char* value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline RecommendationJobPayloadConfig& WithSamplePayloadUrl(const Aws::String& value) { SetSamplePayloadUrl(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline RecommendationJobPayloadConfig& WithSamplePayloadUrl(Aws::String&& value) { SetSamplePayloadUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline RecommendationJobPayloadConfig& WithSamplePayloadUrl(const char* value) { SetSamplePayloadUrl(value); return *this;}


    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const{ return m_supportedContentTypes; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline void SetSupportedContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = value; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline void SetSupportedContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::move(value); }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline RecommendationJobPayloadConfig& WithSupportedContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedContentTypes(value); return *this;}

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline RecommendationJobPayloadConfig& WithSupportedContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedContentTypes(std::move(value)); return *this;}

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline RecommendationJobPayloadConfig& AddSupportedContentTypes(const Aws::String& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline RecommendationJobPayloadConfig& AddSupportedContentTypes(Aws::String&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline RecommendationJobPayloadConfig& AddSupportedContentTypes(const char* value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }

  private:

    Aws::String m_samplePayloadUrl;
    bool m_samplePayloadUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedContentTypes;
    bool m_supportedContentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
