/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/RepositoryFilterType.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The filter settings used with image replication. Specifying a repository
   * filter to a replication rule provides a method for controlling which
   * repositories in a private registry are replicated. If no filters are added, the
   * contents of all repositories are replicated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RepositoryFilter">AWS
   * API Reference</a></p>
   */
  class RepositoryFilter
  {
  public:
    AWS_ECR_API RepositoryFilter() = default;
    AWS_ECR_API RepositoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RepositoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline const Aws::String& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::String>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::String>
    RepositoryFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline RepositoryFilterType GetFilterType() const { return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(RepositoryFilterType value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline RepositoryFilter& WithFilterType(RepositoryFilterType value) { SetFilterType(value); return *this;}
    ///@}
  private:

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;

    RepositoryFilterType m_filterType{RepositoryFilterType::NOT_SET};
    bool m_filterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
