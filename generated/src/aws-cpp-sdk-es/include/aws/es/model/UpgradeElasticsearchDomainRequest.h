/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DeploymentStrategyOverrideOptions.h>

#include <utility>

namespace Aws {
namespace ElasticsearchService {
namespace Model {

/**
 * <p> Container for request parameters to <code> <a>UpgradeElasticsearchDomain</a>
 * </code> operation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomainRequest">AWS
 * API Reference</a></p>
 */
class UpgradeElasticsearchDomainRequest : public ElasticsearchServiceRequest {
 public:
  AWS_ELASTICSEARCHSERVICE_API UpgradeElasticsearchDomainRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpgradeElasticsearchDomain"; }

  AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  UpgradeElasticsearchDomainRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of Elasticsearch that you intend to upgrade the domain to.</p>
   */
  inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
  inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
  template <typename TargetVersionT = Aws::String>
  void SetTargetVersion(TargetVersionT&& value) {
    m_targetVersionHasBeenSet = true;
    m_targetVersion = std::forward<TargetVersionT>(value);
  }
  template <typename TargetVersionT = Aws::String>
  UpgradeElasticsearchDomainRequest& WithTargetVersion(TargetVersionT&& value) {
    SetTargetVersion(std::forward<TargetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> This flag, when set to True, indicates that an Upgrade Eligibility Check
   * needs to be performed. This will not actually perform the Upgrade. </p>
   */
  inline bool GetPerformCheckOnly() const { return m_performCheckOnly; }
  inline bool PerformCheckOnlyHasBeenSet() const { return m_performCheckOnlyHasBeenSet; }
  inline void SetPerformCheckOnly(bool value) {
    m_performCheckOnlyHasBeenSet = true;
    m_performCheckOnly = value;
  }
  inline UpgradeElasticsearchDomainRequest& WithPerformCheckOnly(bool value) {
    SetPerformCheckOnly(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Overrides the deployment strategy for this upgrade. To run a cloned
   * blue/green upgrade, set <code>DeploymentStrategy</code> to
   * <code>ClonedBlueGreen</code>.</p>
   */
  inline const DeploymentStrategyOverrideOptions& GetDeploymentStrategyOptions() const { return m_deploymentStrategyOptions; }
  inline bool DeploymentStrategyOptionsHasBeenSet() const { return m_deploymentStrategyOptionsHasBeenSet; }
  template <typename DeploymentStrategyOptionsT = DeploymentStrategyOverrideOptions>
  void SetDeploymentStrategyOptions(DeploymentStrategyOptionsT&& value) {
    m_deploymentStrategyOptionsHasBeenSet = true;
    m_deploymentStrategyOptions = std::forward<DeploymentStrategyOptionsT>(value);
  }
  template <typename DeploymentStrategyOptionsT = DeploymentStrategyOverrideOptions>
  UpgradeElasticsearchDomainRequest& WithDeploymentStrategyOptions(DeploymentStrategyOptionsT&& value) {
    SetDeploymentStrategyOptions(std::forward<DeploymentStrategyOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_targetVersion;

  bool m_performCheckOnly{false};

  DeploymentStrategyOverrideOptions m_deploymentStrategyOptions;
  bool m_domainNameHasBeenSet = false;
  bool m_targetVersionHasBeenSet = false;
  bool m_performCheckOnlyHasBeenSet = false;
  bool m_deploymentStrategyOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
