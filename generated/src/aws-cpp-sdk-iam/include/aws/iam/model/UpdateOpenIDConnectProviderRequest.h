/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ContextProvider.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class UpdateOpenIDConnectProviderRequest : public IAMRequest {
 public:
  AWS_IAM_API UpdateOpenIDConnectProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOpenIDConnectProvider"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object to
   * update. You can get a list of OIDC provider resource ARNs by using the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListOpenIDConnectProviders.html">ListOpenIDConnectProviders</a>
   * operation.</p> <p>For more information about ARNs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  inline const Aws::String& GetOpenIDConnectProviderArn() const { return m_openIDConnectProviderArn; }
  inline bool OpenIDConnectProviderArnHasBeenSet() const { return m_openIDConnectProviderArnHasBeenSet; }
  template <typename OpenIDConnectProviderArnT = Aws::String>
  void SetOpenIDConnectProviderArn(OpenIDConnectProviderArnT&& value) {
    m_openIDConnectProviderArnHasBeenSet = true;
    m_openIDConnectProviderArn = std::forward<OpenIDConnectProviderArnT>(value);
  }
  template <typename OpenIDConnectProviderArnT = Aws::String>
  UpdateOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(OpenIDConnectProviderArnT&& value) {
    SetOpenIDConnectProviderArn(std::forward<OpenIDConnectProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trusted identity propagation context provider configuration to set on the
   * OIDC provider. This configuration defines the subject mapping and the
   * source-to-target key mappings that are used when trusted context is injected.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ContextProvider.html">ContextProvider</a>.</p>
   * <p>To remove the existing context provider instead of replacing it, use
   * <code>RemoveContextProvider</code>. Do not specify both
   * <code>ContextProvider</code> and <code>RemoveContextProvider</code> in the same
   * request.</p>
   */
  inline const ContextProvider& GetContextProvider() const { return m_contextProvider; }
  inline bool ContextProviderHasBeenSet() const { return m_contextProviderHasBeenSet; }
  template <typename ContextProviderT = ContextProvider>
  void SetContextProvider(ContextProviderT&& value) {
    m_contextProviderHasBeenSet = true;
    m_contextProvider = std::forward<ContextProviderT>(value);
  }
  template <typename ContextProviderT = ContextProvider>
  UpdateOpenIDConnectProviderRequest& WithContextProvider(ContextProviderT&& value) {
    SetContextProvider(std::forward<ContextProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance to
   * associate with the OIDC provider.</p> <p>For the format, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_InstanceMetadata.html">InstanceMetadata</a>
   * in the <i>IAM Identity Center API Reference</i>.</p> <p>To disassociate the
   * currently associated instance instead of changing it, use
   * <code>RemoveIdentityCenterInstance</code>. Do not specify both
   * <code>IdentityCenterInstanceArn</code> and
   * <code>RemoveIdentityCenterInstance</code> in the same request.</p>
   */
  inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
  inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    m_identityCenterInstanceArnHasBeenSet = true;
    m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value);
  }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  UpdateOpenIDConnectProviderRequest& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to remove the existing context provider configuration from
   * the OIDC provider. Set this value to <code>true</code> to remove the context
   * provider.</p> <p>This parameter is mutually exclusive with
   * <code>ContextProvider</code>. In a single request, specify either a new
   * <code>ContextProvider</code> value or <code>RemoveContextProvider</code>, but
   * not both.</p>
   */
  inline bool GetRemoveContextProvider() const { return m_removeContextProvider; }
  inline bool RemoveContextProviderHasBeenSet() const { return m_removeContextProviderHasBeenSet; }
  inline void SetRemoveContextProvider(bool value) {
    m_removeContextProviderHasBeenSet = true;
    m_removeContextProvider = value;
  }
  inline UpdateOpenIDConnectProviderRequest& WithRemoveContextProvider(bool value) {
    SetRemoveContextProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to disassociate the IAM Identity Center instance from the
   * OIDC provider. Set this value to <code>true</code> to remove the
   * association.</p> <p>This parameter is mutually exclusive with
   * <code>IdentityCenterInstanceArn</code>. In a single request, specify either a
   * new <code>IdentityCenterInstanceArn</code> value or
   * <code>RemoveIdentityCenterInstance</code>, but not both.</p>
   */
  inline bool GetRemoveIdentityCenterInstance() const { return m_removeIdentityCenterInstance; }
  inline bool RemoveIdentityCenterInstanceHasBeenSet() const { return m_removeIdentityCenterInstanceHasBeenSet; }
  inline void SetRemoveIdentityCenterInstance(bool value) {
    m_removeIdentityCenterInstanceHasBeenSet = true;
    m_removeIdentityCenterInstance = value;
  }
  inline UpdateOpenIDConnectProviderRequest& WithRemoveIdentityCenterInstance(bool value) {
    SetRemoveIdentityCenterInstance(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_openIDConnectProviderArn;

  ContextProvider m_contextProvider;

  Aws::String m_identityCenterInstanceArn;

  bool m_removeContextProvider{false};

  bool m_removeIdentityCenterInstance{false};
  bool m_openIDConnectProviderArnHasBeenSet = false;
  bool m_contextProviderHasBeenSet = false;
  bool m_identityCenterInstanceArnHasBeenSet = false;
  bool m_removeContextProviderHasBeenSet = false;
  bool m_removeIdentityCenterInstanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
