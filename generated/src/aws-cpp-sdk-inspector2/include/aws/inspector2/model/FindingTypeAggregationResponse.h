/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/SeverityCounts.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>A response that contains the results of a finding type
 * aggregation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FindingTypeAggregationResponse">AWS
 * API Reference</a></p>
 */
class FindingTypeAggregationResponse {
 public:
  AWS_INSPECTOR2_API FindingTypeAggregationResponse() = default;
  AWS_INSPECTOR2_API FindingTypeAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API FindingTypeAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account associated with the findings.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  FindingTypeAggregationResponse& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to sort results by.</p>
   */
  inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
  inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
  template <typename SeverityCountsT = SeverityCounts>
  void SetSeverityCounts(SeverityCountsT&& value) {
    m_severityCountsHasBeenSet = true;
    m_severityCounts = std::forward<SeverityCountsT>(value);
  }
  template <typename SeverityCountsT = SeverityCounts>
  FindingTypeAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) {
    SetSeverityCounts(std::forward<SeverityCountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings that have an exploit available.</p>
   */
  inline long long GetExploitAvailableCount() const { return m_exploitAvailableCount; }
  inline bool ExploitAvailableCountHasBeenSet() const { return m_exploitAvailableCountHasBeenSet; }
  inline void SetExploitAvailableCount(long long value) {
    m_exploitAvailableCountHasBeenSet = true;
    m_exploitAvailableCount = value;
  }
  inline FindingTypeAggregationResponse& WithExploitAvailableCount(long long value) {
    SetExploitAvailableCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Details about the number of fixes. </p>
   */
  inline long long GetFixAvailableCount() const { return m_fixAvailableCount; }
  inline bool FixAvailableCountHasBeenSet() const { return m_fixAvailableCountHasBeenSet; }
  inline void SetFixAvailableCount(long long value) {
    m_fixAvailableCountHasBeenSet = true;
    m_fixAvailableCount = value;
  }
  inline FindingTypeAggregationResponse& WithFixAvailableCount(long long value) {
    SetFixAvailableCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud service provider associated with this finding type aggregation.
   * Valid values:</p> <ul> <li> <p> <code>AWS</code> – Findings from Amazon Web
   * Services resources.</p> </li> <li> <p> <code>AZURE</code> – Findings from
   * Microsoft Azure resources.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::String>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::String>
  FindingTypeAggregationResponse& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account ID for the finding type aggregation.</p>
   */
  inline const Aws::String& GetCloudAccountId() const { return m_cloudAccountId; }
  inline bool CloudAccountIdHasBeenSet() const { return m_cloudAccountIdHasBeenSet; }
  template <typename CloudAccountIdT = Aws::String>
  void SetCloudAccountId(CloudAccountIdT&& value) {
    m_cloudAccountIdHasBeenSet = true;
    m_cloudAccountId = std::forward<CloudAccountIdT>(value);
  }
  template <typename CloudAccountIdT = Aws::String>
  FindingTypeAggregationResponse& WithCloudAccountId(CloudAccountIdT&& value) {
    SetCloudAccountId(std::forward<CloudAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization ID for the finding type aggregation.</p>
   */
  inline const Aws::String& GetCloudOrgId() const { return m_cloudOrgId; }
  inline bool CloudOrgIdHasBeenSet() const { return m_cloudOrgIdHasBeenSet; }
  template <typename CloudOrgIdT = Aws::String>
  void SetCloudOrgId(CloudOrgIdT&& value) {
    m_cloudOrgIdHasBeenSet = true;
    m_cloudOrgId = std::forward<CloudOrgIdT>(value);
  }
  template <typename CloudOrgIdT = Aws::String>
  FindingTypeAggregationResponse& WithCloudOrgId(CloudOrgIdT&& value) {
    SetCloudOrgId(std::forward<CloudOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud Region associated with this finding type aggregation. The value
   * format depends on the cloud provider:</p> <ul> <li> <p>An Amazon Web Services
   * Region, such as <code>us-east-1</code>.</p> </li> <li> <p>An Azure region, such
   * as <code>eastus</code>.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudRegion() const { return m_cloudRegion; }
  inline bool CloudRegionHasBeenSet() const { return m_cloudRegionHasBeenSet; }
  template <typename CloudRegionT = Aws::String>
  void SetCloudRegion(CloudRegionT&& value) {
    m_cloudRegionHasBeenSet = true;
    m_cloudRegion = std::forward<CloudRegionT>(value);
  }
  template <typename CloudRegionT = Aws::String>
  FindingTypeAggregationResponse& WithCloudRegion(CloudRegionT&& value) {
    SetCloudRegion(std::forward<CloudRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud infrastructure partition associated with this finding type
   * aggregation. Valid values:</p> <ul> <li> <p> <code>aws</code> – Amazon Web
   * Services commercial Regions.</p> </li> <li> <p> <code>aws-cn</code> – Amazon Web
   * Services China Regions.</p> </li> <li> <p> <code>aws-us-gov</code> – Amazon Web
   * Services GovCloud (US) Regions.</p> </li> <li> <p> <code>AzureCloud</code> –
   * Azure commercial Regions.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudPartition() const { return m_cloudPartition; }
  inline bool CloudPartitionHasBeenSet() const { return m_cloudPartitionHasBeenSet; }
  template <typename CloudPartitionT = Aws::String>
  void SetCloudPartition(CloudPartitionT&& value) {
    m_cloudPartitionHasBeenSet = true;
    m_cloudPartition = std::forward<CloudPartitionT>(value);
  }
  template <typename CloudPartitionT = Aws::String>
  FindingTypeAggregationResponse& WithCloudPartition(CloudPartitionT&& value) {
    SetCloudPartition(std::forward<CloudPartitionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  SeverityCounts m_severityCounts;

  long long m_exploitAvailableCount{0};

  long long m_fixAvailableCount{0};

  Aws::String m_cloudProvider;

  Aws::String m_cloudAccountId;

  Aws::String m_cloudOrgId;

  Aws::String m_cloudRegion;

  Aws::String m_cloudPartition;
  bool m_accountIdHasBeenSet = false;
  bool m_severityCountsHasBeenSet = false;
  bool m_exploitAvailableCountHasBeenSet = false;
  bool m_fixAvailableCountHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudAccountIdHasBeenSet = false;
  bool m_cloudOrgIdHasBeenSet = false;
  bool m_cloudRegionHasBeenSet = false;
  bool m_cloudPartitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
