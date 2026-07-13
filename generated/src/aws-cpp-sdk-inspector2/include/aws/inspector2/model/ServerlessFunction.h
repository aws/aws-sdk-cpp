/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Architecture.h>
#include <aws/inspector2/model/PackageType.h>

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
 * <p>Contains details about a serverless function involved in a
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ServerlessFunction">AWS
 * API Reference</a></p>
 */
class ServerlessFunction {
 public:
  AWS_INSPECTOR2_API ServerlessFunction() = default;
  AWS_INSPECTOR2_API ServerlessFunction(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ServerlessFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the serverless function.</p>
   */
  inline const Aws::String& GetServerlessFunctionName() const { return m_serverlessFunctionName; }
  inline bool ServerlessFunctionNameHasBeenSet() const { return m_serverlessFunctionNameHasBeenSet; }
  template <typename ServerlessFunctionNameT = Aws::String>
  void SetServerlessFunctionName(ServerlessFunctionNameT&& value) {
    m_serverlessFunctionNameHasBeenSet = true;
    m_serverlessFunctionName = std::forward<ServerlessFunctionNameT>(value);
  }
  template <typename ServerlessFunctionNameT = Aws::String>
  ServerlessFunction& WithServerlessFunctionName(ServerlessFunctionNameT&& value) {
    SetServerlessFunctionName(std::forward<ServerlessFunctionNameT>(value));
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
  ServerlessFunction& WithRuntime(RuntimeT&& value) {
    SetRuntime(std::forward<RuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the serverless function.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  ServerlessFunction& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code digest of the serverless function.</p>
   */
  inline const Aws::String& GetCodeDigest() const { return m_codeDigest; }
  inline bool CodeDigestHasBeenSet() const { return m_codeDigestHasBeenSet; }
  template <typename CodeDigestT = Aws::String>
  void SetCodeDigest(CodeDigestT&& value) {
    m_codeDigestHasBeenSet = true;
    m_codeDigest = std::forward<CodeDigestT>(value);
  }
  template <typename CodeDigestT = Aws::String>
  ServerlessFunction& WithCodeDigest(CodeDigestT&& value) {
    SetCodeDigest(std::forward<CodeDigestT>(value));
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
  ServerlessFunction& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network ID associated with the serverless function.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  ServerlessFunction& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnet IDs associated with the serverless function.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  ServerlessFunction& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  ServerlessFunction& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security group IDs associated with the serverless function.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  ServerlessFunction& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  ServerlessFunction& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution role of the serverless function.</p>
   */
  inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
  inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
  template <typename ExecutionRoleT = Aws::String>
  void SetExecutionRole(ExecutionRoleT&& value) {
    m_executionRoleHasBeenSet = true;
    m_executionRole = std::forward<ExecutionRoleT>(value);
  }
  template <typename ExecutionRoleT = Aws::String>
  ServerlessFunction& WithExecutionRole(ExecutionRoleT&& value) {
    SetExecutionRole(std::forward<ExecutionRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package type of the serverless function.</p>
   */
  inline PackageType GetPackageType() const { return m_packageType; }
  inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
  inline void SetPackageType(PackageType value) {
    m_packageTypeHasBeenSet = true;
    m_packageType = value;
  }
  inline ServerlessFunction& WithPackageType(PackageType value) {
    SetPackageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The architectures of the serverless function.</p>
   */
  inline const Aws::Vector<Architecture>& GetArchitectures() const { return m_architectures; }
  inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
  template <typename ArchitecturesT = Aws::Vector<Architecture>>
  void SetArchitectures(ArchitecturesT&& value) {
    m_architecturesHasBeenSet = true;
    m_architectures = std::forward<ArchitecturesT>(value);
  }
  template <typename ArchitecturesT = Aws::Vector<Architecture>>
  ServerlessFunction& WithArchitectures(ArchitecturesT&& value) {
    SetArchitectures(std::forward<ArchitecturesT>(value));
    return *this;
  }
  inline ServerlessFunction& AddArchitectures(Architecture value) {
    m_architecturesHasBeenSet = true;
    m_architectures.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The layers of the serverless function.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLayers() const { return m_layers; }
  inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }
  template <typename LayersT = Aws::Vector<Aws::String>>
  void SetLayers(LayersT&& value) {
    m_layersHasBeenSet = true;
    m_layers = std::forward<LayersT>(value);
  }
  template <typename LayersT = Aws::Vector<Aws::String>>
  ServerlessFunction& WithLayers(LayersT&& value) {
    SetLayers(std::forward<LayersT>(value));
    return *this;
  }
  template <typename LayersT = Aws::String>
  ServerlessFunction& AddLayers(LayersT&& value) {
    m_layersHasBeenSet = true;
    m_layers.emplace_back(std::forward<LayersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessFunctionName;

  Aws::String m_runtime;

  Aws::String m_version;

  Aws::String m_codeDigest;

  Aws::Utils::DateTime m_lastModifiedAt{};

  Aws::String m_networkId;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_executionRole;

  PackageType m_packageType{PackageType::NOT_SET};

  Aws::Vector<Architecture> m_architectures;

  Aws::Vector<Aws::String> m_layers;
  bool m_serverlessFunctionNameHasBeenSet = false;
  bool m_runtimeHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_codeDigestHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
  bool m_networkIdHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_executionRoleHasBeenSet = false;
  bool m_packageTypeHasBeenSet = false;
  bool m_architecturesHasBeenSet = false;
  bool m_layersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
