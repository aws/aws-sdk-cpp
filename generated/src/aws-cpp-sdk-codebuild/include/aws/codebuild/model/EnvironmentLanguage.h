/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/LanguageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/EnvironmentImage.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>A set of Docker images that are related by programming language and are
   * managed by CodeBuild.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/EnvironmentLanguage">AWS
   * API Reference</a></p>
   */
  class EnvironmentLanguage
  {
  public:
    AWS_CODEBUILD_API EnvironmentLanguage() = default;
    AWS_CODEBUILD_API EnvironmentLanguage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API EnvironmentLanguage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline LanguageType GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(LanguageType value) { m_languageHasBeenSet = true; m_language = value; }
    inline EnvironmentLanguage& WithLanguage(LanguageType value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline const Aws::Vector<EnvironmentImage>& GetImages() const { return m_images; }
    inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
    template<typename ImagesT = Aws::Vector<EnvironmentImage>>
    void SetImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images = std::forward<ImagesT>(value); }
    template<typename ImagesT = Aws::Vector<EnvironmentImage>>
    EnvironmentLanguage& WithImages(ImagesT&& value) { SetImages(std::forward<ImagesT>(value)); return *this;}
    template<typename ImagesT = EnvironmentImage>
    EnvironmentLanguage& AddImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images.emplace_back(std::forward<ImagesT>(value)); return *this; }
    ///@}
  private:

    LanguageType m_language{LanguageType::NOT_SET};
    bool m_languageHasBeenSet = false;

    Aws::Vector<EnvironmentImage> m_images;
    bool m_imagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
