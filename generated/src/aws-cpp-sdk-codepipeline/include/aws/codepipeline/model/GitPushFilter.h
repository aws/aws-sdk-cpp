/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/GitTagFilterCriteria.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The event criteria that specify when a specified repository event will start
   * the pipeline for the specified trigger configuration, such as the lists of Git
   * tags to include and exclude.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitPushFilter">AWS
   * API Reference</a></p>
   */
  class GitPushFilter
  {
  public:
    AWS_CODEPIPELINE_API GitPushFilter();
    AWS_CODEPIPELINE_API GitPushFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitPushFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline const GitTagFilterCriteria& GetTags() const{ return m_tags; }

    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline void SetTags(const GitTagFilterCriteria& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline void SetTags(GitTagFilterCriteria&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline GitPushFilter& WithTags(const GitTagFilterCriteria& value) { SetTags(value); return *this;}

    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline GitPushFilter& WithTags(GitTagFilterCriteria&& value) { SetTags(std::move(value)); return *this;}

  private:

    GitTagFilterCriteria m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
