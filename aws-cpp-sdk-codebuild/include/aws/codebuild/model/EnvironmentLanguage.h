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
    AWS_CODEBUILD_API EnvironmentLanguage();
    AWS_CODEBUILD_API EnvironmentLanguage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API EnvironmentLanguage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline const LanguageType& GetLanguage() const{ return m_language; }

    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline void SetLanguage(const LanguageType& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline void SetLanguage(LanguageType&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline EnvironmentLanguage& WithLanguage(const LanguageType& value) { SetLanguage(value); return *this;}

    /**
     * <p>The programming language for the Docker images.</p>
     */
    inline EnvironmentLanguage& WithLanguage(LanguageType&& value) { SetLanguage(std::move(value)); return *this;}


    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline const Aws::Vector<EnvironmentImage>& GetImages() const{ return m_images; }

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline void SetImages(const Aws::Vector<EnvironmentImage>& value) { m_imagesHasBeenSet = true; m_images = value; }

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline void SetImages(Aws::Vector<EnvironmentImage>&& value) { m_imagesHasBeenSet = true; m_images = std::move(value); }

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline EnvironmentLanguage& WithImages(const Aws::Vector<EnvironmentImage>& value) { SetImages(value); return *this;}

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline EnvironmentLanguage& WithImages(Aws::Vector<EnvironmentImage>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline EnvironmentLanguage& AddImages(const EnvironmentImage& value) { m_imagesHasBeenSet = true; m_images.push_back(value); return *this; }

    /**
     * <p>The list of Docker images that are related by the specified programming
     * language.</p>
     */
    inline EnvironmentLanguage& AddImages(EnvironmentImage&& value) { m_imagesHasBeenSet = true; m_images.push_back(std::move(value)); return *this; }

  private:

    LanguageType m_language;
    bool m_languageHasBeenSet = false;

    Aws::Vector<EnvironmentImage> m_images;
    bool m_imagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
