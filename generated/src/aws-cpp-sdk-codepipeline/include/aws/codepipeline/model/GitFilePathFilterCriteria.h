/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The Git repository file paths specified as filter criteria to start the
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitFilePathFilterCriteria">AWS
   * API Reference</a></p>
   */
  class GitFilePathFilterCriteria
  {
  public:
    AWS_CODEPIPELINE_API GitFilePathFilterCriteria();
    AWS_CODEPIPELINE_API GitFilePathFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitFilePathFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludes() const{ return m_includes; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline void SetIncludes(const Aws::Vector<Aws::String>& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline void SetIncludes(Aws::Vector<Aws::String>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& WithIncludes(const Aws::Vector<Aws::String>& value) { SetIncludes(value); return *this;}

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& WithIncludes(Aws::Vector<Aws::String>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& AddIncludes(const Aws::String& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& AddIncludes(Aws::String&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be included as criteria that starts the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& AddIncludes(const char* value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }


    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline void SetExcludes(const Aws::Vector<Aws::String>& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline void SetExcludes(Aws::Vector<Aws::String>&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& WithExcludes(const Aws::Vector<Aws::String>& value) { SetExcludes(value); return *this;}

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& WithExcludes(Aws::Vector<Aws::String>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& AddExcludes(const Aws::String& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& AddExcludes(Aws::String&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of patterns of Git repository file paths that, when a commit is
     * pushed, are to be excluded from starting the pipeline.</p>
     */
    inline GitFilePathFilterCriteria& AddExcludes(const char* value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_includes;
    bool m_includesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludes;
    bool m_excludesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
