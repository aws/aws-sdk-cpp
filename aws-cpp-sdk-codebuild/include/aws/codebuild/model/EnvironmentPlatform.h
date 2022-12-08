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
    AWS_CODEBUILD_API EnvironmentPlatform();
    AWS_CODEBUILD_API EnvironmentPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API EnvironmentPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The platform's name.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform's name.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform's name.</p>
     */
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform's name.</p>
     */
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform's name.</p>
     */
    inline EnvironmentPlatform& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform's name.</p>
     */
    inline EnvironmentPlatform& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline const Aws::Vector<EnvironmentLanguage>& GetLanguages() const{ return m_languages; }

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline bool LanguagesHasBeenSet() const { return m_languagesHasBeenSet; }

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline void SetLanguages(const Aws::Vector<EnvironmentLanguage>& value) { m_languagesHasBeenSet = true; m_languages = value; }

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline void SetLanguages(Aws::Vector<EnvironmentLanguage>&& value) { m_languagesHasBeenSet = true; m_languages = std::move(value); }

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline EnvironmentPlatform& WithLanguages(const Aws::Vector<EnvironmentLanguage>& value) { SetLanguages(value); return *this;}

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline EnvironmentPlatform& WithLanguages(Aws::Vector<EnvironmentLanguage>&& value) { SetLanguages(std::move(value)); return *this;}

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline EnvironmentPlatform& AddLanguages(const EnvironmentLanguage& value) { m_languagesHasBeenSet = true; m_languages.push_back(value); return *this; }

    /**
     * <p>The list of programming languages that are available for the specified
     * platform.</p>
     */
    inline EnvironmentPlatform& AddLanguages(EnvironmentLanguage&& value) { m_languagesHasBeenSet = true; m_languages.push_back(std::move(value)); return *this; }

  private:

    PlatformType m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<EnvironmentLanguage> m_languages;
    bool m_languagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
