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
    AWS_MACIE2_API Scoping();
    AWS_MACIE2_API Scoping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Scoping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline const JobScopingBlock& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline void SetExcludes(const JobScopingBlock& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline void SetExcludes(JobScopingBlock&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline Scoping& WithExcludes(const JobScopingBlock& value) { SetExcludes(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * exclude from the analysis.</p>
     */
    inline Scoping& WithExcludes(JobScopingBlock&& value) { SetExcludes(std::move(value)); return *this;}


    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline const JobScopingBlock& GetIncludes() const{ return m_includes; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline void SetIncludes(const JobScopingBlock& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline void SetIncludes(JobScopingBlock&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline Scoping& WithIncludes(const JobScopingBlock& value) { SetIncludes(value); return *this;}

    /**
     * <p>The property- and tag-based conditions that determine which objects to
     * include in the analysis.</p>
     */
    inline Scoping& WithIncludes(JobScopingBlock&& value) { SetIncludes(std::move(value)); return *this;}

  private:

    JobScopingBlock m_excludes;
    bool m_excludesHasBeenSet = false;

    JobScopingBlock m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
