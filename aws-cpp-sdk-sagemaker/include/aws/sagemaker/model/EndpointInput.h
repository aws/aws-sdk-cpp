/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3InputMode.h>
#include <aws/sagemaker/model/ProcessingS3DataDistributionType.h>
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
   * <p>Input object for the endpoint</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointInput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API EndpointInput
  {
  public:
    EndpointInput();
    EndpointInput(Aws::Utils::Json::JsonView jsonValue);
    EndpointInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline EndpointInput& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline EndpointInput& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline EndpointInput& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline EndpointInput& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline EndpointInput& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline EndpointInput& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transfering data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline const ProcessingS3InputMode& GetS3InputMode() const{ return m_s3InputMode; }

    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transfering data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline bool S3InputModeHasBeenSet() const { return m_s3InputModeHasBeenSet; }

    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transfering data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline void SetS3InputMode(const ProcessingS3InputMode& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = value; }

    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transfering data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline void SetS3InputMode(ProcessingS3InputMode&& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = std::move(value); }

    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transfering data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline EndpointInput& WithS3InputMode(const ProcessingS3InputMode& value) { SetS3InputMode(value); return *this;}

    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transfering data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline EndpointInput& WithS3InputMode(ProcessingS3InputMode&& value) { SetS3InputMode(std::move(value)); return *this;}


    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an S3 key. Defauts to <code>FullyReplicated</code> </p>
     */
    inline const ProcessingS3DataDistributionType& GetS3DataDistributionType() const{ return m_s3DataDistributionType; }

    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an S3 key. Defauts to <code>FullyReplicated</code> </p>
     */
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }

    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an S3 key. Defauts to <code>FullyReplicated</code> </p>
     */
    inline void SetS3DataDistributionType(const ProcessingS3DataDistributionType& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }

    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an S3 key. Defauts to <code>FullyReplicated</code> </p>
     */
    inline void SetS3DataDistributionType(ProcessingS3DataDistributionType&& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = std::move(value); }

    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an S3 key. Defauts to <code>FullyReplicated</code> </p>
     */
    inline EndpointInput& WithS3DataDistributionType(const ProcessingS3DataDistributionType& value) { SetS3DataDistributionType(value); return *this;}

    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an S3 key. Defauts to <code>FullyReplicated</code> </p>
     */
    inline EndpointInput& WithS3DataDistributionType(ProcessingS3DataDistributionType&& value) { SetS3DataDistributionType(std::move(value)); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet;

    ProcessingS3InputMode m_s3InputMode;
    bool m_s3InputModeHasBeenSet;

    ProcessingS3DataDistributionType m_s3DataDistributionType;
    bool m_s3DataDistributionTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
