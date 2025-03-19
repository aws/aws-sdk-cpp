/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/XksProxyConnectivityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>Detailed information about the external key store proxy (XKS proxy). Your
   * external key store proxy translates KMS requests into a format that your
   * external key manager can understand. These fields appear in a
   * <a>DescribeCustomKeyStores</a> response only when the
   * <code>CustomKeyStoreType</code> is
   * <code>EXTERNAL_KEY_STORE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/XksProxyConfigurationType">AWS
   * API Reference</a></p>
   */
  class XksProxyConfigurationType
  {
  public:
    AWS_KMS_API XksProxyConfigurationType() = default;
    AWS_KMS_API XksProxyConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API XksProxyConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline XksProxyConnectivityType GetConnectivity() const { return m_connectivity; }
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
    inline void SetConnectivity(XksProxyConnectivityType value) { m_connectivityHasBeenSet = true; m_connectivity = value; }
    inline XksProxyConfigurationType& WithConnectivity(XksProxyConnectivityType value) { SetConnectivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    XksProxyConfigurationType& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline const Aws::String& GetUriEndpoint() const { return m_uriEndpoint; }
    inline bool UriEndpointHasBeenSet() const { return m_uriEndpointHasBeenSet; }
    template<typename UriEndpointT = Aws::String>
    void SetUriEndpoint(UriEndpointT&& value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint = std::forward<UriEndpointT>(value); }
    template<typename UriEndpointT = Aws::String>
    XksProxyConfigurationType& WithUriEndpoint(UriEndpointT&& value) { SetUriEndpoint(std::forward<UriEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline const Aws::String& GetUriPath() const { return m_uriPath; }
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }
    template<typename UriPathT = Aws::String>
    void SetUriPath(UriPathT&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::forward<UriPathT>(value); }
    template<typename UriPathT = Aws::String>
    XksProxyConfigurationType& WithUriPath(UriPathT&& value) { SetUriPath(std::forward<UriPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const { return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    template<typename VpcEndpointServiceNameT = Aws::String>
    void SetVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::forward<VpcEndpointServiceNameT>(value); }
    template<typename VpcEndpointServiceNameT = Aws::String>
    XksProxyConfigurationType& WithVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { SetVpcEndpointServiceName(std::forward<VpcEndpointServiceNameT>(value)); return *this;}
    ///@}
  private:

    XksProxyConnectivityType m_connectivity{XksProxyConnectivityType::NOT_SET};
    bool m_connectivityHasBeenSet = false;

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_uriEndpoint;
    bool m_uriEndpointHasBeenSet = false;

    Aws::String m_uriPath;
    bool m_uriPathHasBeenSet = false;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
