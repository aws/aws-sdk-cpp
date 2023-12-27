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
   * <p>Configuration fields for invokation logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class LoggingConfig
  {
  public:
    AWS_BEDROCK_API LoggingConfig();
    AWS_BEDROCK_API LoggingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API LoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline const CloudWatchConfig& GetCloudWatchConfig() const{ return m_cloudWatchConfig; }

    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline bool CloudWatchConfigHasBeenSet() const { return m_cloudWatchConfigHasBeenSet; }

    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline void SetCloudWatchConfig(const CloudWatchConfig& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = value; }

    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline void SetCloudWatchConfig(CloudWatchConfig&& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = std::move(value); }

    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline LoggingConfig& WithCloudWatchConfig(const CloudWatchConfig& value) { SetCloudWatchConfig(value); return *this;}

    /**
     * <p>CloudWatch logging configuration.</p>
     */
    inline LoggingConfig& WithCloudWatchConfig(CloudWatchConfig&& value) { SetCloudWatchConfig(std::move(value)); return *this;}


    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline LoggingConfig& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    /**
     * <p>S3 configuration for storing log data.</p>
     */
    inline LoggingConfig& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>Set to include text data in the log delivery.</p>
     */
    inline bool GetTextDataDeliveryEnabled() const{ return m_textDataDeliveryEnabled; }

    /**
     * <p>Set to include text data in the log delivery.</p>
     */
    inline bool TextDataDeliveryEnabledHasBeenSet() const { return m_textDataDeliveryEnabledHasBeenSet; }

    /**
     * <p>Set to include text data in the log delivery.</p>
     */
    inline void SetTextDataDeliveryEnabled(bool value) { m_textDataDeliveryEnabledHasBeenSet = true; m_textDataDeliveryEnabled = value; }

    /**
     * <p>Set to include text data in the log delivery.</p>
     */
    inline LoggingConfig& WithTextDataDeliveryEnabled(bool value) { SetTextDataDeliveryEnabled(value); return *this;}


    /**
     * <p>Set to include image data in the log delivery.</p>
     */
    inline bool GetImageDataDeliveryEnabled() const{ return m_imageDataDeliveryEnabled; }

    /**
     * <p>Set to include image data in the log delivery.</p>
     */
    inline bool ImageDataDeliveryEnabledHasBeenSet() const { return m_imageDataDeliveryEnabledHasBeenSet; }

    /**
     * <p>Set to include image data in the log delivery.</p>
     */
    inline void SetImageDataDeliveryEnabled(bool value) { m_imageDataDeliveryEnabledHasBeenSet = true; m_imageDataDeliveryEnabled = value; }

    /**
     * <p>Set to include image data in the log delivery.</p>
     */
    inline LoggingConfig& WithImageDataDeliveryEnabled(bool value) { SetImageDataDeliveryEnabled(value); return *this;}


    /**
     * <p>Set to include embeddings data in the log delivery.</p>
     */
    inline bool GetEmbeddingDataDeliveryEnabled() const{ return m_embeddingDataDeliveryEnabled; }

    /**
     * <p>Set to include embeddings data in the log delivery.</p>
     */
    inline bool EmbeddingDataDeliveryEnabledHasBeenSet() const { return m_embeddingDataDeliveryEnabledHasBeenSet; }

    /**
     * <p>Set to include embeddings data in the log delivery.</p>
     */
    inline void SetEmbeddingDataDeliveryEnabled(bool value) { m_embeddingDataDeliveryEnabledHasBeenSet = true; m_embeddingDataDeliveryEnabled = value; }

    /**
     * <p>Set to include embeddings data in the log delivery.</p>
     */
    inline LoggingConfig& WithEmbeddingDataDeliveryEnabled(bool value) { SetEmbeddingDataDeliveryEnabled(value); return *this;}

  private:

    CloudWatchConfig m_cloudWatchConfig;
    bool m_cloudWatchConfigHasBeenSet = false;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    bool m_textDataDeliveryEnabled;
    bool m_textDataDeliveryEnabledHasBeenSet = false;

    bool m_imageDataDeliveryEnabled;
    bool m_imageDataDeliveryEnabledHasBeenSet = false;

    bool m_embeddingDataDeliveryEnabled;
    bool m_embeddingDataDeliveryEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
