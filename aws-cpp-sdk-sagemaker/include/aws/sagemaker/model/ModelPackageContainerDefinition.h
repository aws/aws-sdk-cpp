/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Describes the Docker container for the model package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageContainerDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelPackageContainerDefinition
  {
  public:
    ModelPackageContainerDefinition();
    ModelPackageContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    ModelPackageContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline ModelPackageContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline ModelPackageContainerDefinition& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by Amazon SageMaker, the inference code must meet Amazon
     * SageMaker requirements. Amazon SageMaker supports both
     * <code>registry/repository[:tag]</code> and
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
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline ModelPackageContainerDefinition& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline ModelPackageContainerDefinition& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline ModelPackageContainerDefinition& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}


    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline ModelPackageContainerDefinition& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline ModelPackageContainerDefinition& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The AWS Marketplace product ID of the model package.</p>
     */
    inline ModelPackageContainerDefinition& WithProductId(const char* value) { SetProductId(value); return *this;}

  private:

    Aws::String m_containerHostname;
    bool m_containerHostnameHasBeenSet;

    Aws::String m_image;
    bool m_imageHasBeenSet;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
