/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/SeverityCounts.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A response that contains details on the results of a finding aggregation by
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/RepositoryAggregationResponse">AWS
   * API Reference</a></p>
   */
  class RepositoryAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API RepositoryAggregationResponse() = default;
    AWS_INSPECTOR2_API RepositoryAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API RepositoryAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository associated with the findings.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    RepositoryAggregationResponse& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RepositoryAggregationResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    RepositoryAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of container images impacted by the findings.</p>
     */
    inline long long GetAffectedImages() const { return m_affectedImages; }
    inline bool AffectedImagesHasBeenSet() const { return m_affectedImagesHasBeenSet; }
    inline void SetAffectedImages(long long value) { m_affectedImagesHasBeenSet = true; m_affectedImages = value; }
    inline RepositoryAggregationResponse& WithAffectedImages(long long value) { SetAffectedImages(value); return *this;}
    ///@}
  private:

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    long long m_affectedImages{0};
    bool m_affectedImagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
