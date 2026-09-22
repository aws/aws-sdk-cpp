/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AwsCredentials.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
class GetSpaceCredentialsForOrganizationResult {
 public:
  AWS_CLOUDWATCHOMNI_API GetSpaceCredentialsForOrganizationResult() = default;
  AWS_CLOUDWATCHOMNI_API GetSpaceCredentialsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API GetSpaceCredentialsForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The temporary AWS credentials for the space.</p>
   */
  inline const AwsCredentials& GetCredentials() const { return m_credentials; }
  template <typename CredentialsT = AwsCredentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = AwsCredentials>
  GetSpaceCredentialsForOrganizationResult& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
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
  GetSpaceCredentialsForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AwsCredentials m_credentials;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_credentialsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
