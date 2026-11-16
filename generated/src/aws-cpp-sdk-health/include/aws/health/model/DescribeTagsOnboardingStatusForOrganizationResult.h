/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/TagsOnboardingStatusForOrganization.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {
class DescribeTagsOnboardingStatusForOrganizationResult {
 public:
  AWS_HEALTH_API DescribeTagsOnboardingStatusForOrganizationResult() = default;
  AWS_HEALTH_API DescribeTagsOnboardingStatusForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_HEALTH_API DescribeTagsOnboardingStatusForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The current onboarding status of the tags feature for the organization.</p>
   */
  inline TagsOnboardingStatusForOrganization GetStatus() const { return m_status; }
  inline void SetStatus(TagsOnboardingStatusForOrganization value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeTagsOnboardingStatusForOrganizationResult& WithStatus(TagsOnboardingStatusForOrganization value) {
    SetStatus(value);
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
  DescribeTagsOnboardingStatusForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TagsOnboardingStatusForOrganization m_status{TagsOnboardingStatusForOrganization::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
