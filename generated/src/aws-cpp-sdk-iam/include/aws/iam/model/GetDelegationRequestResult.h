/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/DelegationRequest.h>
#include <aws/iam/model/PermissionCheckResultType.h>
#include <aws/iam/model/PermissionCheckStatusType.h>
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
class GetDelegationRequestResult {
 public:
  AWS_IAM_API GetDelegationRequestResult() = default;
  AWS_IAM_API GetDelegationRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API GetDelegationRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The delegation request object containing all details about the request.</p>
   */
  inline const DelegationRequest& GetDelegationRequest() const { return m_delegationRequest; }
  template <typename DelegationRequestT = DelegationRequest>
  void SetDelegationRequest(DelegationRequestT&& value) {
    m_delegationRequestHasBeenSet = true;
    m_delegationRequest = std::forward<DelegationRequestT>(value);
  }
  template <typename DelegationRequestT = DelegationRequest>
  GetDelegationRequestResult& WithDelegationRequest(DelegationRequestT&& value) {
    SetDelegationRequest(std::forward<DelegationRequestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the permission check for the delegation request.</p> <p>This
   * value indicates the status of the process to check whether the caller has
   * sufficient permissions to cover the requested actions in the delegation request.
   * Since this is an asynchronous process, there are three potential values:</p>
   * <ul> <li> <p> <code>IN_PROGRESS</code> : The permission check process has
   * started.</p> </li> <li> <p> <code>COMPLETED</code> : The permission check
   * process has completed. The <code>PermissionCheckResult</code> will include the
   * result.</p> </li> <li> <p> <code>FAILED</code> : The permission check process
   * has failed.</p> </li> </ul>
   */
  inline PermissionCheckStatusType GetPermissionCheckStatus() const { return m_permissionCheckStatus; }
  inline void SetPermissionCheckStatus(PermissionCheckStatusType value) {
    m_permissionCheckStatusHasBeenSet = true;
    m_permissionCheckStatus = value;
  }
  inline GetDelegationRequestResult& WithPermissionCheckStatus(PermissionCheckStatusType value) {
    SetPermissionCheckStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the permission check, indicating whether the caller has
   * sufficient permissions to cover the requested permissions. This is an
   * approximate result.</p> <ul> <li> <p> <code>ALLOWED</code> : The caller has
   * sufficient permissions cover all the requested permissions.</p> </li> <li> <p>
   * <code>DENIED</code> : The caller does not have sufficient permissions to cover
   * all the requested permissions.</p> </li> <li> <p> <code>UNSURE</code> : It is
   * not possible to determine whether the caller has all the permissions needed.
   * This output is most likely for cases when the caller has permissions with
   * conditions.</p> </li> </ul>
   */
  inline PermissionCheckResultType GetPermissionCheckResult() const { return m_permissionCheckResult; }
  inline void SetPermissionCheckResult(PermissionCheckResultType value) {
    m_permissionCheckResultHasBeenSet = true;
    m_permissionCheckResult = value;
  }
  inline GetDelegationRequestResult& WithPermissionCheckResult(PermissionCheckResultType value) {
    SetPermissionCheckResult(value);
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
  GetDelegationRequestResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  DelegationRequest m_delegationRequest;

  PermissionCheckStatusType m_permissionCheckStatus{PermissionCheckStatusType::NOT_SET};

  PermissionCheckResultType m_permissionCheckResult{PermissionCheckResultType::NOT_SET};

  ResponseMetadata m_responseMetadata;
  bool m_delegationRequestHasBeenSet = false;
  bool m_permissionCheckStatusHasBeenSet = false;
  bool m_permissionCheckResultHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
