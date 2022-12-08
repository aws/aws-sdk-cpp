/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ConcatenationSinkType.h>
#include <aws/chime-sdk-media-pipelines/model/S3BucketSinkConfiguration.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The data sink of the configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ConcatenationSink">AWS
   * API Reference</a></p>
   */
  class ConcatenationSink
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSink();
    AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data sink in the configuration object.</p>
     */
    inline const ConcatenationSinkType& GetType() const{ return m_type; }

    /**
     * <p>The type of data sink in the configuration object.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data sink in the configuration object.</p>
     */
    inline void SetType(const ConcatenationSinkType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data sink in the configuration object.</p>
     */
    inline void SetType(ConcatenationSinkType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data sink in the configuration object.</p>
     */
    inline ConcatenationSink& WithType(const ConcatenationSinkType& value) { SetType(value); return *this;}

    /**
     * <p>The type of data sink in the configuration object.</p>
     */
    inline ConcatenationSink& WithType(ConcatenationSinkType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for an Amazon S3 bucket sink.</p>
     */
    inline const S3BucketSinkConfiguration& GetS3BucketSinkConfiguration() const{ return m_s3BucketSinkConfiguration; }

    /**
     * <p>The configuration settings for an Amazon S3 bucket sink.</p>
     */
    inline bool S3BucketSinkConfigurationHasBeenSet() const { return m_s3BucketSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for an Amazon S3 bucket sink.</p>
     */
    inline void SetS3BucketSinkConfiguration(const S3BucketSinkConfiguration& value) { m_s3BucketSinkConfigurationHasBeenSet = true; m_s3BucketSinkConfiguration = value; }

    /**
     * <p>The configuration settings for an Amazon S3 bucket sink.</p>
     */
    inline void SetS3BucketSinkConfiguration(S3BucketSinkConfiguration&& value) { m_s3BucketSinkConfigurationHasBeenSet = true; m_s3BucketSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for an Amazon S3 bucket sink.</p>
     */
    inline ConcatenationSink& WithS3BucketSinkConfiguration(const S3BucketSinkConfiguration& value) { SetS3BucketSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for an Amazon S3 bucket sink.</p>
     */
    inline ConcatenationSink& WithS3BucketSinkConfiguration(S3BucketSinkConfiguration&& value) { SetS3BucketSinkConfiguration(std::move(value)); return *this;}

  private:

    ConcatenationSinkType m_type;
    bool m_typeHasBeenSet = false;

    S3BucketSinkConfiguration m_s3BucketSinkConfiguration;
    bool m_s3BucketSinkConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
