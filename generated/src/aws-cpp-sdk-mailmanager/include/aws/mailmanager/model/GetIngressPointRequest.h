/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/TrustStoreResponseOption.h>

#include <utility>

namespace Aws {
namespace MailManager {
namespace Model {

/**
 */
class GetIngressPointRequest : public MailManagerRequest {
 public:
  AWS_MAILMANAGER_API GetIngressPointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIngressPoint"; }

  AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

  AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of an ingress endpoint.</p>
   */
  inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
  inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
  template <typename IngressPointIdT = Aws::String>
  void SetIngressPointId(IngressPointIdT&& value) {
    m_ingressPointIdHasBeenSet = true;
    m_ingressPointId = std::forward<IngressPointIdT>(value);
  }
  template <typename IngressPointIdT = Aws::String>
  GetIngressPointRequest& WithIngressPointId(IngressPointIdT&& value) {
    SetIngressPointId(std::forward<IngressPointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to include the trust store contents in the response. Use INCLUDE to
   * retrieve trust store certificate and CRL contents.</p>
   */
  inline TrustStoreResponseOption GetIncludeTrustStoreContents() const { return m_includeTrustStoreContents; }
  inline bool IncludeTrustStoreContentsHasBeenSet() const { return m_includeTrustStoreContentsHasBeenSet; }
  inline void SetIncludeTrustStoreContents(TrustStoreResponseOption value) {
    m_includeTrustStoreContentsHasBeenSet = true;
    m_includeTrustStoreContents = value;
  }
  inline GetIngressPointRequest& WithIncludeTrustStoreContents(TrustStoreResponseOption value) {
    SetIncludeTrustStoreContents(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingressPointId;

  TrustStoreResponseOption m_includeTrustStoreContents{TrustStoreResponseOption::NOT_SET};
  bool m_ingressPointIdHasBeenSet = false;
  bool m_includeTrustStoreContentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
