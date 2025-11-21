/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/TieringConfiguration.h>
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
class GetTieringConfigurationResult {
 public:
  AWS_BACKUP_API GetTieringConfigurationResult() = default;
  AWS_BACKUP_API GetTieringConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API GetTieringConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Specifies the body of a tiering configuration. Includes
   * <code>TieringConfigurationName</code>.</p>
   */
  inline const TieringConfiguration& GetTieringConfiguration() const { return m_tieringConfiguration; }
  template <typename TieringConfigurationT = TieringConfiguration>
  void SetTieringConfiguration(TieringConfigurationT&& value) {
    m_tieringConfigurationHasBeenSet = true;
    m_tieringConfiguration = std::forward<TieringConfigurationT>(value);
  }
  template <typename TieringConfigurationT = TieringConfiguration>
  GetTieringConfigurationResult& WithTieringConfiguration(TieringConfigurationT&& value) {
    SetTieringConfiguration(std::forward<TieringConfigurationT>(value));
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
  GetTieringConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TieringConfiguration m_tieringConfiguration;
  bool m_tieringConfigurationHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
