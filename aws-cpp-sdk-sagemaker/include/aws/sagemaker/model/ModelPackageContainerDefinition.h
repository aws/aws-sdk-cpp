/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/ModelInput.h>
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
   * <p>Describes the Docker container for the model package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ModelPackageContainerDefinition
  {
  public:
    AWS_SAGEMAKER_API ModelPackageContainerDefinition();
    AWS_SAGEMAKER_API ModelPackageContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline const Aws::String& GetContainerHostname() const{ return m_containerHostname; }

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline bool ContainerHostnameHasBeenSet() const { return m_containerHostnameHasBeenSet; }

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline void SetContainerHostname(const Aws::String& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = value; }

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline void SetContainerHostname(Aws::String&& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = std::move(value); }

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline void SetContainerHostname(const char* value) { m_containerHostnameHasBeenSet = true; m_containerHostname.assign(value); }

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline ModelPackageContainerDefinition& WithContainerHostname(const Aws::String& value) { SetContainerHostname(value); return *this;}

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline ModelPackageContainerDefinition& WithContainerHostname(Aws::String&& value) { SetContainerHostname(std::move(value)); return *this;}

    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline ModelPackageContainerDefinition& WithContainerHostname(const char* value) { SetContainerHostname(value); return *this;}


    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline ModelPackageContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline ModelPackageContainerDefinition& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline ModelPackageContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline ModelPackageContainerDefinition& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline ModelPackageContainerDefinition& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline ModelPackageContainerDefinition& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline ModelPackageContainerDefinition& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline ModelPackageContainerDefinition& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline ModelPackageContainerDefinition& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}


    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline ModelPackageContainerDefinition& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline ModelPackageContainerDefinition& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline ModelPackageContainerDefinition& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline ModelPackageContainerDefinition& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    /**
     * <p>A structure with Model Input details.</p>
     */
    inline const ModelInput& GetModelInput() const{ return m_modelInput; }

    /**
     * <p>A structure with Model Input details.</p>
     */
    inline bool ModelInputHasBeenSet() const { return m_modelInputHasBeenSet; }

    /**
     * <p>A structure with Model Input details.</p>
     */
    inline void SetModelInput(const ModelInput& value) { m_modelInputHasBeenSet = true; m_modelInput = value; }

    /**
     * <p>A structure with Model Input details.</p>
     */
    inline void SetModelInput(ModelInput&& value) { m_modelInputHasBeenSet = true; m_modelInput = std::move(value); }

    /**
     * <p>A structure with Model Input details.</p>
     */
    inline ModelPackageContainerDefinition& WithModelInput(const ModelInput& value) { SetModelInput(value); return *this;}

    /**
     * <p>A structure with Model Input details.</p>
     */
    inline ModelPackageContainerDefinition& WithModelInput(ModelInput&& value) { SetModelInput(std::move(value)); return *this;}


    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline ModelPackageContainerDefinition& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline ModelPackageContainerDefinition& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline ModelPackageContainerDefinition& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline ModelPackageContainerDefinition& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline ModelPackageContainerDefinition& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline ModelPackageContainerDefinition& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}


    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline const Aws::String& GetNearestModelName() const{ return m_nearestModelName; }

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline bool NearestModelNameHasBeenSet() const { return m_nearestModelNameHasBeenSet; }

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline void SetNearestModelName(const Aws::String& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = value; }

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline void SetNearestModelName(Aws::String&& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = std::move(value); }

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline void SetNearestModelName(const char* value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName.assign(value); }

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline ModelPackageContainerDefinition& WithNearestModelName(const Aws::String& value) { SetNearestModelName(value); return *this;}

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline ModelPackageContainerDefinition& WithNearestModelName(Aws::String&& value) { SetNearestModelName(std::move(value)); return *this;}

    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline ModelPackageContainerDefinition& WithNearestModelName(const char* value) { SetNearestModelName(value); return *this;}

  private:

    Aws::String m_containerHostname;
    bool m_containerHostnameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    ModelInput m_modelInput;
    bool m_modelInputHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    Aws::String m_nearestModelName;
    bool m_nearestModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
