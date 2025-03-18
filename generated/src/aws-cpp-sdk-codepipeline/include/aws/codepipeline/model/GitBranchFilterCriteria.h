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
   * <p>The Git repository branches specified as filter criteria to start the
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitBranchFilterCriteria">AWS
   * API Reference</a></p>
   */
  class GitBranchFilterCriteria
  {
  public:
    AWS_CODEPIPELINE_API GitBranchFilterCriteria() = default;
    AWS_CODEPIPELINE_API GitBranchFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitBranchFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of patterns of Git branches that, when a commit is pushed, are to be
     * included as criteria that starts the pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = Aws::Vector<Aws::String>>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = Aws::Vector<Aws::String>>
    GitBranchFilterCriteria& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    template<typename IncludesT = Aws::String>
    GitBranchFilterCriteria& AddIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes.emplace_back(std::forward<IncludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of patterns of Git branches that, when a commit is pushed, are to be
     * excluded from starting the pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = Aws::Vector<Aws::String>>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = Aws::Vector<Aws::String>>
    GitBranchFilterCriteria& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    template<typename ExcludesT = Aws::String>
    GitBranchFilterCriteria& AddExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes.emplace_back(std::forward<ExcludesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_includes;
    bool m_includesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludes;
    bool m_excludesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
