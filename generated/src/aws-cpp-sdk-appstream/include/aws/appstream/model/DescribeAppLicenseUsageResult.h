/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AdminAppLicenseUsageRecord.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {
class DescribeAppLicenseUsageResult {
 public:
  AWS_APPSTREAM_API DescribeAppLicenseUsageResult() = default;
  AWS_APPSTREAM_API DescribeAppLicenseUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPSTREAM_API DescribeAppLicenseUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Collection of license usage records.</p>
   */
  inline const Aws::Vector<AdminAppLicenseUsageRecord>& GetAppLicenseUsages() const { return m_appLicenseUsages; }
  template <typename AppLicenseUsagesT = Aws::Vector<AdminAppLicenseUsageRecord>>
  void SetAppLicenseUsages(AppLicenseUsagesT&& value) {
    m_appLicenseUsagesHasBeenSet = true;
    m_appLicenseUsages = std::forward<AppLicenseUsagesT>(value);
  }
  template <typename AppLicenseUsagesT = Aws::Vector<AdminAppLicenseUsageRecord>>
  DescribeAppLicenseUsageResult& WithAppLicenseUsages(AppLicenseUsagesT&& value) {
    SetAppLicenseUsages(std::forward<AppLicenseUsagesT>(value));
    return *this;
  }
  template <typename AppLicenseUsagesT = AdminAppLicenseUsageRecord>
  DescribeAppLicenseUsageResult& AddAppLicenseUsages(AppLicenseUsagesT&& value) {
    m_appLicenseUsagesHasBeenSet = true;
    m_appLicenseUsages.emplace_back(std::forward<AppLicenseUsagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeAppLicenseUsageResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  DescribeAppLicenseUsageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AdminAppLicenseUsageRecord> m_appLicenseUsages;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_appLicenseUsagesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
