/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about an Amazon RDS database instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RdsDbInstance">AWS
 * API Reference</a></p>
 */
class RdsDbInstance {
 public:
  AWS_GUARDDUTY_API RdsDbInstance() = default;
  AWS_GUARDDUTY_API RdsDbInstance(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RdsDbInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the database instance.</p>
   */
  inline const Aws::String& GetDbInstanceIdentifier() const { return m_dbInstanceIdentifier; }
  inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
  template <typename DbInstanceIdentifierT = Aws::String>
  void SetDbInstanceIdentifier(DbInstanceIdentifierT&& value) {
    m_dbInstanceIdentifierHasBeenSet = true;
    m_dbInstanceIdentifier = std::forward<DbInstanceIdentifierT>(value);
  }
  template <typename DbInstanceIdentifierT = Aws::String>
  RdsDbInstance& WithDbInstanceIdentifier(DbInstanceIdentifierT&& value) {
    SetDbInstanceIdentifier(std::forward<DbInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the database cluster that contains the instance.</p>
   */
  inline const Aws::String& GetDbClusterIdentifier() const { return m_dbClusterIdentifier; }
  inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
  template <typename DbClusterIdentifierT = Aws::String>
  void SetDbClusterIdentifier(DbClusterIdentifierT&& value) {
    m_dbClusterIdentifierHasBeenSet = true;
    m_dbClusterIdentifier = std::forward<DbClusterIdentifierT>(value);
  }
  template <typename DbClusterIdentifierT = Aws::String>
  RdsDbInstance& WithDbClusterIdentifier(DbClusterIdentifierT&& value) {
    SetDbClusterIdentifier(std::forward<DbClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the database instance.</p>
   */
  inline const Aws::String& GetDbInstanceArn() const { return m_dbInstanceArn; }
  inline bool DbInstanceArnHasBeenSet() const { return m_dbInstanceArnHasBeenSet; }
  template <typename DbInstanceArnT = Aws::String>
  void SetDbInstanceArn(DbInstanceArnT&& value) {
    m_dbInstanceArnHasBeenSet = true;
    m_dbInstanceArn = std::forward<DbInstanceArnT>(value);
  }
  template <typename DbInstanceArnT = Aws::String>
  RdsDbInstance& WithDbInstanceArn(DbInstanceArnT&& value) {
    SetDbInstanceArn(std::forward<DbInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique resource ID of the database instance.</p>
   */
  inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
  inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
  template <typename DbiResourceIdT = Aws::String>
  void SetDbiResourceId(DbiResourceIdT&& value) {
    m_dbiResourceIdHasBeenSet = true;
    m_dbiResourceId = std::forward<DbiResourceIdT>(value);
  }
  template <typename DbiResourceIdT = Aws::String>
  RdsDbInstance& WithDbiResourceId(DbiResourceIdT&& value) {
    SetDbiResourceId(std::forward<DbiResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database engine of the instance.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  RdsDbInstance& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the database engine.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  RdsDbInstance& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dbInstanceIdentifier;

  Aws::String m_dbClusterIdentifier;

  Aws::String m_dbInstanceArn;

  Aws::String m_dbiResourceId;

  Aws::String m_engine;

  Aws::String m_engineVersion;
  bool m_dbInstanceIdentifierHasBeenSet = false;
  bool m_dbClusterIdentifierHasBeenSet = false;
  bool m_dbInstanceArnHasBeenSet = false;
  bool m_dbiResourceIdHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
