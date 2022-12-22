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


    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline const XksProxyConnectivityType& GetConnectivity() const{ return m_connectivity; }

    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }

    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline void SetConnectivity(const XksProxyConnectivityType& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }

    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline void SetConnectivity(XksProxyConnectivityType&& value) { m_connectivityHasBeenSet = true; m_connectivity = std::move(value); }

    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline XksProxyConfigurationType& WithConnectivity(const XksProxyConnectivityType& value) { SetConnectivity(value); return *this;}

    /**
     * <p>Indicates whether the external key store proxy uses a public endpoint or an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline XksProxyConfigurationType& WithConnectivity(XksProxyConnectivityType&& value) { SetConnectivity(std::move(value)); return *this;}


    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline XksProxyConfigurationType& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline XksProxyConfigurationType& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The part of the external key store <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy
     * authentication credential</a> that uniquely identifies the secret access
     * key.</p>
     */
    inline XksProxyConfigurationType& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline const Aws::String& GetUriEndpoint() const{ return m_uriEndpoint; }

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline bool UriEndpointHasBeenSet() const { return m_uriEndpointHasBeenSet; }

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline void SetUriEndpoint(const Aws::String& value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint = value; }

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline void SetUriEndpoint(Aws::String&& value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint = std::move(value); }

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline void SetUriEndpoint(const char* value) { m_uriEndpointHasBeenSet = true; m_uriEndpoint.assign(value); }

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline XksProxyConfigurationType& WithUriEndpoint(const Aws::String& value) { SetUriEndpoint(value); return *this;}

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline XksProxyConfigurationType& WithUriEndpoint(Aws::String&& value) { SetUriEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URI endpoint for the external key store proxy.</p> <p>If the external key
     * store proxy has a public endpoint, it is displayed here.</p> <p>If the external
     * key store proxy uses an Amazon VPC endpoint service name, this field displays
     * the private DNS name associated with the VPC endpoint service.</p>
     */
    inline XksProxyConfigurationType& WithUriEndpoint(const char* value) { SetUriEndpoint(value); return *this;}


    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline const Aws::String& GetUriPath() const{ return m_uriPath; }

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline void SetUriPath(const Aws::String& value) { m_uriPathHasBeenSet = true; m_uriPath = value; }

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline void SetUriPath(Aws::String&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::move(value); }

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline void SetUriPath(const char* value) { m_uriPathHasBeenSet = true; m_uriPath.assign(value); }

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline XksProxyConfigurationType& WithUriPath(const Aws::String& value) { SetUriPath(value); return *this;}

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline XksProxyConfigurationType& WithUriPath(Aws::String&& value) { SetUriPath(std::move(value)); return *this;}

    /**
     * <p>The path to the external key store proxy APIs.</p>
     */
    inline XksProxyConfigurationType& WithUriPath(const char* value) { SetUriPath(value); return *this;}


    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline XksProxyConfigurationType& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline XksProxyConfigurationType& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon VPC endpoint service used to communicate with the external key
     * store proxy. This field appears only when the external key store proxy uses an
     * Amazon VPC endpoint service to communicate with KMS.</p>
     */
    inline XksProxyConfigurationType& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}

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
