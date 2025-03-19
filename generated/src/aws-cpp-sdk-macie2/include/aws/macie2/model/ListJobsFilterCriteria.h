/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/ListJobsFilterTerm.h>
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
   * <p>Specifies criteria for filtering the results of a request for information
   * about classification jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListJobsFilterCriteria">AWS
   * API Reference</a></p>
   */
  class ListJobsFilterCriteria
  {
  public:
    AWS_MACIE2_API ListJobsFilterCriteria() = default;
    AWS_MACIE2_API ListJobsFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ListJobsFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline const Aws::Vector<ListJobsFilterTerm>& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = Aws::Vector<ListJobsFilterTerm>>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = Aws::Vector<ListJobsFilterTerm>>
    ListJobsFilterCriteria& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    template<typename ExcludesT = ListJobsFilterTerm>
    ListJobsFilterCriteria& AddExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes.emplace_back(std::forward<ExcludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline const Aws::Vector<ListJobsFilterTerm>& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = Aws::Vector<ListJobsFilterTerm>>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = Aws::Vector<ListJobsFilterTerm>>
    ListJobsFilterCriteria& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    template<typename IncludesT = ListJobsFilterTerm>
    ListJobsFilterCriteria& AddIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes.emplace_back(std::forward<IncludesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ListJobsFilterTerm> m_excludes;
    bool m_excludesHasBeenSet = false;

    Aws::Vector<ListJobsFilterTerm> m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
