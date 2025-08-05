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
   * <p>A response that contains the results of a finding aggregation by code
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeRepositoryAggregationResponse">AWS
   * API Reference</a></p>
   */
  class CodeRepositoryAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API CodeRepositoryAggregationResponse() = default;
    AWS_INSPECTOR2_API CodeRepositoryAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeRepositoryAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The names of the projects associated with the code repository.</p>
     */
    inline const Aws::String& GetProjectNames() const { return m_projectNames; }
    inline bool ProjectNamesHasBeenSet() const { return m_projectNamesHasBeenSet; }
    template<typename ProjectNamesT = Aws::String>
    void SetProjectNames(ProjectNamesT&& value) { m_projectNamesHasBeenSet = true; m_projectNames = std::forward<ProjectNamesT>(value); }
    template<typename ProjectNamesT = Aws::String>
    CodeRepositoryAggregationResponse& WithProjectNames(ProjectNamesT&& value) { SetProjectNames(std::forward<ProjectNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of repository provider for the code repository.</p>
     */
    inline const Aws::String& GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    template<typename ProviderTypeT = Aws::String>
    void SetProviderType(ProviderTypeT&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::forward<ProviderTypeT>(value); }
    template<typename ProviderTypeT = Aws::String>
    CodeRepositoryAggregationResponse& WithProviderType(ProviderTypeT&& value) { SetProviderType(std::forward<ProviderTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    CodeRepositoryAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active findings that have an exploit available for the code
     * repository.</p>
     */
    inline long long GetExploitAvailableActiveFindingsCount() const { return m_exploitAvailableActiveFindingsCount; }
    inline bool ExploitAvailableActiveFindingsCountHasBeenSet() const { return m_exploitAvailableActiveFindingsCountHasBeenSet; }
    inline void SetExploitAvailableActiveFindingsCount(long long value) { m_exploitAvailableActiveFindingsCountHasBeenSet = true; m_exploitAvailableActiveFindingsCount = value; }
    inline CodeRepositoryAggregationResponse& WithExploitAvailableActiveFindingsCount(long long value) { SetExploitAvailableActiveFindingsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active findings that have a fix available for the code
     * repository.</p>
     */
    inline long long GetFixAvailableActiveFindingsCount() const { return m_fixAvailableActiveFindingsCount; }
    inline bool FixAvailableActiveFindingsCountHasBeenSet() const { return m_fixAvailableActiveFindingsCountHasBeenSet; }
    inline void SetFixAvailableActiveFindingsCount(long long value) { m_fixAvailableActiveFindingsCountHasBeenSet = true; m_fixAvailableActiveFindingsCount = value; }
    inline CodeRepositoryAggregationResponse& WithFixAvailableActiveFindingsCount(long long value) { SetFixAvailableActiveFindingsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the code repository.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CodeRepositoryAggregationResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the code repository.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    CodeRepositoryAggregationResponse& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectNames;
    bool m_projectNamesHasBeenSet = false;

    Aws::String m_providerType;
    bool m_providerTypeHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    long long m_exploitAvailableActiveFindingsCount{0};
    bool m_exploitAvailableActiveFindingsCountHasBeenSet = false;

    long long m_fixAvailableActiveFindingsCount{0};
    bool m_fixAvailableActiveFindingsCountHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
