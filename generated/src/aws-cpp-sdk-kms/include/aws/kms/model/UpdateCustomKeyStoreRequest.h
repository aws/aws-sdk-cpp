/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/XksProxyAuthenticationCredentialType.h>
#include <aws/kms/model/XksProxyConnectivityType.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class UpdateCustomKeyStoreRequest : public KMSRequest
  {
  public:
    AWS_KMS_API UpdateCustomKeyStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomKeyStore"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const { return m_customKeyStoreId; }
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }
    template<typename CustomKeyStoreIdT = Aws::String>
    void SetCustomKeyStoreId(CustomKeyStoreIdT&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::forward<CustomKeyStoreIdT>(value); }
    template<typename CustomKeyStoreIdT = Aws::String>
    UpdateCustomKeyStoreRequest& WithCustomKeyStoreId(CustomKeyStoreIdT&& value) { SetCustomKeyStoreId(std::forward<CustomKeyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the Amazon Web Services
     * account.</p>  <p>Do not include confidential or sensitive information
     * in this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To change this value, an CloudHSM key store
     * must be disconnected. An external key store can be connected or
     * disconnected.</p>
     */
    inline const Aws::String& GetNewCustomKeyStoreName() const { return m_newCustomKeyStoreName; }
    inline bool NewCustomKeyStoreNameHasBeenSet() const { return m_newCustomKeyStoreNameHasBeenSet; }
    template<typename NewCustomKeyStoreNameT = Aws::String>
    void SetNewCustomKeyStoreName(NewCustomKeyStoreNameT&& value) { m_newCustomKeyStoreNameHasBeenSet = true; m_newCustomKeyStoreName = std::forward<NewCustomKeyStoreNameT>(value); }
    template<typename NewCustomKeyStoreNameT = Aws::String>
    UpdateCustomKeyStoreRequest& WithNewCustomKeyStoreName(NewCustomKeyStoreNameT&& value) { SetNewCustomKeyStoreName(std::forward<NewCustomKeyStoreNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the CloudHSM cluster that is associated with the custom key store. This
     * parameter is valid only for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>This
     * parameter tells KMS the current password of the <code>kmsuser</code> crypto user
     * (CU). It does not set or change the password of any users in the CloudHSM
     * cluster.</p> <p>To change this value, the CloudHSM key store must be
     * disconnected.</p>
     */
    inline const Aws::String& GetKeyStorePassword() const { return m_keyStorePassword; }
    inline bool KeyStorePasswordHasBeenSet() const { return m_keyStorePasswordHasBeenSet; }
    template<typename KeyStorePasswordT = Aws::String>
    void SetKeyStorePassword(KeyStorePasswordT&& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = std::forward<KeyStorePasswordT>(value); }
    template<typename KeyStorePasswordT = Aws::String>
    UpdateCustomKeyStoreRequest& WithKeyStorePassword(KeyStorePasswordT&& value) { SetKeyStorePassword(std::forward<KeyStorePasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associates the custom key store with a related CloudHSM cluster. This
     * parameter is valid only for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * cluster ID of the cluster that you used to create the custom key store or a
     * cluster that shares a backup history and has the same cluster certificate as the
     * original cluster. You cannot use this parameter to associate a custom key store
     * with an unrelated cluster. In addition, the replacement cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p> <p>To change this value, the CloudHSM key store must be
     * disconnected.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const { return m_cloudHsmClusterId; }
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }
    template<typename CloudHsmClusterIdT = Aws::String>
    void SetCloudHsmClusterId(CloudHsmClusterIdT&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::forward<CloudHsmClusterIdT>(value); }
    template<typename CloudHsmClusterIdT = Aws::String>
    UpdateCustomKeyStoreRequest& WithCloudHsmClusterId(CloudHsmClusterIdT&& value) { SetCloudHsmClusterId(std::forward<CloudHsmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the URI endpoint that KMS uses to connect to your external key store
     * proxy (XKS proxy). This parameter is valid only for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>For
     * external key stores with an <code>XksProxyConnectivity</code> value of
     * <code>PUBLIC_ENDPOINT</code>, the protocol must be HTTPS.</p> <p>For external
     * key stores with an <code>XksProxyConnectivity</code> value of
     * <code>VPC_ENDPOINT_SERVICE</code>, specify <code>https://</code> followed by the
     * private DNS name associated with the VPC endpoint service. Each external key
     * store must use a different private DNS name.</p> <p>The combined
     * <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> values must be
     * unique in the Amazon Web Services account and Region.</p> <p>To change this
     * value, the external key store must be disconnected.</p>
     */
    inline const Aws::String& GetXksProxyUriEndpoint() const { return m_xksProxyUriEndpoint; }
    inline bool XksProxyUriEndpointHasBeenSet() const { return m_xksProxyUriEndpointHasBeenSet; }
    template<typename XksProxyUriEndpointT = Aws::String>
    void SetXksProxyUriEndpoint(XksProxyUriEndpointT&& value) { m_xksProxyUriEndpointHasBeenSet = true; m_xksProxyUriEndpoint = std::forward<XksProxyUriEndpointT>(value); }
    template<typename XksProxyUriEndpointT = Aws::String>
    UpdateCustomKeyStoreRequest& WithXksProxyUriEndpoint(XksProxyUriEndpointT&& value) { SetXksProxyUriEndpoint(std::forward<XksProxyUriEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the base path to the proxy APIs for this external key store. To find
     * this value, see the documentation for your external key manager and external key
     * store proxy (XKS proxy). This parameter is valid only for custom key stores with
     * a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>,
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. You can include an optional prefix between the required elements such as
     * <code>/<i>example</i>/kms/xks/v1</code>.</p> <p>The combined
     * <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> values must be
     * unique in the Amazon Web Services account and Region.</p> <p>You can change this
     * value when the external key store is connected or disconnected.</p>
     */
    inline const Aws::String& GetXksProxyUriPath() const { return m_xksProxyUriPath; }
    inline bool XksProxyUriPathHasBeenSet() const { return m_xksProxyUriPathHasBeenSet; }
    template<typename XksProxyUriPathT = Aws::String>
    void SetXksProxyUriPath(XksProxyUriPathT&& value) { m_xksProxyUriPathHasBeenSet = true; m_xksProxyUriPath = std::forward<XksProxyUriPathT>(value); }
    template<typename XksProxyUriPathT = Aws::String>
    UpdateCustomKeyStoreRequest& WithXksProxyUriPath(XksProxyUriPathT&& value) { SetXksProxyUriPath(std::forward<XksProxyUriPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the name that KMS uses to identify the Amazon VPC endpoint service
     * for your external key store proxy (XKS proxy). This parameter is valid when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code> and the
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>To change this value, the external key store must be disconnected.</p>
     */
    inline const Aws::String& GetXksProxyVpcEndpointServiceName() const { return m_xksProxyVpcEndpointServiceName; }
    inline bool XksProxyVpcEndpointServiceNameHasBeenSet() const { return m_xksProxyVpcEndpointServiceNameHasBeenSet; }
    template<typename XksProxyVpcEndpointServiceNameT = Aws::String>
    void SetXksProxyVpcEndpointServiceName(XksProxyVpcEndpointServiceNameT&& value) { m_xksProxyVpcEndpointServiceNameHasBeenSet = true; m_xksProxyVpcEndpointServiceName = std::forward<XksProxyVpcEndpointServiceNameT>(value); }
    template<typename XksProxyVpcEndpointServiceNameT = Aws::String>
    UpdateCustomKeyStoreRequest& WithXksProxyVpcEndpointServiceName(XksProxyVpcEndpointServiceNameT&& value) { SetXksProxyVpcEndpointServiceName(std::forward<XksProxyVpcEndpointServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the credentials that KMS uses to sign requests to the external key
     * store proxy (XKS proxy). This parameter is valid only for custom key stores with
     * a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>You
     * must specify both the <code>AccessKeyId</code> and <code>SecretAccessKey</code>
     * value in the authentication credential, even if you are only updating one
     * value.</p> <p>This parameter doesn't establish or change your authentication
     * credentials on the proxy. It just tells KMS the credential that you established
     * with your external key store proxy. For example, if you rotate the credential on
     * your external key store proxy, you can use this parameter to update the
     * credential in KMS.</p> <p>You can change this value when the external key store
     * is connected or disconnected.</p>
     */
    inline const XksProxyAuthenticationCredentialType& GetXksProxyAuthenticationCredential() const { return m_xksProxyAuthenticationCredential; }
    inline bool XksProxyAuthenticationCredentialHasBeenSet() const { return m_xksProxyAuthenticationCredentialHasBeenSet; }
    template<typename XksProxyAuthenticationCredentialT = XksProxyAuthenticationCredentialType>
    void SetXksProxyAuthenticationCredential(XksProxyAuthenticationCredentialT&& value) { m_xksProxyAuthenticationCredentialHasBeenSet = true; m_xksProxyAuthenticationCredential = std::forward<XksProxyAuthenticationCredentialT>(value); }
    template<typename XksProxyAuthenticationCredentialT = XksProxyAuthenticationCredentialType>
    UpdateCustomKeyStoreRequest& WithXksProxyAuthenticationCredential(XksProxyAuthenticationCredentialT&& value) { SetXksProxyAuthenticationCredential(std::forward<XksProxyAuthenticationCredentialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the connectivity setting for the external key store. To indicate that
     * the external key store proxy uses a Amazon VPC endpoint service to communicate
     * with KMS, specify <code>VPC_ENDPOINT_SERVICE</code>. Otherwise, specify
     * <code>PUBLIC_ENDPOINT</code>.</p> <p>If you change the
     * <code>XksProxyConnectivity</code> to <code>VPC_ENDPOINT_SERVICE</code>, you must
     * also change the <code>XksProxyUriEndpoint</code> and add an
     * <code>XksProxyVpcEndpointServiceName</code> value. </p> <p>If you change the
     * <code>XksProxyConnectivity</code> to <code>PUBLIC_ENDPOINT</code>, you must also
     * change the <code>XksProxyUriEndpoint</code> and specify a null or empty string
     * for the <code>XksProxyVpcEndpointServiceName</code> value.</p> <p>To change this
     * value, the external key store must be disconnected.</p>
     */
    inline XksProxyConnectivityType GetXksProxyConnectivity() const { return m_xksProxyConnectivity; }
    inline bool XksProxyConnectivityHasBeenSet() const { return m_xksProxyConnectivityHasBeenSet; }
    inline void SetXksProxyConnectivity(XksProxyConnectivityType value) { m_xksProxyConnectivityHasBeenSet = true; m_xksProxyConnectivity = value; }
    inline UpdateCustomKeyStoreRequest& WithXksProxyConnectivity(XksProxyConnectivityType value) { SetXksProxyConnectivity(value); return *this;}
    ///@}
  private:

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    Aws::String m_newCustomKeyStoreName;
    bool m_newCustomKeyStoreNameHasBeenSet = false;

    Aws::String m_keyStorePassword;
    bool m_keyStorePasswordHasBeenSet = false;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet = false;

    Aws::String m_xksProxyUriEndpoint;
    bool m_xksProxyUriEndpointHasBeenSet = false;

    Aws::String m_xksProxyUriPath;
    bool m_xksProxyUriPathHasBeenSet = false;

    Aws::String m_xksProxyVpcEndpointServiceName;
    bool m_xksProxyVpcEndpointServiceNameHasBeenSet = false;

    XksProxyAuthenticationCredentialType m_xksProxyAuthenticationCredential;
    bool m_xksProxyAuthenticationCredentialHasBeenSet = false;

    XksProxyConnectivityType m_xksProxyConnectivity{XksProxyConnectivityType::NOT_SET};
    bool m_xksProxyConnectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
