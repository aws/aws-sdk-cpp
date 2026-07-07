/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>A response that contains the results of a serverless function
 * aggregation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ServerlessFunctionAggregationResponse">AWS
 * API Reference</a></p>
 */
class ServerlessFunctionAggregationResponse {
 public:
  AWS_INSPECTOR2_API ServerlessFunctionAggregationResponse() = default;
  AWS_INSPECTOR2_API ServerlessFunctionAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ServerlessFunctionAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource ID for the serverless function.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ServerlessFunctionAggregationResponse& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud service provider associated with this serverless function
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
  inline ServerlessFunctionAggregationResponse& WithCloudProvider(Provider value) {
    SetCloudProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account ID for the serverless function aggregation.</p>
   */
  inline const Aws::String& GetCloudAccountId() const { return m_cloudAccountId; }
  inline bool CloudAccountIdHasBeenSet() const { return m_cloudAccountIdHasBeenSet; }
  template <typename CloudAccountIdT = Aws::String>
  void SetCloudAccountId(CloudAccountIdT&& value) {
    m_cloudAccountIdHasBeenSet = true;
    m_cloudAccountId = std::forward<CloudAccountIdT>(value);
  }
  template <typename CloudAccountIdT = Aws::String>
  ServerlessFunctionAggregationResponse& WithCloudAccountId(CloudAccountIdT&& value) {
    SetCloudAccountId(std::forward<CloudAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud infrastructure partition associated with this serverless function
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
  ServerlessFunctionAggregationResponse& WithCloudPartition(CloudPartitionT&& value) {
    SetCloudPartition(std::forward<CloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud Region associated with this serverless function aggregation. The
   * value format depends on the cloud provider:</p> <ul> <li> <p>An Amazon Web
   * Services Region, such as <code>us-east-1</code>.</p> </li> <li> <p>An Azure
   * region, such as <code>eastus</code>.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudRegion() const { return m_cloudRegion; }
  inline bool CloudRegionHasBeenSet() const { return m_cloudRegionHasBeenSet; }
  template <typename CloudRegionT = Aws::String>
  void SetCloudRegion(CloudRegionT&& value) {
    m_cloudRegionHasBeenSet = true;
    m_cloudRegion = std::forward<CloudRegionT>(value);
  }
  template <typename CloudRegionT = Aws::String>
  ServerlessFunctionAggregationResponse& WithCloudRegion(CloudRegionT&& value) {
    SetCloudRegion(std::forward<CloudRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization ID for the serverless function aggregation.</p>
   */
  inline const Aws::String& GetCloudOrgId() const { return m_cloudOrgId; }
  inline bool CloudOrgIdHasBeenSet() const { return m_cloudOrgIdHasBeenSet; }
  template <typename CloudOrgIdT = Aws::String>
  void SetCloudOrgId(CloudOrgIdT&& value) {
    m_cloudOrgIdHasBeenSet = true;
    m_cloudOrgId = std::forward<CloudOrgIdT>(value);
  }
  template <typename CloudOrgIdT = Aws::String>
  ServerlessFunctionAggregationResponse& WithCloudOrgId(CloudOrgIdT&& value) {
    SetCloudOrgId(std::forward<CloudOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the serverless function.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  ServerlessFunctionAggregationResponse& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime of the serverless function.</p>
   */
  inline const Aws::String& GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  template <typename RuntimeT = Aws::String>
  void SetRuntime(RuntimeT&& value) {
    m_runtimeHasBeenSet = true;
    m_runtime = std::forward<RuntimeT>(value);
  }
  template <typename RuntimeT = Aws::String>
  ServerlessFunctionAggregationResponse& WithRuntime(RuntimeT&& value) {
    SetRuntime(std::forward<RuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the serverless function.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ServerlessFunctionAggregationResponse& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ServerlessFunctionAggregationResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID associated with the serverless function.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ServerlessFunctionAggregationResponse& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
  inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
  template <typename SeverityCountsT = SeverityCounts>
  void SetSeverityCounts(SeverityCountsT&& value) {
    m_severityCountsHasBeenSet = true;
    m_severityCounts = std::forward<SeverityCountsT>(value);
  }
  template <typename SeverityCountsT = SeverityCounts>
  ServerlessFunctionAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) {
    SetSeverityCounts(std::forward<SeverityCountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the serverless function was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  ServerlessFunctionAggregationResponse& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active findings with an exploit available for the serverless
   * function.</p>
   */
  inline long long GetExploitAvailableActiveFindingsCount() const { return m_exploitAvailableActiveFindingsCount; }
  inline bool ExploitAvailableActiveFindingsCountHasBeenSet() const { return m_exploitAvailableActiveFindingsCountHasBeenSet; }
  inline void SetExploitAvailableActiveFindingsCount(long long value) {
    m_exploitAvailableActiveFindingsCountHasBeenSet = true;
    m_exploitAvailableActiveFindingsCount = value;
  }
  inline ServerlessFunctionAggregationResponse& WithExploitAvailableActiveFindingsCount(long long value) {
    SetExploitAvailableActiveFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active findings with a fix available for the serverless
   * function.</p>
   */
  inline long long GetFixAvailableActiveFindingsCount() const { return m_fixAvailableActiveFindingsCount; }
  inline bool FixAvailableActiveFindingsCountHasBeenSet() const { return m_fixAvailableActiveFindingsCountHasBeenSet; }
  inline void SetFixAvailableActiveFindingsCount(long long value) {
    m_fixAvailableActiveFindingsCountHasBeenSet = true;
    m_fixAvailableActiveFindingsCount = value;
  }
  inline ServerlessFunctionAggregationResponse& WithFixAvailableActiveFindingsCount(long long value) {
    SetFixAvailableActiveFindingsCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  Provider m_cloudProvider{Provider::NOT_SET};

  Aws::String m_cloudAccountId;

  Aws::String m_cloudPartition;

  Aws::String m_cloudRegion;

  Aws::String m_cloudOrgId;

  Aws::String m_functionName;

  Aws::String m_runtime;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_accountId;

  SeverityCounts m_severityCounts;

  Aws::Utils::DateTime m_lastModifiedAt{};

  long long m_exploitAvailableActiveFindingsCount{0};

  long long m_fixAvailableActiveFindingsCount{0};
  bool m_resourceIdHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudAccountIdHasBeenSet = false;
  bool m_cloudPartitionHasBeenSet = false;
  bool m_cloudRegionHasBeenSet = false;
  bool m_cloudOrgIdHasBeenSet = false;
  bool m_functionNameHasBeenSet = false;
  bool m_runtimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_severityCountsHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
  bool m_exploitAvailableActiveFindingsCountHasBeenSet = false;
  bool m_fixAvailableActiveFindingsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
