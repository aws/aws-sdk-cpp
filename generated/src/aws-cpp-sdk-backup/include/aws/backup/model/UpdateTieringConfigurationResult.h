/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {
class UpdateTieringConfigurationResult {
 public:
  AWS_BACKUP_API UpdateTieringConfigurationResult() = default;
  AWS_BACKUP_API UpdateTieringConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API UpdateTieringConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies the updated tiering
   * configuration.</p>
   */
  inline const Aws::String& GetTieringConfigurationArn() const { return m_tieringConfigurationArn; }
  template <typename TieringConfigurationArnT = Aws::String>
  void SetTieringConfigurationArn(TieringConfigurationArnT&& value) {
    m_tieringConfigurationArnHasBeenSet = true;
    m_tieringConfigurationArn = std::forward<TieringConfigurationArnT>(value);
  }
  template <typename TieringConfigurationArnT = Aws::String>
  UpdateTieringConfigurationResult& WithTieringConfigurationArn(TieringConfigurationArnT&& value) {
    SetTieringConfigurationArn(std::forward<TieringConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This unique string is the name of the tiering configuration.</p>
   */
  inline const Aws::String& GetTieringConfigurationName() const { return m_tieringConfigurationName; }
  template <typename TieringConfigurationNameT = Aws::String>
  void SetTieringConfigurationName(TieringConfigurationNameT&& value) {
    m_tieringConfigurationNameHasBeenSet = true;
    m_tieringConfigurationName = std::forward<TieringConfigurationNameT>(value);
  }
  template <typename TieringConfigurationNameT = Aws::String>
  UpdateTieringConfigurationResult& WithTieringConfigurationName(TieringConfigurationNameT&& value) {
    SetTieringConfigurationName(std::forward<TieringConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time a tiering configuration was created, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  UpdateTieringConfigurationResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time a tiering configuration was updated, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>LastUpdatedTime</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087AM.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  UpdateTieringConfigurationResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateTieringConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tieringConfigurationArn;
  bool m_tieringConfigurationArnHasBeenSet = false;

  Aws::String m_tieringConfigurationName;
  bool m_tieringConfigurationNameHasBeenSet = false;

  Aws::Utils::DateTime m_creationTime{};
  bool m_creationTimeHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTime{};
  bool m_lastUpdatedTimeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
