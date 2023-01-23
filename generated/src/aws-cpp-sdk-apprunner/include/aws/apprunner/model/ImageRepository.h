/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ImageConfiguration.h>
#include <aws/apprunner/model/ImageRepositoryType.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes a source image repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ImageRepository">AWS
   * API Reference</a></p>
   */
  class ImageRepository
  {
  public:
    AWS_APPRUNNER_API ImageRepository();
    AWS_APPRUNNER_API ImageRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ImageRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline const Aws::String& GetImageIdentifier() const{ return m_imageIdentifier; }

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline bool ImageIdentifierHasBeenSet() const { return m_imageIdentifierHasBeenSet; }

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline void SetImageIdentifier(const Aws::String& value) { m_imageIdentifierHasBeenSet = true; m_imageIdentifier = value; }

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline void SetImageIdentifier(Aws::String&& value) { m_imageIdentifierHasBeenSet = true; m_imageIdentifier = std::move(value); }

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline void SetImageIdentifier(const char* value) { m_imageIdentifierHasBeenSet = true; m_imageIdentifier.assign(value); }

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline ImageRepository& WithImageIdentifier(const Aws::String& value) { SetImageIdentifier(value); return *this;}

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline ImageRepository& WithImageIdentifier(Aws::String&& value) { SetImageIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline ImageRepository& WithImageIdentifier(const char* value) { SetImageIdentifier(value); return *this;}


    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline const ImageConfiguration& GetImageConfiguration() const{ return m_imageConfiguration; }

    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }

    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline void SetImageConfiguration(const ImageConfiguration& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = value; }

    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline void SetImageConfiguration(ImageConfiguration&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::move(value); }

    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline ImageRepository& WithImageConfiguration(const ImageConfiguration& value) { SetImageConfiguration(value); return *this;}

    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline ImageRepository& WithImageConfiguration(ImageConfiguration&& value) { SetImageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline const ImageRepositoryType& GetImageRepositoryType() const{ return m_imageRepositoryType; }

    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline bool ImageRepositoryTypeHasBeenSet() const { return m_imageRepositoryTypeHasBeenSet; }

    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline void SetImageRepositoryType(const ImageRepositoryType& value) { m_imageRepositoryTypeHasBeenSet = true; m_imageRepositoryType = value; }

    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline void SetImageRepositoryType(ImageRepositoryType&& value) { m_imageRepositoryTypeHasBeenSet = true; m_imageRepositoryType = std::move(value); }

    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline ImageRepository& WithImageRepositoryType(const ImageRepositoryType& value) { SetImageRepositoryType(value); return *this;}

    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline ImageRepository& WithImageRepositoryType(ImageRepositoryType&& value) { SetImageRepositoryType(std::move(value)); return *this;}

  private:

    Aws::String m_imageIdentifier;
    bool m_imageIdentifierHasBeenSet = false;

    ImageConfiguration m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    ImageRepositoryType m_imageRepositoryType;
    bool m_imageRepositoryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
