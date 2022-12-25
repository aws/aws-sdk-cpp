/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the build badge for the build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectBadge">AWS
   * API Reference</a></p>
   */
  class ProjectBadge
  {
  public:
    AWS_CODEBUILD_API ProjectBadge();
    AWS_CODEBUILD_API ProjectBadge(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectBadge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline bool GetBadgeEnabled() const{ return m_badgeEnabled; }

    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline bool BadgeEnabledHasBeenSet() const { return m_badgeEnabledHasBeenSet; }

    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline void SetBadgeEnabled(bool value) { m_badgeEnabledHasBeenSet = true; m_badgeEnabled = value; }

    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline ProjectBadge& WithBadgeEnabled(bool value) { SetBadgeEnabled(value); return *this;}


    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline const Aws::String& GetBadgeRequestUrl() const{ return m_badgeRequestUrl; }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline bool BadgeRequestUrlHasBeenSet() const { return m_badgeRequestUrlHasBeenSet; }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline void SetBadgeRequestUrl(const Aws::String& value) { m_badgeRequestUrlHasBeenSet = true; m_badgeRequestUrl = value; }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline void SetBadgeRequestUrl(Aws::String&& value) { m_badgeRequestUrlHasBeenSet = true; m_badgeRequestUrl = std::move(value); }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline void SetBadgeRequestUrl(const char* value) { m_badgeRequestUrlHasBeenSet = true; m_badgeRequestUrl.assign(value); }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline ProjectBadge& WithBadgeRequestUrl(const Aws::String& value) { SetBadgeRequestUrl(value); return *this;}

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline ProjectBadge& WithBadgeRequestUrl(Aws::String&& value) { SetBadgeRequestUrl(std::move(value)); return *this;}

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p>
     */
    inline ProjectBadge& WithBadgeRequestUrl(const char* value) { SetBadgeRequestUrl(value); return *this;}

  private:

    bool m_badgeEnabled;
    bool m_badgeEnabledHasBeenSet = false;

    Aws::String m_badgeRequestUrl;
    bool m_badgeRequestUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
