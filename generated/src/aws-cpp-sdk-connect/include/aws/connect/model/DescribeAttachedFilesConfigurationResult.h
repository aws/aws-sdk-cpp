/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachedFilesConfiguration.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Connect {
namespace Model {
class DescribeAttachedFilesConfigurationResult {
 public:
  AWS_CONNECT_API DescribeAttachedFilesConfigurationResult() = default;
  AWS_CONNECT_API DescribeAttachedFilesConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeAttachedFilesConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the attached files configuration.</p>
   */
  inline const AttachedFilesConfiguration& GetAttachedFilesConfiguration() const { return m_attachedFilesConfiguration; }
  template <typename AttachedFilesConfigurationT = AttachedFilesConfiguration>
  void SetAttachedFilesConfiguration(AttachedFilesConfigurationT&& value) {
    m_attachedFilesConfigurationHasBeenSet = true;
    m_attachedFilesConfiguration = std::forward<AttachedFilesConfigurationT>(value);
  }
  template <typename AttachedFilesConfigurationT = AttachedFilesConfiguration>
  DescribeAttachedFilesConfigurationResult& WithAttachedFilesConfiguration(AttachedFilesConfigurationT&& value) {
    SetAttachedFilesConfiguration(std::forward<AttachedFilesConfigurationT>(value));
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
  DescribeAttachedFilesConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AttachedFilesConfiguration m_attachedFilesConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachedFilesConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
