/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/ConnectionStateType.h>
#include <aws/kms/model/ConnectionErrorCodeType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/CustomKeyStoreType.h>
#include <aws/kms/model/XksProxyConfigurationType.h>
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
  class CustomKeyStoresListEntry
  {
  public:
    AWS_KMS_API CustomKeyStoresListEntry();
    AWS_KMS_API CustomKeyStoresListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API CustomKeyStoresListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CloudHSM cluster that is associated with an
     * CloudHSM key store. This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}


    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline const Aws::String& GetTrustAnchorCertificate() const{ return m_trustAnchorCertificate; }

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline bool TrustAnchorCertificateHasBeenSet() const { return m_trustAnchorCertificateHasBeenSet; }

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline void SetTrustAnchorCertificate(const Aws::String& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = value; }

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline void SetTrustAnchorCertificate(Aws::String&& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = std::move(value); }

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline void SetTrustAnchorCertificate(const char* value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate.assign(value); }

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithTrustAnchorCertificate(const Aws::String& value) { SetTrustAnchorCertificate(value); return *this;}

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithTrustAnchorCertificate(Aws::String&& value) { SetTrustAnchorCertificate(std::move(value)); return *this;}

    /**
     * <p>The trust anchor certificate of the CloudHSM cluster associated with an
     * CloudHSM key store. When you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize
     * the cluster</a>, you create this certificate and save it in the
     * <code>customerCA.crt</code> file.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithTrustAnchorCertificate(const char* value) { SetTrustAnchorCertificate(value); return *this;}


    /**
     * <p>Indicates whether the custom key store is connected to its backing key store.
     * For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it
     * is connected to its CloudHSM cluster. For an external key store, the
     * <code>ConnectionState</code> indicates whether it is connected to the external
     * key store proxy that communicates with your external key manager.</p> <p>You can
     * create and use KMS keys in your custom key stores only when its
     * <code>ConnectionState</code> is <code>CONNECTED</code>.</p> <p>The
     * <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key
     * store has never been connected or you use the <a>DisconnectCustomKeyStore</a>
     * operation to disconnect it. If the value is <code>CONNECTED</code> but you are
     * having trouble using the custom key store, make sure that the backing key store
     * is reachable and active. For an CloudHSM key store, verify that its associated
     * CloudHSM cluster is active and contains at least one active HSM. For an external
     * key store, verify that the external key store proxy and external key manager are
     * connected and enabled.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field
     * in the response indicates the cause of the failure. For help resolving a
     * connection failure, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const ConnectionStateType& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>Indicates whether the custom key store is connected to its backing key store.
     * For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it
     * is connected to its CloudHSM cluster. For an external key store, the
     * <code>ConnectionState</code> indicates whether it is connected to the external
     * key store proxy that communicates with your external key manager.</p> <p>You can
     * create and use KMS keys in your custom key stores only when its
     * <code>ConnectionState</code> is <code>CONNECTED</code>.</p> <p>The
     * <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key
     * store has never been connected or you use the <a>DisconnectCustomKeyStore</a>
     * operation to disconnect it. If the value is <code>CONNECTED</code> but you are
     * having trouble using the custom key store, make sure that the backing key store
     * is reachable and active. For an CloudHSM key store, verify that its associated
     * CloudHSM cluster is active and contains at least one active HSM. For an external
     * key store, verify that the external key store proxy and external key manager are
     * connected and enabled.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field
     * in the response indicates the cause of the failure. For help resolving a
     * connection failure, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * <p>Indicates whether the custom key store is connected to its backing key store.
     * For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it
     * is connected to its CloudHSM cluster. For an external key store, the
     * <code>ConnectionState</code> indicates whether it is connected to the external
     * key store proxy that communicates with your external key manager.</p> <p>You can
     * create and use KMS keys in your custom key stores only when its
     * <code>ConnectionState</code> is <code>CONNECTED</code>.</p> <p>The
     * <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key
     * store has never been connected or you use the <a>DisconnectCustomKeyStore</a>
     * operation to disconnect it. If the value is <code>CONNECTED</code> but you are
     * having trouble using the custom key store, make sure that the backing key store
     * is reachable and active. For an CloudHSM key store, verify that its associated
     * CloudHSM cluster is active and contains at least one active HSM. For an external
     * key store, verify that the external key store proxy and external key manager are
     * connected and enabled.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field
     * in the response indicates the cause of the failure. For help resolving a
     * connection failure, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetConnectionState(const ConnectionStateType& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>Indicates whether the custom key store is connected to its backing key store.
     * For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it
     * is connected to its CloudHSM cluster. For an external key store, the
     * <code>ConnectionState</code> indicates whether it is connected to the external
     * key store proxy that communicates with your external key manager.</p> <p>You can
     * create and use KMS keys in your custom key stores only when its
     * <code>ConnectionState</code> is <code>CONNECTED</code>.</p> <p>The
     * <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key
     * store has never been connected or you use the <a>DisconnectCustomKeyStore</a>
     * operation to disconnect it. If the value is <code>CONNECTED</code> but you are
     * having trouble using the custom key store, make sure that the backing key store
     * is reachable and active. For an CloudHSM key store, verify that its associated
     * CloudHSM cluster is active and contains at least one active HSM. For an external
     * key store, verify that the external key store proxy and external key manager are
     * connected and enabled.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field
     * in the response indicates the cause of the failure. For help resolving a
     * connection failure, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetConnectionState(ConnectionStateType&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * <p>Indicates whether the custom key store is connected to its backing key store.
     * For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it
     * is connected to its CloudHSM cluster. For an external key store, the
     * <code>ConnectionState</code> indicates whether it is connected to the external
     * key store proxy that communicates with your external key manager.</p> <p>You can
     * create and use KMS keys in your custom key stores only when its
     * <code>ConnectionState</code> is <code>CONNECTED</code>.</p> <p>The
     * <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key
     * store has never been connected or you use the <a>DisconnectCustomKeyStore</a>
     * operation to disconnect it. If the value is <code>CONNECTED</code> but you are
     * having trouble using the custom key store, make sure that the backing key store
     * is reachable and active. For an CloudHSM key store, verify that its associated
     * CloudHSM cluster is active and contains at least one active HSM. For an external
     * key store, verify that the external key store proxy and external key manager are
     * connected and enabled.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field
     * in the response indicates the cause of the failure. For help resolving a
     * connection failure, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline CustomKeyStoresListEntry& WithConnectionState(const ConnectionStateType& value) { SetConnectionState(value); return *this;}

    /**
     * <p>Indicates whether the custom key store is connected to its backing key store.
     * For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it
     * is connected to its CloudHSM cluster. For an external key store, the
     * <code>ConnectionState</code> indicates whether it is connected to the external
     * key store proxy that communicates with your external key manager.</p> <p>You can
     * create and use KMS keys in your custom key stores only when its
     * <code>ConnectionState</code> is <code>CONNECTED</code>.</p> <p>The
     * <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key
     * store has never been connected or you use the <a>DisconnectCustomKeyStore</a>
     * operation to disconnect it. If the value is <code>CONNECTED</code> but you are
     * having trouble using the custom key store, make sure that the backing key store
     * is reachable and active. For an CloudHSM key store, verify that its associated
     * CloudHSM cluster is active and contains at least one active HSM. For an external
     * key store, verify that the external key store proxy and external key manager are
     * connected and enabled.</p> <p>A value of <code>FAILED</code> indicates that an
     * attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field
     * in the response indicates the cause of the failure. For help resolving a
     * connection failure, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
     * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline CustomKeyStoresListEntry& WithConnectionState(ConnectionStateType&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>Describes the connection error. This field appears in the response only when
     * the <code>ConnectionState</code> is <code>FAILED</code>.</p> <p>Many failures
     * can be resolved by updating the properties of the custom key store. To update a
     * custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the
     * errors (<a>UpdateCustomKeyStore</a>), and try to connect again
     * (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in <i>Key Management Service Developer
     * Guide</i>.</p> <p> <b>All custom key stores:</b> </p> <ul> <li> <p>
     * <code>INTERNAL_ERROR</code> — KMS could not complete the request due to an
     * internal error. Retry the request. For <code>ConnectCustomKeyStore</code>
     * requests, disconnect the custom key store before trying to connect again.</p>
     * </li> <li> <p> <code>NETWORK_ERRORS</code> — Network errors are preventing KMS
     * from connecting the custom key store to its backing key store.</p> </li> </ul>
     * <p> <b>CloudHSM key stores:</b> </p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the
     * specified cluster ID.</p> </li> <li> <p> <code>INSUFFICIENT_CLOUDHSM_HSMS</code>
     * — The associated CloudHSM cluster does not contain any active HSMs. To connect a
     * custom key store to its CloudHSM cluster, the cluster must contain at least one
     * active HSM.</p> </li> <li> <p>
     * <code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet
     * associated with the CloudHSM cluster doesn't have any available IP addresses. A
     * CloudHSM key store connection requires one free IP address in each of the
     * associated private subnets, although two are preferable. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>INVALID_CREDENTIALS</code> — The
     * <code>KeyStorePassword</code> for the custom key store doesn't match the current
     * password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must change
     * the <code>kmsuser</code> account password and update the
     * <code>KeyStorePassword</code> value for the custom key store.</p> </li> <li> <p>
     * <code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration
     * was deleted. If KMS cannot find all of the subnets in the cluster configuration,
     * attempts to connect the custom key store to the CloudHSM cluster fail. To fix
     * this error, create a cluster from a recent backup and associate it with your
     * custom key store. (This process creates a new cluster configuration with a VPC
     * and private subnets.) For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_LOCKED_OUT</code> — The
     * <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster
     * due to too many failed password attempts. Before you can connect your custom key
     * store to its CloudHSM cluster, you must change the <code>kmsuser</code> account
     * password and update the key store password value for the custom key store.</p>
     * </li> <li> <p> <code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account
     * is logged into the associated CloudHSM cluster. This prevents KMS from rotating
     * the <code>kmsuser</code> account password and logging into the cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must log the
     * <code>kmsuser</code> CU out of the cluster. If you changed the
     * <code>kmsuser</code> password to log into the cluster, you must also and update
     * the key store password value for the custom key store. For help, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How
     * to Log Out and Reconnect</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_NOT_FOUND</code> — KMS cannot find a
     * <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you
     * can connect your custom key store to its CloudHSM cluster, you must create a
     * <code>kmsuser</code> CU account in the cluster, and then update the key store
     * password value for the custom key store.</p> </li> </ul> <p> <b>External key
     * stores:</b> </p> <ul> <li> <p> <code>INVALID_CREDENTIALS</code> — One or both of
     * the <code>XksProxyAuthenticationCredential</code> values is not valid on the
     * specified external key store proxy.</p> </li> <li> <p>
     * <code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the
     * external key store proxy. If the external key store proxy has authorization
     * rules, verify that they permit KMS to communicate with the proxy on your
     * behalf.</p> </li> <li> <p> <code>XKS_PROXY_INVALID_CONFIGURATION</code> — A
     * configuration error is preventing the external key store from connecting to its
     * proxy. Verify the value of the <code>XksProxyUriPath</code>.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from
     * the external key store proxy. If you see this connection error code repeatedly,
     * notify your external key store proxy vendor.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the
     * external key store proxy because the TLS configuration is invalid. Verify that
     * the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is
     * not expired, and that it matches the hostname in the
     * <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate
     * authority included in the <a
     * href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted
     * Certificate Authorities</a> list.</p> </li> <li> <p>
     * <code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external
     * key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> are correct. Use the tools for your external key
     * store proxy to verify that the proxy is active and available on its network.
     * Also, verify that your external key manager instances are operating properly.
     * Connection attempts fail with this connection error code if the proxy reports
     * that all external key manager instances are unavailable.</p> </li> <li> <p>
     * <code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store
     * proxy, but the proxy does not respond to KMS in the time allotted. If you see
     * this connection error code repeatedly, notify your external key store proxy
     * vendor.</p> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC
     * endpoint service configuration doesn't conform to the requirements for an KMS
     * external key store.</p> <ul> <li> <p>The VPC endpoint service must be an
     * endpoint service for interface endpoints in the caller's Amazon Web Services
     * account.</p> </li> <li> <p>It must have a network load balancer (NLB) connected
     * to at least two subnets, each in a different Availability Zone.</p> </li> <li>
     * <p>The <code>Allow principals</code> list must include the KMS service principal
     * for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as
     * <code>cks.kms.us-east-1.amazonaws.com</code>.</p> </li> <li> <p>It must
     * <i>not</i> require <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a>
     * of connection requests.</p> </li> <li> <p>It must have a private DNS name. The
     * private DNS name for an external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web
     * Services Region.</p> </li> <li> <p>The domain of the private DNS name must have
     * a <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification
     * status</a> of <code>verified</code>.</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
     * certificate</a> specifies the private DNS hostname at which the endpoint is
     * reachable.</p> </li> </ul> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC
     * endpoint service that it uses to communicate with the external key store proxy.
     * Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the
     * KMS service principal has service consumer permissions on the Amazon VPC
     * endpoint service.</p> </li> </ul>
     */
    inline const ConnectionErrorCodeType& GetConnectionErrorCode() const{ return m_connectionErrorCode; }

    /**
     * <p>Describes the connection error. This field appears in the response only when
     * the <code>ConnectionState</code> is <code>FAILED</code>.</p> <p>Many failures
     * can be resolved by updating the properties of the custom key store. To update a
     * custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the
     * errors (<a>UpdateCustomKeyStore</a>), and try to connect again
     * (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in <i>Key Management Service Developer
     * Guide</i>.</p> <p> <b>All custom key stores:</b> </p> <ul> <li> <p>
     * <code>INTERNAL_ERROR</code> — KMS could not complete the request due to an
     * internal error. Retry the request. For <code>ConnectCustomKeyStore</code>
     * requests, disconnect the custom key store before trying to connect again.</p>
     * </li> <li> <p> <code>NETWORK_ERRORS</code> — Network errors are preventing KMS
     * from connecting the custom key store to its backing key store.</p> </li> </ul>
     * <p> <b>CloudHSM key stores:</b> </p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the
     * specified cluster ID.</p> </li> <li> <p> <code>INSUFFICIENT_CLOUDHSM_HSMS</code>
     * — The associated CloudHSM cluster does not contain any active HSMs. To connect a
     * custom key store to its CloudHSM cluster, the cluster must contain at least one
     * active HSM.</p> </li> <li> <p>
     * <code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet
     * associated with the CloudHSM cluster doesn't have any available IP addresses. A
     * CloudHSM key store connection requires one free IP address in each of the
     * associated private subnets, although two are preferable. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>INVALID_CREDENTIALS</code> — The
     * <code>KeyStorePassword</code> for the custom key store doesn't match the current
     * password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must change
     * the <code>kmsuser</code> account password and update the
     * <code>KeyStorePassword</code> value for the custom key store.</p> </li> <li> <p>
     * <code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration
     * was deleted. If KMS cannot find all of the subnets in the cluster configuration,
     * attempts to connect the custom key store to the CloudHSM cluster fail. To fix
     * this error, create a cluster from a recent backup and associate it with your
     * custom key store. (This process creates a new cluster configuration with a VPC
     * and private subnets.) For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_LOCKED_OUT</code> — The
     * <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster
     * due to too many failed password attempts. Before you can connect your custom key
     * store to its CloudHSM cluster, you must change the <code>kmsuser</code> account
     * password and update the key store password value for the custom key store.</p>
     * </li> <li> <p> <code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account
     * is logged into the associated CloudHSM cluster. This prevents KMS from rotating
     * the <code>kmsuser</code> account password and logging into the cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must log the
     * <code>kmsuser</code> CU out of the cluster. If you changed the
     * <code>kmsuser</code> password to log into the cluster, you must also and update
     * the key store password value for the custom key store. For help, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How
     * to Log Out and Reconnect</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_NOT_FOUND</code> — KMS cannot find a
     * <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you
     * can connect your custom key store to its CloudHSM cluster, you must create a
     * <code>kmsuser</code> CU account in the cluster, and then update the key store
     * password value for the custom key store.</p> </li> </ul> <p> <b>External key
     * stores:</b> </p> <ul> <li> <p> <code>INVALID_CREDENTIALS</code> — One or both of
     * the <code>XksProxyAuthenticationCredential</code> values is not valid on the
     * specified external key store proxy.</p> </li> <li> <p>
     * <code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the
     * external key store proxy. If the external key store proxy has authorization
     * rules, verify that they permit KMS to communicate with the proxy on your
     * behalf.</p> </li> <li> <p> <code>XKS_PROXY_INVALID_CONFIGURATION</code> — A
     * configuration error is preventing the external key store from connecting to its
     * proxy. Verify the value of the <code>XksProxyUriPath</code>.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from
     * the external key store proxy. If you see this connection error code repeatedly,
     * notify your external key store proxy vendor.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the
     * external key store proxy because the TLS configuration is invalid. Verify that
     * the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is
     * not expired, and that it matches the hostname in the
     * <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate
     * authority included in the <a
     * href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted
     * Certificate Authorities</a> list.</p> </li> <li> <p>
     * <code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external
     * key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> are correct. Use the tools for your external key
     * store proxy to verify that the proxy is active and available on its network.
     * Also, verify that your external key manager instances are operating properly.
     * Connection attempts fail with this connection error code if the proxy reports
     * that all external key manager instances are unavailable.</p> </li> <li> <p>
     * <code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store
     * proxy, but the proxy does not respond to KMS in the time allotted. If you see
     * this connection error code repeatedly, notify your external key store proxy
     * vendor.</p> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC
     * endpoint service configuration doesn't conform to the requirements for an KMS
     * external key store.</p> <ul> <li> <p>The VPC endpoint service must be an
     * endpoint service for interface endpoints in the caller's Amazon Web Services
     * account.</p> </li> <li> <p>It must have a network load balancer (NLB) connected
     * to at least two subnets, each in a different Availability Zone.</p> </li> <li>
     * <p>The <code>Allow principals</code> list must include the KMS service principal
     * for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as
     * <code>cks.kms.us-east-1.amazonaws.com</code>.</p> </li> <li> <p>It must
     * <i>not</i> require <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a>
     * of connection requests.</p> </li> <li> <p>It must have a private DNS name. The
     * private DNS name for an external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web
     * Services Region.</p> </li> <li> <p>The domain of the private DNS name must have
     * a <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification
     * status</a> of <code>verified</code>.</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
     * certificate</a> specifies the private DNS hostname at which the endpoint is
     * reachable.</p> </li> </ul> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC
     * endpoint service that it uses to communicate with the external key store proxy.
     * Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the
     * KMS service principal has service consumer permissions on the Amazon VPC
     * endpoint service.</p> </li> </ul>
     */
    inline bool ConnectionErrorCodeHasBeenSet() const { return m_connectionErrorCodeHasBeenSet; }

    /**
     * <p>Describes the connection error. This field appears in the response only when
     * the <code>ConnectionState</code> is <code>FAILED</code>.</p> <p>Many failures
     * can be resolved by updating the properties of the custom key store. To update a
     * custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the
     * errors (<a>UpdateCustomKeyStore</a>), and try to connect again
     * (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in <i>Key Management Service Developer
     * Guide</i>.</p> <p> <b>All custom key stores:</b> </p> <ul> <li> <p>
     * <code>INTERNAL_ERROR</code> — KMS could not complete the request due to an
     * internal error. Retry the request. For <code>ConnectCustomKeyStore</code>
     * requests, disconnect the custom key store before trying to connect again.</p>
     * </li> <li> <p> <code>NETWORK_ERRORS</code> — Network errors are preventing KMS
     * from connecting the custom key store to its backing key store.</p> </li> </ul>
     * <p> <b>CloudHSM key stores:</b> </p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the
     * specified cluster ID.</p> </li> <li> <p> <code>INSUFFICIENT_CLOUDHSM_HSMS</code>
     * — The associated CloudHSM cluster does not contain any active HSMs. To connect a
     * custom key store to its CloudHSM cluster, the cluster must contain at least one
     * active HSM.</p> </li> <li> <p>
     * <code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet
     * associated with the CloudHSM cluster doesn't have any available IP addresses. A
     * CloudHSM key store connection requires one free IP address in each of the
     * associated private subnets, although two are preferable. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>INVALID_CREDENTIALS</code> — The
     * <code>KeyStorePassword</code> for the custom key store doesn't match the current
     * password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must change
     * the <code>kmsuser</code> account password and update the
     * <code>KeyStorePassword</code> value for the custom key store.</p> </li> <li> <p>
     * <code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration
     * was deleted. If KMS cannot find all of the subnets in the cluster configuration,
     * attempts to connect the custom key store to the CloudHSM cluster fail. To fix
     * this error, create a cluster from a recent backup and associate it with your
     * custom key store. (This process creates a new cluster configuration with a VPC
     * and private subnets.) For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_LOCKED_OUT</code> — The
     * <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster
     * due to too many failed password attempts. Before you can connect your custom key
     * store to its CloudHSM cluster, you must change the <code>kmsuser</code> account
     * password and update the key store password value for the custom key store.</p>
     * </li> <li> <p> <code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account
     * is logged into the associated CloudHSM cluster. This prevents KMS from rotating
     * the <code>kmsuser</code> account password and logging into the cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must log the
     * <code>kmsuser</code> CU out of the cluster. If you changed the
     * <code>kmsuser</code> password to log into the cluster, you must also and update
     * the key store password value for the custom key store. For help, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How
     * to Log Out and Reconnect</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_NOT_FOUND</code> — KMS cannot find a
     * <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you
     * can connect your custom key store to its CloudHSM cluster, you must create a
     * <code>kmsuser</code> CU account in the cluster, and then update the key store
     * password value for the custom key store.</p> </li> </ul> <p> <b>External key
     * stores:</b> </p> <ul> <li> <p> <code>INVALID_CREDENTIALS</code> — One or both of
     * the <code>XksProxyAuthenticationCredential</code> values is not valid on the
     * specified external key store proxy.</p> </li> <li> <p>
     * <code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the
     * external key store proxy. If the external key store proxy has authorization
     * rules, verify that they permit KMS to communicate with the proxy on your
     * behalf.</p> </li> <li> <p> <code>XKS_PROXY_INVALID_CONFIGURATION</code> — A
     * configuration error is preventing the external key store from connecting to its
     * proxy. Verify the value of the <code>XksProxyUriPath</code>.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from
     * the external key store proxy. If you see this connection error code repeatedly,
     * notify your external key store proxy vendor.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the
     * external key store proxy because the TLS configuration is invalid. Verify that
     * the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is
     * not expired, and that it matches the hostname in the
     * <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate
     * authority included in the <a
     * href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted
     * Certificate Authorities</a> list.</p> </li> <li> <p>
     * <code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external
     * key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> are correct. Use the tools for your external key
     * store proxy to verify that the proxy is active and available on its network.
     * Also, verify that your external key manager instances are operating properly.
     * Connection attempts fail with this connection error code if the proxy reports
     * that all external key manager instances are unavailable.</p> </li> <li> <p>
     * <code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store
     * proxy, but the proxy does not respond to KMS in the time allotted. If you see
     * this connection error code repeatedly, notify your external key store proxy
     * vendor.</p> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC
     * endpoint service configuration doesn't conform to the requirements for an KMS
     * external key store.</p> <ul> <li> <p>The VPC endpoint service must be an
     * endpoint service for interface endpoints in the caller's Amazon Web Services
     * account.</p> </li> <li> <p>It must have a network load balancer (NLB) connected
     * to at least two subnets, each in a different Availability Zone.</p> </li> <li>
     * <p>The <code>Allow principals</code> list must include the KMS service principal
     * for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as
     * <code>cks.kms.us-east-1.amazonaws.com</code>.</p> </li> <li> <p>It must
     * <i>not</i> require <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a>
     * of connection requests.</p> </li> <li> <p>It must have a private DNS name. The
     * private DNS name for an external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web
     * Services Region.</p> </li> <li> <p>The domain of the private DNS name must have
     * a <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification
     * status</a> of <code>verified</code>.</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
     * certificate</a> specifies the private DNS hostname at which the endpoint is
     * reachable.</p> </li> </ul> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC
     * endpoint service that it uses to communicate with the external key store proxy.
     * Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the
     * KMS service principal has service consumer permissions on the Amazon VPC
     * endpoint service.</p> </li> </ul>
     */
    inline void SetConnectionErrorCode(const ConnectionErrorCodeType& value) { m_connectionErrorCodeHasBeenSet = true; m_connectionErrorCode = value; }

    /**
     * <p>Describes the connection error. This field appears in the response only when
     * the <code>ConnectionState</code> is <code>FAILED</code>.</p> <p>Many failures
     * can be resolved by updating the properties of the custom key store. To update a
     * custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the
     * errors (<a>UpdateCustomKeyStore</a>), and try to connect again
     * (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in <i>Key Management Service Developer
     * Guide</i>.</p> <p> <b>All custom key stores:</b> </p> <ul> <li> <p>
     * <code>INTERNAL_ERROR</code> — KMS could not complete the request due to an
     * internal error. Retry the request. For <code>ConnectCustomKeyStore</code>
     * requests, disconnect the custom key store before trying to connect again.</p>
     * </li> <li> <p> <code>NETWORK_ERRORS</code> — Network errors are preventing KMS
     * from connecting the custom key store to its backing key store.</p> </li> </ul>
     * <p> <b>CloudHSM key stores:</b> </p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the
     * specified cluster ID.</p> </li> <li> <p> <code>INSUFFICIENT_CLOUDHSM_HSMS</code>
     * — The associated CloudHSM cluster does not contain any active HSMs. To connect a
     * custom key store to its CloudHSM cluster, the cluster must contain at least one
     * active HSM.</p> </li> <li> <p>
     * <code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet
     * associated with the CloudHSM cluster doesn't have any available IP addresses. A
     * CloudHSM key store connection requires one free IP address in each of the
     * associated private subnets, although two are preferable. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>INVALID_CREDENTIALS</code> — The
     * <code>KeyStorePassword</code> for the custom key store doesn't match the current
     * password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must change
     * the <code>kmsuser</code> account password and update the
     * <code>KeyStorePassword</code> value for the custom key store.</p> </li> <li> <p>
     * <code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration
     * was deleted. If KMS cannot find all of the subnets in the cluster configuration,
     * attempts to connect the custom key store to the CloudHSM cluster fail. To fix
     * this error, create a cluster from a recent backup and associate it with your
     * custom key store. (This process creates a new cluster configuration with a VPC
     * and private subnets.) For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_LOCKED_OUT</code> — The
     * <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster
     * due to too many failed password attempts. Before you can connect your custom key
     * store to its CloudHSM cluster, you must change the <code>kmsuser</code> account
     * password and update the key store password value for the custom key store.</p>
     * </li> <li> <p> <code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account
     * is logged into the associated CloudHSM cluster. This prevents KMS from rotating
     * the <code>kmsuser</code> account password and logging into the cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must log the
     * <code>kmsuser</code> CU out of the cluster. If you changed the
     * <code>kmsuser</code> password to log into the cluster, you must also and update
     * the key store password value for the custom key store. For help, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How
     * to Log Out and Reconnect</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_NOT_FOUND</code> — KMS cannot find a
     * <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you
     * can connect your custom key store to its CloudHSM cluster, you must create a
     * <code>kmsuser</code> CU account in the cluster, and then update the key store
     * password value for the custom key store.</p> </li> </ul> <p> <b>External key
     * stores:</b> </p> <ul> <li> <p> <code>INVALID_CREDENTIALS</code> — One or both of
     * the <code>XksProxyAuthenticationCredential</code> values is not valid on the
     * specified external key store proxy.</p> </li> <li> <p>
     * <code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the
     * external key store proxy. If the external key store proxy has authorization
     * rules, verify that they permit KMS to communicate with the proxy on your
     * behalf.</p> </li> <li> <p> <code>XKS_PROXY_INVALID_CONFIGURATION</code> — A
     * configuration error is preventing the external key store from connecting to its
     * proxy. Verify the value of the <code>XksProxyUriPath</code>.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from
     * the external key store proxy. If you see this connection error code repeatedly,
     * notify your external key store proxy vendor.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the
     * external key store proxy because the TLS configuration is invalid. Verify that
     * the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is
     * not expired, and that it matches the hostname in the
     * <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate
     * authority included in the <a
     * href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted
     * Certificate Authorities</a> list.</p> </li> <li> <p>
     * <code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external
     * key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> are correct. Use the tools for your external key
     * store proxy to verify that the proxy is active and available on its network.
     * Also, verify that your external key manager instances are operating properly.
     * Connection attempts fail with this connection error code if the proxy reports
     * that all external key manager instances are unavailable.</p> </li> <li> <p>
     * <code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store
     * proxy, but the proxy does not respond to KMS in the time allotted. If you see
     * this connection error code repeatedly, notify your external key store proxy
     * vendor.</p> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC
     * endpoint service configuration doesn't conform to the requirements for an KMS
     * external key store.</p> <ul> <li> <p>The VPC endpoint service must be an
     * endpoint service for interface endpoints in the caller's Amazon Web Services
     * account.</p> </li> <li> <p>It must have a network load balancer (NLB) connected
     * to at least two subnets, each in a different Availability Zone.</p> </li> <li>
     * <p>The <code>Allow principals</code> list must include the KMS service principal
     * for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as
     * <code>cks.kms.us-east-1.amazonaws.com</code>.</p> </li> <li> <p>It must
     * <i>not</i> require <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a>
     * of connection requests.</p> </li> <li> <p>It must have a private DNS name. The
     * private DNS name for an external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web
     * Services Region.</p> </li> <li> <p>The domain of the private DNS name must have
     * a <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification
     * status</a> of <code>verified</code>.</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
     * certificate</a> specifies the private DNS hostname at which the endpoint is
     * reachable.</p> </li> </ul> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC
     * endpoint service that it uses to communicate with the external key store proxy.
     * Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the
     * KMS service principal has service consumer permissions on the Amazon VPC
     * endpoint service.</p> </li> </ul>
     */
    inline void SetConnectionErrorCode(ConnectionErrorCodeType&& value) { m_connectionErrorCodeHasBeenSet = true; m_connectionErrorCode = std::move(value); }

    /**
     * <p>Describes the connection error. This field appears in the response only when
     * the <code>ConnectionState</code> is <code>FAILED</code>.</p> <p>Many failures
     * can be resolved by updating the properties of the custom key store. To update a
     * custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the
     * errors (<a>UpdateCustomKeyStore</a>), and try to connect again
     * (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in <i>Key Management Service Developer
     * Guide</i>.</p> <p> <b>All custom key stores:</b> </p> <ul> <li> <p>
     * <code>INTERNAL_ERROR</code> — KMS could not complete the request due to an
     * internal error. Retry the request. For <code>ConnectCustomKeyStore</code>
     * requests, disconnect the custom key store before trying to connect again.</p>
     * </li> <li> <p> <code>NETWORK_ERRORS</code> — Network errors are preventing KMS
     * from connecting the custom key store to its backing key store.</p> </li> </ul>
     * <p> <b>CloudHSM key stores:</b> </p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the
     * specified cluster ID.</p> </li> <li> <p> <code>INSUFFICIENT_CLOUDHSM_HSMS</code>
     * — The associated CloudHSM cluster does not contain any active HSMs. To connect a
     * custom key store to its CloudHSM cluster, the cluster must contain at least one
     * active HSM.</p> </li> <li> <p>
     * <code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet
     * associated with the CloudHSM cluster doesn't have any available IP addresses. A
     * CloudHSM key store connection requires one free IP address in each of the
     * associated private subnets, although two are preferable. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>INVALID_CREDENTIALS</code> — The
     * <code>KeyStorePassword</code> for the custom key store doesn't match the current
     * password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must change
     * the <code>kmsuser</code> account password and update the
     * <code>KeyStorePassword</code> value for the custom key store.</p> </li> <li> <p>
     * <code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration
     * was deleted. If KMS cannot find all of the subnets in the cluster configuration,
     * attempts to connect the custom key store to the CloudHSM cluster fail. To fix
     * this error, create a cluster from a recent backup and associate it with your
     * custom key store. (This process creates a new cluster configuration with a VPC
     * and private subnets.) For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_LOCKED_OUT</code> — The
     * <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster
     * due to too many failed password attempts. Before you can connect your custom key
     * store to its CloudHSM cluster, you must change the <code>kmsuser</code> account
     * password and update the key store password value for the custom key store.</p>
     * </li> <li> <p> <code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account
     * is logged into the associated CloudHSM cluster. This prevents KMS from rotating
     * the <code>kmsuser</code> account password and logging into the cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must log the
     * <code>kmsuser</code> CU out of the cluster. If you changed the
     * <code>kmsuser</code> password to log into the cluster, you must also and update
     * the key store password value for the custom key store. For help, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How
     * to Log Out and Reconnect</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_NOT_FOUND</code> — KMS cannot find a
     * <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you
     * can connect your custom key store to its CloudHSM cluster, you must create a
     * <code>kmsuser</code> CU account in the cluster, and then update the key store
     * password value for the custom key store.</p> </li> </ul> <p> <b>External key
     * stores:</b> </p> <ul> <li> <p> <code>INVALID_CREDENTIALS</code> — One or both of
     * the <code>XksProxyAuthenticationCredential</code> values is not valid on the
     * specified external key store proxy.</p> </li> <li> <p>
     * <code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the
     * external key store proxy. If the external key store proxy has authorization
     * rules, verify that they permit KMS to communicate with the proxy on your
     * behalf.</p> </li> <li> <p> <code>XKS_PROXY_INVALID_CONFIGURATION</code> — A
     * configuration error is preventing the external key store from connecting to its
     * proxy. Verify the value of the <code>XksProxyUriPath</code>.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from
     * the external key store proxy. If you see this connection error code repeatedly,
     * notify your external key store proxy vendor.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the
     * external key store proxy because the TLS configuration is invalid. Verify that
     * the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is
     * not expired, and that it matches the hostname in the
     * <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate
     * authority included in the <a
     * href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted
     * Certificate Authorities</a> list.</p> </li> <li> <p>
     * <code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external
     * key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> are correct. Use the tools for your external key
     * store proxy to verify that the proxy is active and available on its network.
     * Also, verify that your external key manager instances are operating properly.
     * Connection attempts fail with this connection error code if the proxy reports
     * that all external key manager instances are unavailable.</p> </li> <li> <p>
     * <code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store
     * proxy, but the proxy does not respond to KMS in the time allotted. If you see
     * this connection error code repeatedly, notify your external key store proxy
     * vendor.</p> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC
     * endpoint service configuration doesn't conform to the requirements for an KMS
     * external key store.</p> <ul> <li> <p>The VPC endpoint service must be an
     * endpoint service for interface endpoints in the caller's Amazon Web Services
     * account.</p> </li> <li> <p>It must have a network load balancer (NLB) connected
     * to at least two subnets, each in a different Availability Zone.</p> </li> <li>
     * <p>The <code>Allow principals</code> list must include the KMS service principal
     * for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as
     * <code>cks.kms.us-east-1.amazonaws.com</code>.</p> </li> <li> <p>It must
     * <i>not</i> require <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a>
     * of connection requests.</p> </li> <li> <p>It must have a private DNS name. The
     * private DNS name for an external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web
     * Services Region.</p> </li> <li> <p>The domain of the private DNS name must have
     * a <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification
     * status</a> of <code>verified</code>.</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
     * certificate</a> specifies the private DNS hostname at which the endpoint is
     * reachable.</p> </li> </ul> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC
     * endpoint service that it uses to communicate with the external key store proxy.
     * Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the
     * KMS service principal has service consumer permissions on the Amazon VPC
     * endpoint service.</p> </li> </ul>
     */
    inline CustomKeyStoresListEntry& WithConnectionErrorCode(const ConnectionErrorCodeType& value) { SetConnectionErrorCode(value); return *this;}

    /**
     * <p>Describes the connection error. This field appears in the response only when
     * the <code>ConnectionState</code> is <code>FAILED</code>.</p> <p>Many failures
     * can be resolved by updating the properties of the custom key store. To update a
     * custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the
     * errors (<a>UpdateCustomKeyStore</a>), and try to connect again
     * (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in <i>Key Management Service Developer
     * Guide</i>.</p> <p> <b>All custom key stores:</b> </p> <ul> <li> <p>
     * <code>INTERNAL_ERROR</code> — KMS could not complete the request due to an
     * internal error. Retry the request. For <code>ConnectCustomKeyStore</code>
     * requests, disconnect the custom key store before trying to connect again.</p>
     * </li> <li> <p> <code>NETWORK_ERRORS</code> — Network errors are preventing KMS
     * from connecting the custom key store to its backing key store.</p> </li> </ul>
     * <p> <b>CloudHSM key stores:</b> </p> <ul> <li> <p>
     * <code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the
     * specified cluster ID.</p> </li> <li> <p> <code>INSUFFICIENT_CLOUDHSM_HSMS</code>
     * — The associated CloudHSM cluster does not contain any active HSMs. To connect a
     * custom key store to its CloudHSM cluster, the cluster must contain at least one
     * active HSM.</p> </li> <li> <p>
     * <code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet
     * associated with the CloudHSM cluster doesn't have any available IP addresses. A
     * CloudHSM key store connection requires one free IP address in each of the
     * associated private subnets, although two are preferable. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>INVALID_CREDENTIALS</code> — The
     * <code>KeyStorePassword</code> for the custom key store doesn't match the current
     * password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must change
     * the <code>kmsuser</code> account password and update the
     * <code>KeyStorePassword</code> value for the custom key store.</p> </li> <li> <p>
     * <code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration
     * was deleted. If KMS cannot find all of the subnets in the cluster configuration,
     * attempts to connect the custom key store to the CloudHSM cluster fail. To fix
     * this error, create a cluster from a recent backup and associate it with your
     * custom key store. (This process creates a new cluster configuration with a VPC
     * and private subnets.) For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How
     * to Fix a Connection Failure</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_LOCKED_OUT</code> — The
     * <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster
     * due to too many failed password attempts. Before you can connect your custom key
     * store to its CloudHSM cluster, you must change the <code>kmsuser</code> account
     * password and update the key store password value for the custom key store.</p>
     * </li> <li> <p> <code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account
     * is logged into the associated CloudHSM cluster. This prevents KMS from rotating
     * the <code>kmsuser</code> account password and logging into the cluster. Before
     * you can connect your custom key store to its CloudHSM cluster, you must log the
     * <code>kmsuser</code> CU out of the cluster. If you changed the
     * <code>kmsuser</code> password to log into the cluster, you must also and update
     * the key store password value for the custom key store. For help, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How
     * to Log Out and Reconnect</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>USER_NOT_FOUND</code> — KMS cannot find a
     * <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you
     * can connect your custom key store to its CloudHSM cluster, you must create a
     * <code>kmsuser</code> CU account in the cluster, and then update the key store
     * password value for the custom key store.</p> </li> </ul> <p> <b>External key
     * stores:</b> </p> <ul> <li> <p> <code>INVALID_CREDENTIALS</code> — One or both of
     * the <code>XksProxyAuthenticationCredential</code> values is not valid on the
     * specified external key store proxy.</p> </li> <li> <p>
     * <code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the
     * external key store proxy. If the external key store proxy has authorization
     * rules, verify that they permit KMS to communicate with the proxy on your
     * behalf.</p> </li> <li> <p> <code>XKS_PROXY_INVALID_CONFIGURATION</code> — A
     * configuration error is preventing the external key store from connecting to its
     * proxy. Verify the value of the <code>XksProxyUriPath</code>.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from
     * the external key store proxy. If you see this connection error code repeatedly,
     * notify your external key store proxy vendor.</p> </li> <li> <p>
     * <code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the
     * external key store proxy because the TLS configuration is invalid. Verify that
     * the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is
     * not expired, and that it matches the hostname in the
     * <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate
     * authority included in the <a
     * href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted
     * Certificate Authorities</a> list.</p> </li> <li> <p>
     * <code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external
     * key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> are correct. Use the tools for your external key
     * store proxy to verify that the proxy is active and available on its network.
     * Also, verify that your external key manager instances are operating properly.
     * Connection attempts fail with this connection error code if the proxy reports
     * that all external key manager instances are unavailable.</p> </li> <li> <p>
     * <code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store
     * proxy, but the proxy does not respond to KMS in the time allotted. If you see
     * this connection error code repeatedly, notify your external key store proxy
     * vendor.</p> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC
     * endpoint service configuration doesn't conform to the requirements for an KMS
     * external key store.</p> <ul> <li> <p>The VPC endpoint service must be an
     * endpoint service for interface endpoints in the caller's Amazon Web Services
     * account.</p> </li> <li> <p>It must have a network load balancer (NLB) connected
     * to at least two subnets, each in a different Availability Zone.</p> </li> <li>
     * <p>The <code>Allow principals</code> list must include the KMS service principal
     * for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as
     * <code>cks.kms.us-east-1.amazonaws.com</code>.</p> </li> <li> <p>It must
     * <i>not</i> require <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a>
     * of connection requests.</p> </li> <li> <p>It must have a private DNS name. The
     * private DNS name for an external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web
     * Services Region.</p> </li> <li> <p>The domain of the private DNS name must have
     * a <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification
     * status</a> of <code>verified</code>.</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
     * certificate</a> specifies the private DNS hostname at which the endpoint is
     * reachable.</p> </li> </ul> </li> <li> <p>
     * <code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC
     * endpoint service that it uses to communicate with the external key store proxy.
     * Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the
     * KMS service principal has service consumer permissions on the Amazon VPC
     * endpoint service.</p> </li> </ul>
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


    /**
     * <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code>
     * indicates a custom key store backed by an CloudHSM cluster.
     * <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an
     * external key store proxy and external key manager outside of Amazon Web
     * Services.</p>
     */
    inline const CustomKeyStoreType& GetCustomKeyStoreType() const{ return m_customKeyStoreType; }

    /**
     * <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code>
     * indicates a custom key store backed by an CloudHSM cluster.
     * <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an
     * external key store proxy and external key manager outside of Amazon Web
     * Services.</p>
     */
    inline bool CustomKeyStoreTypeHasBeenSet() const { return m_customKeyStoreTypeHasBeenSet; }

    /**
     * <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code>
     * indicates a custom key store backed by an CloudHSM cluster.
     * <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an
     * external key store proxy and external key manager outside of Amazon Web
     * Services.</p>
     */
    inline void SetCustomKeyStoreType(const CustomKeyStoreType& value) { m_customKeyStoreTypeHasBeenSet = true; m_customKeyStoreType = value; }

    /**
     * <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code>
     * indicates a custom key store backed by an CloudHSM cluster.
     * <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an
     * external key store proxy and external key manager outside of Amazon Web
     * Services.</p>
     */
    inline void SetCustomKeyStoreType(CustomKeyStoreType&& value) { m_customKeyStoreTypeHasBeenSet = true; m_customKeyStoreType = std::move(value); }

    /**
     * <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code>
     * indicates a custom key store backed by an CloudHSM cluster.
     * <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an
     * external key store proxy and external key manager outside of Amazon Web
     * Services.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreType(const CustomKeyStoreType& value) { SetCustomKeyStoreType(value); return *this;}

    /**
     * <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code>
     * indicates a custom key store backed by an CloudHSM cluster.
     * <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an
     * external key store proxy and external key manager outside of Amazon Web
     * Services.</p>
     */
    inline CustomKeyStoresListEntry& WithCustomKeyStoreType(CustomKeyStoreType&& value) { SetCustomKeyStoreType(std::move(value)); return *this;}


    /**
     * <p>Configuration settings for the external key store proxy (XKS proxy). The
     * external key store proxy translates KMS requests into a format that your
     * external key manager can understand. The proxy configuration includes connection
     * information that KMS requires.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline const XksProxyConfigurationType& GetXksProxyConfiguration() const{ return m_xksProxyConfiguration; }

    /**
     * <p>Configuration settings for the external key store proxy (XKS proxy). The
     * external key store proxy translates KMS requests into a format that your
     * external key manager can understand. The proxy configuration includes connection
     * information that KMS requires.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline bool XksProxyConfigurationHasBeenSet() const { return m_xksProxyConfigurationHasBeenSet; }

    /**
     * <p>Configuration settings for the external key store proxy (XKS proxy). The
     * external key store proxy translates KMS requests into a format that your
     * external key manager can understand. The proxy configuration includes connection
     * information that KMS requires.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline void SetXksProxyConfiguration(const XksProxyConfigurationType& value) { m_xksProxyConfigurationHasBeenSet = true; m_xksProxyConfiguration = value; }

    /**
     * <p>Configuration settings for the external key store proxy (XKS proxy). The
     * external key store proxy translates KMS requests into a format that your
     * external key manager can understand. The proxy configuration includes connection
     * information that KMS requires.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline void SetXksProxyConfiguration(XksProxyConfigurationType&& value) { m_xksProxyConfigurationHasBeenSet = true; m_xksProxyConfiguration = std::move(value); }

    /**
     * <p>Configuration settings for the external key store proxy (XKS proxy). The
     * external key store proxy translates KMS requests into a format that your
     * external key manager can understand. The proxy configuration includes connection
     * information that KMS requires.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithXksProxyConfiguration(const XksProxyConfigurationType& value) { SetXksProxyConfiguration(value); return *this;}

    /**
     * <p>Configuration settings for the external key store proxy (XKS proxy). The
     * external key store proxy translates KMS requests into a format that your
     * external key manager can understand. The proxy configuration includes connection
     * information that KMS requires.</p> <p>This field appears only when the
     * <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline CustomKeyStoresListEntry& WithXksProxyConfiguration(XksProxyConfigurationType&& value) { SetXksProxyConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    Aws::String m_customKeyStoreName;
    bool m_customKeyStoreNameHasBeenSet = false;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet = false;

    Aws::String m_trustAnchorCertificate;
    bool m_trustAnchorCertificateHasBeenSet = false;

    ConnectionStateType m_connectionState;
    bool m_connectionStateHasBeenSet = false;

    ConnectionErrorCodeType m_connectionErrorCode;
    bool m_connectionErrorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    CustomKeyStoreType m_customKeyStoreType;
    bool m_customKeyStoreTypeHasBeenSet = false;

    XksProxyConfigurationType m_xksProxyConfiguration;
    bool m_xksProxyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
