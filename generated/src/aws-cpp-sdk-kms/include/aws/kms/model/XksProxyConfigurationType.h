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
    AWS_KMS_API XksProxyConfigurationType();
    AWS_KMS_API XksProxyConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API XksProxyConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline const XksProxyConnectivityType& GetConnectivity() const{ return m_connectivity; }
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
    inline void SetConnectivity(const XksProxyConnectivityType& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }
    inline void SetConnectivity(XksProxyConnectivityType&& value) { m_connectivityHasBeenSet = true; m_connectivity = std::move(value); }
    inline XksProxyConfigurationType& WithConnectivity(const XksProxyConnectivityType& value) { SetConnectivity(value); return *this;}
    inline XksProxyConfigurationType& WithConnectivity(XksProxyConnectivityType&& value) { SetConnectivity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }
    inline XksProxyConfigurationType& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline XksProxyConfigurationType& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline XksProxyConfigurationType& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline const Aws::String& GetUriEndpoint() const{ return m_uriEndpoint; }
    inline bool UriEndpointHasBeenSet() const { return m_uriEndpointHasBeenSet; }
    inline void SetUriEndpoint(const Aws::String& value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint = value; }
    inline void SetUriEndpoint(Aws::String&& value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint = std::move(value); }
    inline void SetUriEndpoint(const char* value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint.assign(value); }
    inline XksProxyConfigurationType& WithUriEndpoint(const Aws::String& value) { SetUriEndpoint(value); return *this;}
    inline XksProxyConfigurationType& WithUriEndpoint(Aws::String&& value) { SetUriEndpoint(std::move(value)); return *this;}
    inline XksProxyConfigurationType& WithUriEndpoint(const char* value) { SetUriEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline const Aws::String& GetUriPath() const{ return m_uriPath; }
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }
    inline void SetUriPath(const Aws::String& value) { m_uriPathHasBeenSet = true; m_uriPath = value; }
    inline void SetUriPath(Aws::String&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::move(value); }
    inline void SetUriPath(const char* value) { m_uriPathHasBeenSet = true; m_uriPath.assign(value); }
    inline XksProxyConfigurationType& WithUriPath(const Aws::String& value) { SetUriPath(value); return *this;}
    inline XksProxyConfigurationType& WithUriPath(Aws::String&& value) { SetUriPath(std::move(value)); return *this;}
    inline XksProxyConfigurationType& WithUriPath(const char* value) { SetUriPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }
    inline XksProxyConfigurationType& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}
    inline XksProxyConfigurationType& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}
    inline XksProxyConfigurationType& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}
    ///@}
  private:

    XksProxyConnectivityType m_connectivity;
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
