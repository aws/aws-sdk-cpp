/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/DocumentDbDefaultBehavior.h>
#include <aws/arc-region-switch/model/DocumentDbUngraceful.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Configuration for Amazon DocumentDB global clusters used in a Region switch
 * plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/DocumentDbConfiguration">AWS
 * API Reference</a></p>
 */
class DocumentDbConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API DocumentDbConfiguration() = default;
  AWS_ARCREGIONSWITCH_API DocumentDbConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API DocumentDbConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timeout value specified for the configuration.</p>
   */
  inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
  inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
  inline void SetTimeoutMinutes(int value) {
    m_timeoutMinutesHasBeenSet = true;
    m_timeoutMinutes = value;
  }
  inline DocumentDbConfiguration& WithTimeoutMinutes(int value) {
    SetTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cross account role for the configuration.</p>
   */
  inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
  inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
  template <typename CrossAccountRoleT = Aws::String>
  void SetCrossAccountRole(CrossAccountRoleT&& value) {
    m_crossAccountRoleHasBeenSet = true;
    m_crossAccountRole = std::forward<CrossAccountRoleT>(value);
  }
  template <typename CrossAccountRoleT = Aws::String>
  DocumentDbConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) {
    SetCrossAccountRole(std::forward<CrossAccountRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external ID (secret key) for the configuration.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  DocumentDbConfiguration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior for a global cluster, that is, only allow switchover or also
   * allow failover.</p>
   */
  inline DocumentDbDefaultBehavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(DocumentDbDefaultBehavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline DocumentDbConfiguration& WithBehavior(DocumentDbDefaultBehavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings for ungraceful execution.</p>
   */
  inline const DocumentDbUngraceful& GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  template <typename UngracefulT = DocumentDbUngraceful>
  void SetUngraceful(UngracefulT&& value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = std::forward<UngracefulT>(value);
  }
  template <typename UngracefulT = DocumentDbUngraceful>
  DocumentDbConfiguration& WithUngraceful(UngracefulT&& value) {
    SetUngraceful(std::forward<UngracefulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The global cluster identifier for a DocumentDB global cluster.</p>
   */
  inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
  inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
  template <typename GlobalClusterIdentifierT = Aws::String>
  void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    m_globalClusterIdentifierHasBeenSet = true;
    m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value);
  }
  template <typename GlobalClusterIdentifierT = Aws::String>
  DocumentDbConfiguration& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database cluster Amazon Resource Names (ARNs) for a DocumentDB global
   * cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDatabaseClusterArns() const { return m_databaseClusterArns; }
  inline bool DatabaseClusterArnsHasBeenSet() const { return m_databaseClusterArnsHasBeenSet; }
  template <typename DatabaseClusterArnsT = Aws::Vector<Aws::String>>
  void SetDatabaseClusterArns(DatabaseClusterArnsT&& value) {
    m_databaseClusterArnsHasBeenSet = true;
    m_databaseClusterArns = std::forward<DatabaseClusterArnsT>(value);
  }
  template <typename DatabaseClusterArnsT = Aws::Vector<Aws::String>>
  DocumentDbConfiguration& WithDatabaseClusterArns(DatabaseClusterArnsT&& value) {
    SetDatabaseClusterArns(std::forward<DatabaseClusterArnsT>(value));
    return *this;
  }
  template <typename DatabaseClusterArnsT = Aws::String>
  DocumentDbConfiguration& AddDatabaseClusterArns(DatabaseClusterArnsT&& value) {
    m_databaseClusterArnsHasBeenSet = true;
    m_databaseClusterArns.emplace_back(std::forward<DatabaseClusterArnsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  DocumentDbDefaultBehavior m_behavior{DocumentDbDefaultBehavior::NOT_SET};

  DocumentDbUngraceful m_ungraceful;

  Aws::String m_globalClusterIdentifier;

  Aws::Vector<Aws::String> m_databaseClusterArns;
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_behaviorHasBeenSet = false;
  bool m_ungracefulHasBeenSet = false;
  bool m_globalClusterIdentifierHasBeenSet = false;
  bool m_databaseClusterArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
