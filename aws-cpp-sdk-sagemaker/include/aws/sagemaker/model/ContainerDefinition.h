/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ImageConfig.h>
#include <aws/sagemaker/model/ContainerMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/MultiModelConfig.h>
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
   * <p>Describes the container, as part of model definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerDefinition
  {
  public:
    AWS_SAGEMAKER_API ContainerDefinition();
    AWS_SAGEMAKER_API ContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline const Aws::String& GetContainerHostname() const{ return m_containerHostname; }

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline bool ContainerHostnameHasBeenSet() const { return m_containerHostnameHasBeenSet; }

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline void SetContainerHostname(const Aws::String& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = value; }

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline void SetContainerHostname(Aws::String&& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = std::move(value); }

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline void SetContainerHostname(const char* value) { m_containerHostnameHasBeenSet = true; m_containerHostname.assign(value); }

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline ContainerDefinition& WithContainerHostname(const Aws::String& value) { SetContainerHostname(value); return *this;}

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline ContainerDefinition& WithContainerHostname(Aws::String&& value) { SetContainerHostname(std::move(value)); return *this;}

    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline ContainerDefinition& WithContainerHostname(const char* value) { SetContainerHostname(value); return *this;}


    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline ContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline ContainerDefinition& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline ContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a> </p>
     */
    inline const ImageConfig& GetImageConfig() const{ return m_imageConfig; }

    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a> </p>
     */
    inline bool ImageConfigHasBeenSet() const { return m_imageConfigHasBeenSet; }

    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a> </p>
     */
    inline void SetImageConfig(const ImageConfig& value) { m_imageConfigHasBeenSet = true; m_imageConfig = value; }

    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a> </p>
     */
    inline void SetImageConfig(ImageConfig&& value) { m_imageConfigHasBeenSet = true; m_imageConfig = std::move(value); }

    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a> </p>
     */
    inline ContainerDefinition& WithImageConfig(const ImageConfig& value) { SetImageConfig(value); return *this;}

    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a> </p>
     */
    inline ContainerDefinition& WithImageConfig(ImageConfig&& value) { SetImageConfig(std::move(value)); return *this;}


    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline const ContainerMode& GetMode() const{ return m_mode; }

    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline void SetMode(const ContainerMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline void SetMode(ContainerMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline ContainerDefinition& WithMode(const ContainerMode& value) { SetMode(value); return *this;}

    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline ContainerDefinition& WithMode(ContainerMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline ContainerDefinition& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline ContainerDefinition& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your IAM user account by default. If you
     * previously deactivated Amazon Web Services STS for a region, you need to
     * reactivate Amazon Web Services STS for that region. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline ContainerDefinition& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline ContainerDefinition& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline ContainerDefinition& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline ContainerDefinition& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}


    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const{ return m_inferenceSpecificationName; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(const Aws::String& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = value; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(Aws::String&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::move(value); }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(const char* value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName.assign(value); }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline ContainerDefinition& WithInferenceSpecificationName(const Aws::String& value) { SetInferenceSpecificationName(value); return *this;}

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline ContainerDefinition& WithInferenceSpecificationName(Aws::String&& value) { SetInferenceSpecificationName(std::move(value)); return *this;}

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline ContainerDefinition& WithInferenceSpecificationName(const char* value) { SetInferenceSpecificationName(value); return *this;}


    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline const MultiModelConfig& GetMultiModelConfig() const{ return m_multiModelConfig; }

    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline bool MultiModelConfigHasBeenSet() const { return m_multiModelConfigHasBeenSet; }

    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline void SetMultiModelConfig(const MultiModelConfig& value) { m_multiModelConfigHasBeenSet = true; m_multiModelConfig = value; }

    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline void SetMultiModelConfig(MultiModelConfig&& value) { m_multiModelConfigHasBeenSet = true; m_multiModelConfig = std::move(value); }

    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline ContainerDefinition& WithMultiModelConfig(const MultiModelConfig& value) { SetMultiModelConfig(value); return *this;}

    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline ContainerDefinition& WithMultiModelConfig(MultiModelConfig&& value) { SetMultiModelConfig(std::move(value)); return *this;}

  private:

    Aws::String m_containerHostname;
    bool m_containerHostnameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    ImageConfig m_imageConfig;
    bool m_imageConfigHasBeenSet = false;

    ContainerMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

    Aws::String m_inferenceSpecificationName;
    bool m_inferenceSpecificationNameHasBeenSet = false;

    MultiModelConfig m_multiModelConfig;
    bool m_multiModelConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
