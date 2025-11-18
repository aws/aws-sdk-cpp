/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {
class CreateDelegationRequestResult {
 public:
  AWS_IAM_API CreateDelegationRequestResult() = default;
  AWS_IAM_API CreateDelegationRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API CreateDelegationRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetConsoleDeepLink() const { return m_consoleDeepLink; }
  template <typename ConsoleDeepLinkT = Aws::String>
  void SetConsoleDeepLink(ConsoleDeepLinkT&& value) {
    m_consoleDeepLinkHasBeenSet = true;
    m_consoleDeepLink = std::forward<ConsoleDeepLinkT>(value);
  }
  template <typename ConsoleDeepLinkT = Aws::String>
  CreateDelegationRequestResult& WithConsoleDeepLink(ConsoleDeepLinkT&& value) {
    SetConsoleDeepLink(std::forward<ConsoleDeepLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetDelegationRequestId() const { return m_delegationRequestId; }
  template <typename DelegationRequestIdT = Aws::String>
  void SetDelegationRequestId(DelegationRequestIdT&& value) {
    m_delegationRequestIdHasBeenSet = true;
    m_delegationRequestId = std::forward<DelegationRequestIdT>(value);
  }
  template <typename DelegationRequestIdT = Aws::String>
  CreateDelegationRequestResult& WithDelegationRequestId(DelegationRequestIdT&& value) {
    SetDelegationRequestId(std::forward<DelegationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  CreateDelegationRequestResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_consoleDeepLink;
  bool m_consoleDeepLinkHasBeenSet = false;

  Aws::String m_delegationRequestId;
  bool m_delegationRequestIdHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
