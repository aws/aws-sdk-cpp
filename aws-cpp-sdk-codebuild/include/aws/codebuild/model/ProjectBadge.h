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
  class AWS_CODEBUILD_API ProjectBadge
  {
  public:
    ProjectBadge();
    ProjectBadge(Aws::Utils::Json::JsonView jsonValue);
    ProjectBadge& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline const Aws::String& GetBadgeRequestUrl() const{ return m_badgeRequestUrl; }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline bool BadgeRequestUrlHasBeenSet() const { return m_badgeRequestUrlHasBeenSet; }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline void SetBadgeRequestUrl(const Aws::String& value) { m_badgeRequestUrlHasBeenSet = true; m_badgeRequestUrl = value; }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline void SetBadgeRequestUrl(Aws::String&& value) { m_badgeRequestUrlHasBeenSet = true; m_badgeRequestUrl = std::move(value); }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline void SetBadgeRequestUrl(const char* value) { m_badgeRequestUrlHasBeenSet = true; m_badgeRequestUrl.assign(value); }

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline ProjectBadge& WithBadgeRequestUrl(const Aws::String& value) { SetBadgeRequestUrl(value); return *this;}

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline ProjectBadge& WithBadgeRequestUrl(Aws::String&& value) { SetBadgeRequestUrl(std::move(value)); return *this;}

    /**
     * <p>The publicly-accessible URL through which you can access the build badge for
     * your project. </p> <p>The publicly accessible URL through which you can access
     * the build badge for your project. </p>
     */
    inline ProjectBadge& WithBadgeRequestUrl(const char* value) { SetBadgeRequestUrl(value); return *this;}

  private:

    bool m_badgeEnabled;
    bool m_badgeEnabledHasBeenSet;

    Aws::String m_badgeRequestUrl;
    bool m_badgeRequestUrlHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
