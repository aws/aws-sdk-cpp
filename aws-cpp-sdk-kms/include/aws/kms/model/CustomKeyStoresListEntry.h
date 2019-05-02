/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/ConnectionStateType.h>
#include <aws/kms/model/ConnectionErrorCodeType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information about each custom key store in the custom key store
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/CustomKeyStoresListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_KMS_API CustomKeyStoresListEntry
  {
  public:
    CustomKeyStoresListEntry();
    CustomKeyStoresListEntry(Aws::Utils::Json::JsonView jsonValue);
    CustomKeyStoresListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreName() const{ return m_customKeyStoreName; }

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline bool CustomKeyStoreNameHasBeenSet() const { return m_customKeyStoreNameHasBeenSet; }

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline void SetCustomKeyStoreName(const Aws::String& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = value; }

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline void SetCustomKeyStoreName(Aws::String&& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = std::move(value); }

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline void SetCustomKeyStoreName(const char* value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName.assign(value); }

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreName(const Aws::String& value) { SetCustomKeyStoreName(value); return *this;}

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreName(Aws::String&& value) { SetCustomKeyStoreName(std::move(value)); return *this;}

    /**
     * <p>The user-specified friendly name for the custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreName(const char* value) { SetCustomKeyStoreName(value); return *this;}


    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AWS CloudHSM cluster that is associated with the
     * custom key store.</p>
     */
    inline CustomKeyStoresListEntry& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}


    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline const Aws::String& GetTrustAnchorCertificate() const{ return m_trustAnchorCertificate; }

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline bool TrustAnchorCertificateHasBeenSet() const { return m_trustAnchorCertificateHasBeenSet; }

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline void SetTrustAnchorCertificate(const Aws::String& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = value; }

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline void SetTrustAnchorCertificate(Aws::String&& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = std::move(value); }

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline void SetTrustAnchorCertificate(const char* value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate.assign(value); }

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline CustomKeyStoresListEntry& WithTrustAnchorCertificate(const Aws::String& value) { SetTrustAnchorCertificate(value); return *this;}

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline CustomKeyStoresListEntry& WithTrustAnchorCertificate(Aws::String&& value) { SetTrustAnchorCertificate(std::move(value)); return *this;}

    /**
     * <p>The trust anchor certificate of the associated AWS CloudHSM cluster. When you
     * <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p>
     */
    inline CustomKeyStoresListEntry& WithTrustAnchorCertificate(const char* value) { SetTrustAnchorCertificate(value); return *this;}


    /**
     * <p>Indicates whether the custom key store is connected to its AWS CloudHSM
     * cluster.</p> <p>You can create and use CMKs in your custom key stores only when
     * its connection state is <code>CONNECTED</code>.</p> <p>The value is
     * <code>DISCONNECTED</code> if the key store has never been connected or you use
     * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is
     * <code>CONNECTED</code> but you are having trouble using the custom key store,
     * make sure that its associated AWS CloudHSM cluster is active and contains at
     * least one active HSM.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. For help resolving a connection failure,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a Custom Key Store</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const ConnectionStateType& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>Indicates whether the custom key store is connected to its AWS CloudHSM
     * cluster.</p> <p>You can create and use CMKs in your custom key stores only when
     * its connection state is <code>CONNECTED</code>.</p> <p>The value is
     * <code>DISCONNECTED</code> if the key store has never been connected or you use
     * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is
     * <code>CONNECTED</code> but you are having trouble using the custom key store,
     * make sure that its associated AWS CloudHSM cluster is active and contains at
     * least one active HSM.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. For help resolving a connection failure,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a Custom Key Store</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * <p>Indicates whether the custom key store is connected to its AWS CloudHSM
     * cluster.</p> <p>You can create and use CMKs in your custom key stores only when
     * its connection state is <code>CONNECTED</code>.</p> <p>The value is
     * <code>DISCONNECTED</code> if the key store has never been connected or you use
     * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is
     * <code>CONNECTED</code> but you are having trouble using the custom key store,
     * make sure that its associated AWS CloudHSM cluster is active and contains at
     * least one active HSM.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. For help resolving a connection failure,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a Custom Key Store</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetConnectionState(const ConnectionStateType& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>Indicates whether the custom key store is connected to its AWS CloudHSM
     * cluster.</p> <p>You can create and use CMKs in your custom key stores only when
     * its connection state is <code>CONNECTED</code>.</p> <p>The value is
     * <code>DISCONNECTED</code> if the key store has never been connected or you use
     * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is
     * <code>CONNECTED</code> but you are having trouble using the custom key store,
     * make sure that its associated AWS CloudHSM cluster is active and contains at
     * least one active HSM.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. For help resolving a connection failure,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a Custom Key Store</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetConnectionState(ConnectionStateType&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * <p>Indicates whether the custom key store is connected to its AWS CloudHSM
     * cluster.</p> <p>You can create and use CMKs in your custom key stores only when
     * its connection state is <code>CONNECTED</code>.</p> <p>The value is
     * <code>DISCONNECTED</code> if the key store has never been connected or you use
     * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is
     * <code>CONNECTED</code> but you are having trouble using the custom key store,
     * make sure that its associated AWS CloudHSM cluster is active and contains at
     * least one active HSM.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. For help resolving a connection failure,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a Custom Key Store</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CustomKeyStoresListEntry& WithConnectionState(const ConnectionStateType& value) { SetConnectionState(value); return *this;}

    /**
     * <p>Indicates whether the custom key store is connected to its AWS CloudHSM
     * cluster.</p> <p>You can create and use CMKs in your custom key stores only when
     * its connection state is <code>CONNECTED</code>.</p> <p>The value is
     * <code>DISCONNECTED</code> if the key store has never been connected or you use
     * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is
     * <code>CONNECTED</code> but you are having trouble using the custom key store,
     * make sure that its associated AWS CloudHSM cluster is active and contains at
     * least one active HSM.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. For help resolving a connection failure,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a Custom Key Store</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CustomKeyStoresListEntry& WithConnectionState(ConnectionStateType&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>Describes the connection error. Valid values are:</p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster
     * with the specified cluster ID.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster
     * does not contain any active HSMs. To connect a custom key store to its AWS
     * CloudHSM cluster, the cluster must contain at least one active HSM.</p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code> - AWS KMS could not complete the request
     * due to an internal error. Retry the request. For
     * <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store
     * before trying to connect again.</p> </li> <li> <p>
     * <code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password
     * for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster.</p> </li>
     * <li> <p> <code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS
     * from connecting to the custom key store.</p> </li> <li> <p>
     * <code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out
     * of the associated AWS CloudHSM cluster due to too many failed password attempts.
     * Before you can connect your custom key store to its AWS CloudHSM cluster, you
     * must change the <code>kmsuser</code> account password and update the password
     * value for the custom key store.</p> </li> </ul> <p>For help with connection
     * failures, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * Custom Key Stores</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const ConnectionErrorCodeType& GetConnectionErrorCode() const{ return m_connectionErrorCode; }

    /**
     * <p>Describes the connection error. Valid values are:</p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster
     * with the specified cluster ID.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster
     * does not contain any active HSMs. To connect a custom key store to its AWS
     * CloudHSM cluster, the cluster must contain at least one active HSM.</p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code> - AWS KMS could not complete the request
     * due to an internal error. Retry the request. For
     * <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store
     * before trying to connect again.</p> </li> <li> <p>
     * <code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password
     * for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster.</p> </li>
     * <li> <p> <code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS
     * from connecting to the custom key store.</p> </li> <li> <p>
     * <code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out
     * of the associated AWS CloudHSM cluster due to too many failed password attempts.
     * Before you can connect your custom key store to its AWS CloudHSM cluster, you
     * must change the <code>kmsuser</code> account password and update the password
     * value for the custom key store.</p> </li> </ul> <p>For help with connection
     * failures, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * Custom Key Stores</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline bool ConnectionErrorCodeHasBeenSet() const { return m_connectionErrorCodeHasBeenSet; }

    /**
     * <p>Describes the connection error. Valid values are:</p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster
     * with the specified cluster ID.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster
     * does not contain any active HSMs. To connect a custom key store to its AWS
     * CloudHSM cluster, the cluster must contain at least one active HSM.</p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code> - AWS KMS could not complete the request
     * due to an internal error. Retry the request. For
     * <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store
     * before trying to connect again.</p> </li> <li> <p>
     * <code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password
     * for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster.</p> </li>
     * <li> <p> <code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS
     * from connecting to the custom key store.</p> </li> <li> <p>
     * <code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out
     * of the associated AWS CloudHSM cluster due to too many failed password attempts.
     * Before you can connect your custom key store to its AWS CloudHSM cluster, you
     * must change the <code>kmsuser</code> account password and update the password
     * value for the custom key store.</p> </li> </ul> <p>For help with connection
     * failures, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * Custom Key Stores</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetConnectionErrorCode(const ConnectionErrorCodeType& value) { m_connectionErrorCodeHasBeenSet = true; m_connectionErrorCode = value; }

    /**
     * <p>Describes the connection error. Valid values are:</p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster
     * with the specified cluster ID.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster
     * does not contain any active HSMs. To connect a custom key store to its AWS
     * CloudHSM cluster, the cluster must contain at least one active HSM.</p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code> - AWS KMS could not complete the request
     * due to an internal error. Retry the request. For
     * <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store
     * before trying to connect again.</p> </li> <li> <p>
     * <code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password
     * for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster.</p> </li>
     * <li> <p> <code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS
     * from connecting to the custom key store.</p> </li> <li> <p>
     * <code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out
     * of the associated AWS CloudHSM cluster due to too many failed password attempts.
     * Before you can connect your custom key store to its AWS CloudHSM cluster, you
     * must change the <code>kmsuser</code> account password and update the password
     * value for the custom key store.</p> </li> </ul> <p>For help with connection
     * failures, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * Custom Key Stores</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetConnectionErrorCode(ConnectionErrorCodeType&& value) { m_connectionErrorCodeHasBeenSet = true; m_connectionErrorCode = std::move(value); }

    /**
     * <p>Describes the connection error. Valid values are:</p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster
     * with the specified cluster ID.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster
     * does not contain any active HSMs. To connect a custom key store to its AWS
     * CloudHSM cluster, the cluster must contain at least one active HSM.</p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code> - AWS KMS could not complete the request
     * due to an internal error. Retry the request. For
     * <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store
     * before trying to connect again.</p> </li> <li> <p>
     * <code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password
     * for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster.</p> </li>
     * <li> <p> <code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS
     * from connecting to the custom key store.</p> </li> <li> <p>
     * <code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out
     * of the associated AWS CloudHSM cluster due to too many failed password attempts.
     * Before you can connect your custom key store to its AWS CloudHSM cluster, you
     * must change the <code>kmsuser</code> account password and update the password
     * value for the custom key store.</p> </li> </ul> <p>For help with connection
     * failures, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * Custom Key Stores</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CustomKeyStoresListEntry& WithConnectionErrorCode(const ConnectionErrorCodeType& value) { SetConnectionErrorCode(value); return *this;}

    /**
     * <p>Describes the connection error. Valid values are:</p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> - AWS KMS cannot find the AWS CloudHSM cluster
     * with the specified cluster ID.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CLOUDHSM_HSMS</code> - The associated AWS CloudHSM cluster
     * does not contain any active HSMs. To connect a custom key store to its AWS
     * CloudHSM cluster, the cluster must contain at least one active HSM.</p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code> - AWS KMS could not complete the request
     * due to an internal error. Retry the request. For
     * <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store
     * before trying to connect again.</p> </li> <li> <p>
     * <code>INVALID_CREDENTIALS</code> - AWS KMS does not have the correct password
     * for the <code>kmsuser</code> crypto user in the AWS CloudHSM cluster.</p> </li>
     * <li> <p> <code>NETWORK_ERRORS</code> - Network errors are preventing AWS KMS
     * from connecting to the custom key store.</p> </li> <li> <p>
     * <code>USER_LOCKED_OUT</code> - The <code>kmsuser</code> CU account is locked out
     * of the associated AWS CloudHSM cluster due to too many failed password attempts.
     * Before you can connect your custom key store to its AWS CloudHSM cluster, you
     * must change the <code>kmsuser</code> account password and update the password
     * value for the custom key store.</p> </li> </ul> <p>For help with connection
     * failures, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * Custom Key Stores</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CustomKeyStoresListEntry& WithConnectionErrorCode(ConnectionErrorCodeType&& value) { SetConnectionErrorCode(std::move(value)); return *this;}


    /**
     * <p>The date and time when the custom key store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the custom key store was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the custom key store was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the custom key store was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the custom key store was created.</p>
     */
    inline CustomKeyStoresListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the custom key store was created.</p>
     */
    inline CustomKeyStoresListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet;

    Aws::String m_customKeyStoreName;
    bool m_customKeyStoreNameHasBeenSet;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet;

    Aws::String m_trustAnchorCertificate;
    bool m_trustAnchorCertificateHasBeenSet;

    ConnectionStateType m_connectionState;
    bool m_connectionStateHasBeenSet;

    ConnectionErrorCodeType m_connectionErrorCode;
    bool m_connectionErrorCodeHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
