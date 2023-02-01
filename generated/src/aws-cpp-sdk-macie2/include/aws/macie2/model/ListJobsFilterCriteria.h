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
    AWS_MACIE2_API ListJobsFilterCriteria();
    AWS_MACIE2_API ListJobsFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ListJobsFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline const Aws::Vector<ListJobsFilterTerm>& GetExcludes() const{ return m_excludes; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline void SetExcludes(const Aws::Vector<ListJobsFilterTerm>& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline void SetExcludes(Aws::Vector<ListJobsFilterTerm>&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline ListJobsFilterCriteria& WithExcludes(const Aws::Vector<ListJobsFilterTerm>& value) { SetExcludes(value); return *this;}

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline ListJobsFilterCriteria& WithExcludes(Aws::Vector<ListJobsFilterTerm>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline ListJobsFilterCriteria& AddExcludes(const ListJobsFilterTerm& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * exclude from the results.</p>
     */
    inline ListJobsFilterCriteria& AddExcludes(ListJobsFilterTerm&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline const Aws::Vector<ListJobsFilterTerm>& GetIncludes() const{ return m_includes; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline void SetIncludes(const Aws::Vector<ListJobsFilterTerm>& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline void SetIncludes(Aws::Vector<ListJobsFilterTerm>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline ListJobsFilterCriteria& WithIncludes(const Aws::Vector<ListJobsFilterTerm>& value) { SetIncludes(value); return *this;}

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline ListJobsFilterCriteria& WithIncludes(Aws::Vector<ListJobsFilterTerm>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline ListJobsFilterCriteria& AddIncludes(const ListJobsFilterTerm& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each condition that determines which jobs to
     * include in the results.</p>
     */
    inline ListJobsFilterCriteria& AddIncludes(ListJobsFilterTerm&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ListJobsFilterTerm> m_excludes;
    bool m_excludesHasBeenSet = false;

    Aws::Vector<ListJobsFilterTerm> m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
