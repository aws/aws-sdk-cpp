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
    AWS_APPRUNNER_API ImageRepository() = default;
    AWS_APPRUNNER_API ImageRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ImageRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an image.</p> <p>For an image in Amazon Elastic Container
     * Registry (Amazon ECR), this is an image name. For the image name format, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
     * an image</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline const Aws::String& GetImageIdentifier() const { return m_imageIdentifier; }
    inline bool ImageIdentifierHasBeenSet() const { return m_imageIdentifierHasBeenSet; }
    template<typename ImageIdentifierT = Aws::String>
    void SetImageIdentifier(ImageIdentifierT&& value) { m_imageIdentifierHasBeenSet = true; m_imageIdentifier = std::forward<ImageIdentifierT>(value); }
    template<typename ImageIdentifierT = Aws::String>
    ImageRepository& WithImageIdentifier(ImageIdentifierT&& value) { SetImageIdentifier(std::forward<ImageIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for running the identified image.</p>
     */
    inline const ImageConfiguration& GetImageConfiguration() const { return m_imageConfiguration; }
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }
    template<typename ImageConfigurationT = ImageConfiguration>
    void SetImageConfiguration(ImageConfigurationT&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::forward<ImageConfigurationT>(value); }
    template<typename ImageConfigurationT = ImageConfiguration>
    ImageRepository& WithImageConfiguration(ImageConfigurationT&& value) { SetImageConfiguration(std::forward<ImageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the image repository. This reflects the repository provider and
     * whether the repository is private or public.</p>
     */
    inline ImageRepositoryType GetImageRepositoryType() const { return m_imageRepositoryType; }
    inline bool ImageRepositoryTypeHasBeenSet() const { return m_imageRepositoryTypeHasBeenSet; }
    inline void SetImageRepositoryType(ImageRepositoryType value) { m_imageRepositoryTypeHasBeenSet = true; m_imageRepositoryType = value; }
    inline ImageRepository& WithImageRepositoryType(ImageRepositoryType value) { SetImageRepositoryType(value); return *this;}
    ///@}
  private:

    Aws::String m_imageIdentifier;
    bool m_imageIdentifierHasBeenSet = false;

    ImageConfiguration m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    ImageRepositoryType m_imageRepositoryType{ImageRepositoryType::NOT_SET};
    bool m_imageRepositoryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
