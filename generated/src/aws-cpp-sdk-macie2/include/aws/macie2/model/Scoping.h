/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobScopingBlock.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies one or more property- and tag-based conditions that define criteria
   * for including or excluding S3 objects from a classification job. Exclude
   * conditions take precedence over include conditions.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Scoping">AWS
   * API Reference</a></p>
   */
  class Scoping
  {
  public:
    AWS_MACIE2_API Scoping() = default;
    AWS_MACIE2_API Scoping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Scoping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline const JobScopingBlock& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = JobScopingBlock>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = JobScopingBlock>
    Scoping& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline const JobScopingBlock& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = JobScopingBlock>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = JobScopingBlock>
    Scoping& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    ///@}
  private:

    JobScopingBlock m_excludes;
    bool m_excludesHasBeenSet = false;

    JobScopingBlock m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
