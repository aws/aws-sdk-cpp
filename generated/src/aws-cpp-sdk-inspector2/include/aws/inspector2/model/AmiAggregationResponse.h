/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Provider.h>
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
 * <p>A response that contains the results of a finding aggregation by
 * AMI.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AmiAggregationResponse">AWS
 * API Reference</a></p>
 */
class AmiAggregationResponse {
 public:
  AWS_INSPECTOR2_API AmiAggregationResponse() = default;
  AWS_INSPECTOR2_API AmiAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AmiAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the AMI that findings were aggregated for.</p>
   */
  inline const Aws::String& GetAmi() const { return m_ami; }
  inline bool AmiHasBeenSet() const { return m_amiHasBeenSet; }
  template <typename AmiT = Aws::String>
  void SetAmi(AmiT&& value) {
    m_amiHasBeenSet = true;
    m_ami = std::forward<AmiT>(value);
  }
  template <typename AmiT = Aws::String>
  AmiAggregationResponse& WithAmi(AmiT&& value) {
    SetAmi(std::forward<AmiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID for the AMI.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AmiAggregationResponse& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud service provider associated with this Amazon Machine Image (AMI)
   * aggregation. Valid values:</p> <ul> <li> <p> <code>AWS</code> – Findings from
   * Amazon Web Services resources.</p> </li> <li> <p> <code>AZURE</code> – Findings
   * from Microsoft Azure resources.</p> </li> </ul>
   */
  inline Provider GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  inline void SetCloudProvider(Provider value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = value;
  }
  inline AmiAggregationResponse& WithCloudProvider(Provider value) {
    SetCloudProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud infrastructure partition associated with this AMI aggregation.
   * Valid values:</p> <ul> <li> <p> <code>aws</code> – Amazon Web Services
   * commercial Regions.</p> </li> <li> <p> <code>aws-cn</code> – Amazon Web Services
   * China Regions.</p> </li> <li> <p> <code>aws-us-gov</code> – Amazon Web Services
   * GovCloud (US) Regions.</p> </li> <li> <p> <code>AzureCloud</code> – Azure
   * commercial Regions.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudPartition() const { return m_cloudPartition; }
  inline bool CloudPartitionHasBeenSet() const { return m_cloudPartitionHasBeenSet; }
  template <typename CloudPartitionT = Aws::String>
  void SetCloudPartition(CloudPartitionT&& value) {
    m_cloudPartitionHasBeenSet = true;
    m_cloudPartition = std::forward<CloudPartitionT>(value);
  }
  template <typename CloudPartitionT = Aws::String>
  AmiAggregationResponse& WithCloudPartition(CloudPartitionT&& value) {
    SetCloudPartition(std::forward<CloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud Region associated with this AMI aggregation. The value format
   * depends on the cloud provider:</p> <ul> <li> <p>An Amazon Web Services Region,
   * such as <code>us-east-1</code>.</p> </li> <li> <p>An Azure region, such as
   * <code>eastus</code>.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudRegion() const { return m_cloudRegion; }
  inline bool CloudRegionHasBeenSet() const { return m_cloudRegionHasBeenSet; }
  template <typename CloudRegionT = Aws::String>
  void SetCloudRegion(CloudRegionT&& value) {
    m_cloudRegionHasBeenSet = true;
    m_cloudRegion = std::forward<CloudRegionT>(value);
  }
  template <typename CloudRegionT = Aws::String>
  AmiAggregationResponse& WithCloudRegion(CloudRegionT&& value) {
    SetCloudRegion(std::forward<CloudRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization ID for the AMI aggregation.</p>
   */
  inline const Aws::String& GetCloudOrgId() const { return m_cloudOrgId; }
  inline bool CloudOrgIdHasBeenSet() const { return m_cloudOrgIdHasBeenSet; }
  template <typename CloudOrgIdT = Aws::String>
  void SetCloudOrgId(CloudOrgIdT&& value) {
    m_cloudOrgIdHasBeenSet = true;
    m_cloudOrgId = std::forward<CloudOrgIdT>(value);
  }
  template <typename CloudOrgIdT = Aws::String>
  AmiAggregationResponse& WithCloudOrgId(CloudOrgIdT&& value) {
    SetCloudOrgId(std::forward<CloudOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account ID for the AMI aggregation.</p>
   */
  inline const Aws::String& GetCloudAccountId() const { return m_cloudAccountId; }
  inline bool CloudAccountIdHasBeenSet() const { return m_cloudAccountIdHasBeenSet; }
  template <typename CloudAccountIdT = Aws::String>
  void SetCloudAccountId(CloudAccountIdT&& value) {
    m_cloudAccountIdHasBeenSet = true;
    m_cloudAccountId = std::forward<CloudAccountIdT>(value);
  }
  template <typename CloudAccountIdT = Aws::String>
  AmiAggregationResponse& WithCloudAccountId(CloudAccountIdT&& value) {
    SetCloudAccountId(std::forward<CloudAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains the count of matched findings per severity.</p>
   */
  inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
  inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
  template <typename SeverityCountsT = SeverityCounts>
  void SetSeverityCounts(SeverityCountsT&& value) {
    m_severityCountsHasBeenSet = true;
    m_severityCounts = std::forward<SeverityCountsT>(value);
  }
  template <typename SeverityCountsT = SeverityCounts>
  AmiAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) {
    SetSeverityCounts(std::forward<SeverityCountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of Amazon EC2 instances using this AMI.</p>
   */
  inline long long GetAffectedInstances() const { return m_affectedInstances; }
  inline bool AffectedInstancesHasBeenSet() const { return m_affectedInstancesHasBeenSet; }
  inline void SetAffectedInstances(long long value) {
    m_affectedInstancesHasBeenSet = true;
    m_affectedInstances = value;
  }
  inline AmiAggregationResponse& WithAffectedInstances(long long value) {
    SetAffectedInstances(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ami;

  Aws::String m_accountId;

  Provider m_cloudProvider{Provider::NOT_SET};

  Aws::String m_cloudPartition;

  Aws::String m_cloudRegion;

  Aws::String m_cloudOrgId;

  Aws::String m_cloudAccountId;

  SeverityCounts m_severityCounts;

  long long m_affectedInstances{0};
  bool m_amiHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudPartitionHasBeenSet = false;
  bool m_cloudRegionHasBeenSet = false;
  bool m_cloudOrgIdHasBeenSet = false;
  bool m_cloudAccountIdHasBeenSet = false;
  bool m_severityCountsHasBeenSet = false;
  bool m_affectedInstancesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
