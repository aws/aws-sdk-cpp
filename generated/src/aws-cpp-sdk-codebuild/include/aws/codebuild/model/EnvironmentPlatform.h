/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/PlatformType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/EnvironmentLanguage.h>
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
   * <p>A set of Docker images that are related by platform and are managed by
   * CodeBuild.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/EnvironmentPlatform">AWS
   * API Reference</a></p>
   */
  class EnvironmentPlatform
  {
  public:
    AWS_CODEBUILD_API EnvironmentPlatform() = default;
    AWS_CODEBUILD_API EnvironmentPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API EnvironmentPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The platform's name.</p>
     */
    inline PlatformType GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformType value) { m_platformHasBeenSet = true; m_platform = value; }
    inline EnvironmentPlatform& WithPlatform(PlatformType value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline const Aws::Vector<EnvironmentLanguage>& GetLanguages() const { return m_languages; }
    inline bool LanguagesHasBeenSet() const { return m_languagesHasBeenSet; }
    template<typename LanguagesT = Aws::Vector<EnvironmentLanguage>>
    void SetLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages = std::forward<LanguagesT>(value); }
    template<typename LanguagesT = Aws::Vector<EnvironmentLanguage>>
    EnvironmentPlatform& WithLanguages(LanguagesT&& value) { SetLanguages(std::forward<LanguagesT>(value)); return *this;}
    template<typename LanguagesT = EnvironmentLanguage>
    EnvironmentPlatform& AddLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages.emplace_back(std::forward<LanguagesT>(value)); return *this; }
    ///@}
  private:

    PlatformType m_platform{PlatformType::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::Vector<EnvironmentLanguage> m_languages;
    bool m_languagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
