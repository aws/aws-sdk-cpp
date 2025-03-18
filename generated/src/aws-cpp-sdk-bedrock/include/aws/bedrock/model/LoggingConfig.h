/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/CloudWatchConfig.h>
#include <aws/bedrock/model/S3Config.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Configuration fields for invocation logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class LoggingConfig
  {
  public:
    AWS_BEDROCK_API LoggingConfig() = default;
    AWS_BEDROCK_API LoggingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API LoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline const CloudWatchConfig& GetCloudWatchConfig() const { return m_cloudWatchConfig; }
    inline bool CloudWatchConfigHasBeenSet() const { return m_cloudWatchConfigHasBeenSet; }
    template<typename CloudWatchConfigT = CloudWatchConfig>
    void SetCloudWatchConfig(CloudWatchConfigT&& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = std::forward<CloudWatchConfigT>(value); }
    template<typename CloudWatchConfigT = CloudWatchConfig>
    LoggingConfig& WithCloudWatchConfig(CloudWatchConfigT&& value) { SetCloudWatchConfig(std::forward<CloudWatchConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    LoggingConfig& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to include text data in the log delivery.</p>
     */
    inline bool GetTextDataDeliveryEnabled() const { return m_textDataDeliveryEnabled; }
    inline bool TextDataDeliveryEnabledHasBeenSet() const { return m_textDataDeliveryEnabledHasBeenSet; }
    inline void SetTextDataDeliveryEnabled(bool value) { m_textDataDeliveryEnabledHasBeenSet = true; m_textDataDeliveryEnabled = value; }
    inline LoggingConfig& WithTextDataDeliveryEnabled(bool value) { SetTextDataDeliveryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to include image data in the log delivery.</p>
     */
    inline bool GetImageDataDeliveryEnabled() const { return m_imageDataDeliveryEnabled; }
    inline bool ImageDataDeliveryEnabledHasBeenSet() const { return m_imageDataDeliveryEnabledHasBeenSet; }
    inline void SetImageDataDeliveryEnabled(bool value) { m_imageDataDeliveryEnabledHasBeenSet = true; m_imageDataDeliveryEnabled = value; }
    inline LoggingConfig& WithImageDataDeliveryEnabled(bool value) { SetImageDataDeliveryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to include embeddings data in the log delivery.</p>
     */
    inline bool GetEmbeddingDataDeliveryEnabled() const { return m_embeddingDataDeliveryEnabled; }
    inline bool EmbeddingDataDeliveryEnabledHasBeenSet() const { return m_embeddingDataDeliveryEnabledHasBeenSet; }
    inline void SetEmbeddingDataDeliveryEnabled(bool value) { m_embeddingDataDeliveryEnabledHasBeenSet = true; m_embeddingDataDeliveryEnabled = value; }
    inline LoggingConfig& WithEmbeddingDataDeliveryEnabled(bool value) { SetEmbeddingDataDeliveryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to include video data in the log delivery.</p>
     */
    inline bool GetVideoDataDeliveryEnabled() const { return m_videoDataDeliveryEnabled; }
    inline bool VideoDataDeliveryEnabledHasBeenSet() const { return m_videoDataDeliveryEnabledHasBeenSet; }
    inline void SetVideoDataDeliveryEnabled(bool value) { m_videoDataDeliveryEnabledHasBeenSet = true; m_videoDataDeliveryEnabled = value; }
    inline LoggingConfig& WithVideoDataDeliveryEnabled(bool value) { SetVideoDataDeliveryEnabled(value); return *this;}
    ///@}
  private:

    CloudWatchConfig m_cloudWatchConfig;
    bool m_cloudWatchConfigHasBeenSet = false;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    bool m_textDataDeliveryEnabled{false};
    bool m_textDataDeliveryEnabledHasBeenSet = false;

    bool m_imageDataDeliveryEnabled{false};
    bool m_imageDataDeliveryEnabledHasBeenSet = false;

    bool m_embeddingDataDeliveryEnabled{false};
    bool m_embeddingDataDeliveryEnabledHasBeenSet = false;

    bool m_videoDataDeliveryEnabled{false};
    bool m_videoDataDeliveryEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
