/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/CustomKeyStoreType.h>
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
  class CreateCustomKeyStoreRequest : public KMSRequest
  {
  public:
    AWS_KMS_API CreateCustomKeyStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomKeyStore"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline const Aws::String& GetCustomKeyStoreName() const{ return m_customKeyStoreName; }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline bool CustomKeyStoreNameHasBeenSet() const { return m_customKeyStoreNameHasBeenSet; }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline void SetCustomKeyStoreName(const Aws::String& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = value; }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline void SetCustomKeyStoreName(Aws::String&& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = std::move(value); }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline void SetCustomKeyStoreName(const char* value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName.assign(value); }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreName(const Aws::String& value) { SetCustomKeyStoreName(value); return *this;}

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreName(Aws::String&& value) { SetCustomKeyStoreName(std::move(value)); return *this;}

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your Amazon Web Services account and Region. This parameter is required for
     * all custom key stores.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreName(const char* value) { SetCustomKeyStoreName(value); return *this;}


    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is
     * required for custom key stores with <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the cluster ID of any active CloudHSM
     * cluster that is not already associated with a custom key store. To find the
     * cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}


    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline const Aws::String& GetTrustAnchorCertificate() const{ return m_trustAnchorCertificate; }

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline bool TrustAnchorCertificateHasBeenSet() const { return m_trustAnchorCertificateHasBeenSet; }

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline void SetTrustAnchorCertificate(const Aws::String& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = value; }

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline void SetTrustAnchorCertificate(Aws::String&& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = std::move(value); }

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline void SetTrustAnchorCertificate(const char* value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate.assign(value); }

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline CreateCustomKeyStoreRequest& WithTrustAnchorCertificate(const Aws::String& value) { SetTrustAnchorCertificate(value); return *this;}

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline CreateCustomKeyStoreRequest& WithTrustAnchorCertificate(Aws::String&& value) { SetTrustAnchorCertificate(std::move(value)); return *this;}

    /**
     * <p>Specifies the certificate for an CloudHSM key store. This parameter is
     * required for custom key stores with a <code>CustomKeyStoreType</code> of
     * <code>AWS_CLOUDHSM</code>.</p> <p>Enter the content of the trust anchor
     * certificate for the CloudHSM cluster. This is the content of the
     * <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline CreateCustomKeyStoreRequest& WithTrustAnchorCertificate(const char* value) { SetTrustAnchorCertificate(value); return *this;}


    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline const Aws::String& GetKeyStorePassword() const{ return m_keyStorePassword; }

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline bool KeyStorePasswordHasBeenSet() const { return m_keyStorePasswordHasBeenSet; }

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline void SetKeyStorePassword(const Aws::String& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = value; }

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline void SetKeyStorePassword(Aws::String&& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = std::move(value); }

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline void SetKeyStorePassword(const char* value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword.assign(value); }

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline CreateCustomKeyStoreRequest& WithKeyStorePassword(const Aws::String& value) { SetKeyStorePassword(value); return *this;}

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline CreateCustomKeyStoreRequest& WithKeyStorePassword(Aws::String&& value) { SetKeyStorePassword(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p> <p>Enter the
     * password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM
     * cluster. KMS logs into the cluster as this user to manage key material on your
     * behalf.</p> <p>The password must be a string of 7 to 32 characters. Its value is
     * case sensitive.</p> <p>This parameter tells KMS the <code>kmsuser</code> account
     * password; it does not change the password in the CloudHSM cluster.</p>
     */
    inline CreateCustomKeyStoreRequest& WithKeyStorePassword(const char* value) { SetKeyStorePassword(value); return *this;}


    /**
     * <p>Specifies the type of custom key store. The default value is
     * <code>AWS_CLOUDHSM</code>.</p> <p>For a custom key store backed by an CloudHSM
     * cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key
     * store backed by an external key manager outside of Amazon Web Services, enter
     * <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key
     * store is created.</p>
     */
    inline const CustomKeyStoreType& GetCustomKeyStoreType() const{ return m_customKeyStoreType; }

    /**
     * <p>Specifies the type of custom key store. The default value is
     * <code>AWS_CLOUDHSM</code>.</p> <p>For a custom key store backed by an CloudHSM
     * cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key
     * store backed by an external key manager outside of Amazon Web Services, enter
     * <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key
     * store is created.</p>
     */
    inline bool CustomKeyStoreTypeHasBeenSet() const { return m_customKeyStoreTypeHasBeenSet; }

    /**
     * <p>Specifies the type of custom key store. The default value is
     * <code>AWS_CLOUDHSM</code>.</p> <p>For a custom key store backed by an CloudHSM
     * cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key
     * store backed by an external key manager outside of Amazon Web Services, enter
     * <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key
     * store is created.</p>
     */
    inline void SetCustomKeyStoreType(const CustomKeyStoreType& value) { m_customKeyStoreTypeHasBeenSet = true; m_customKeyStoreType = value; }

    /**
     * <p>Specifies the type of custom key store. The default value is
     * <code>AWS_CLOUDHSM</code>.</p> <p>For a custom key store backed by an CloudHSM
     * cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key
     * store backed by an external key manager outside of Amazon Web Services, enter
     * <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key
     * store is created.</p>
     */
    inline void SetCustomKeyStoreType(CustomKeyStoreType&& value) { m_customKeyStoreTypeHasBeenSet = true; m_customKeyStoreType = std::move(value); }

    /**
     * <p>Specifies the type of custom key store. The default value is
     * <code>AWS_CLOUDHSM</code>.</p> <p>For a custom key store backed by an CloudHSM
     * cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key
     * store backed by an external key manager outside of Amazon Web Services, enter
     * <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key
     * store is created.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreType(const CustomKeyStoreType& value) { SetCustomKeyStoreType(value); return *this;}

    /**
     * <p>Specifies the type of custom key store. The default value is
     * <code>AWS_CLOUDHSM</code>.</p> <p>For a custom key store backed by an CloudHSM
     * cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key
     * store backed by an external key manager outside of Amazon Web Services, enter
     * <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key
     * store is created.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreType(CustomKeyStoreType&& value) { SetCustomKeyStoreType(std::move(value)); return *this;}


    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline const Aws::String& GetXksProxyUriEndpoint() const{ return m_xksProxyUriEndpoint; }

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline bool XksProxyUriEndpointHasBeenSet() const { return m_xksProxyUriEndpointHasBeenSet; }

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline void SetXksProxyUriEndpoint(const Aws::String& value) { m_xksProxyUriEndpointHasBeenSet = true; m_xksProxyUriEndpoint = value; }

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline void SetXksProxyUriEndpoint(Aws::String&& value) { m_xksProxyUriEndpointHasBeenSet = true; m_xksProxyUriEndpoint = std::move(value); }

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline void SetXksProxyUriEndpoint(const char* value) { m_xksProxyUriEndpointHasBeenSet = true; m_xksProxyUriEndpoint.assign(value); }

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyUriEndpoint(const Aws::String& value) { SetXksProxyUriEndpoint(value); return *this;}

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyUriEndpoint(Aws::String&& value) { SetXksProxyUriEndpoint(std::move(value)); return *this;}

    /**
     * <p>Specifies the endpoint that KMS uses to send requests to the external key
     * store proxy (XKS proxy). This parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in
     * the <code>XksProxyUriEndpoint</code> value.</p> <p>For external key stores with
     * <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>,
     * specify <code>https://</code> followed by the private DNS name of the VPC
     * endpoint service.</p> <p>For external key stores with
     * <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable
     * before you create the custom key store. KMS connects to the external key store
     * proxy while creating the custom key store. For external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the
     * <a>ConnectCustomKeyStore</a> operation.</p> <p>The value of this parameter must
     * begin with <code>https://</code>. The remainder can contain upper and lower case
     * letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens
     * (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not
     * permitted.</p> <p> <b>Uniqueness requirements: </b> </p> <ul> <li> <p>The
     * combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code>
     * values must be unique in the Amazon Web Services account and Region.</p> </li>
     * <li> <p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity
     * cannot use the same <code>XksProxyUriEndpoint</code> value as an external key
     * store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web
     * Services Region.</p> </li> <li> <p>Each external key store with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS
     * name. The <code>XksProxyUriEndpoint</code> value for external key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique
     * in the Amazon Web Services account and Region.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyUriEndpoint(const char* value) { SetXksProxyUriEndpoint(value); return *this;}


    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline const Aws::String& GetXksProxyUriPath() const{ return m_xksProxyUriPath; }

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline bool XksProxyUriPathHasBeenSet() const { return m_xksProxyUriPathHasBeenSet; }

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline void SetXksProxyUriPath(const Aws::String& value) { m_xksProxyUriPathHasBeenSet = true; m_xksProxyUriPath = value; }

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline void SetXksProxyUriPath(Aws::String&& value) { m_xksProxyUriPathHasBeenSet = true; m_xksProxyUriPath = std::move(value); }

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline void SetXksProxyUriPath(const char* value) { m_xksProxyUriPathHasBeenSet = true; m_xksProxyUriPath.assign(value); }

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyUriPath(const Aws::String& value) { SetXksProxyUriPath(value); return *this;}

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyUriPath(Aws::String&& value) { SetXksProxyUriPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the base path to the proxy APIs for this external key store. To
     * find this value, see the documentation for your external key store proxy. This
     * parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>
     * where <code>v1</code> represents the version of the KMS external key store proxy
     * API. This path can include an optional prefix between the required elements such
     * as <code>/<i>prefix</i>/kms/xks/v1</code>.</p> <p> <b>Uniqueness requirements:
     * </b> </p> <ul> <li> <p>The combined <code>XksProxyUriEndpoint</code> and
     * <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services
     * account and Region.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyUriPath(const char* value) { SetXksProxyUriPath(value); return *this;}


    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline const Aws::String& GetXksProxyVpcEndpointServiceName() const{ return m_xksProxyVpcEndpointServiceName; }

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline bool XksProxyVpcEndpointServiceNameHasBeenSet() const { return m_xksProxyVpcEndpointServiceNameHasBeenSet; }

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline void SetXksProxyVpcEndpointServiceName(const Aws::String& value) { m_xksProxyVpcEndpointServiceNameHasBeenSet = true; m_xksProxyVpcEndpointServiceName = value; }

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline void SetXksProxyVpcEndpointServiceName(Aws::String&& value) { m_xksProxyVpcEndpointServiceNameHasBeenSet = true; m_xksProxyVpcEndpointServiceName = std::move(value); }

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline void SetXksProxyVpcEndpointServiceName(const char* value) { m_xksProxyVpcEndpointServiceNameHasBeenSet = true; m_xksProxyVpcEndpointServiceName.assign(value); }

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyVpcEndpointServiceName(const Aws::String& value) { SetXksProxyVpcEndpointServiceName(value); return *this;}

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyVpcEndpointServiceName(Aws::String&& value) { SetXksProxyVpcEndpointServiceName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints
     * that is used to communicate with your external key store proxy (XKS proxy). This
     * parameter is required when the value of <code>CustomKeyStoreType</code> is
     * <code>EXTERNAL_KEY_STORE</code> and the value of
     * <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p>
     * <p>The Amazon VPC endpoint service must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill
     * all requirements</a> for use with an external key store. </p> <p> <b>Uniqueness
     * requirements:</b> </p> <ul> <li> <p>External key stores with
     * <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each
     * external key store must have its own VPC endpoint service and private DNS
     * name.</p> </li> </ul>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyVpcEndpointServiceName(const char* value) { SetXksProxyVpcEndpointServiceName(value); return *this;}


    /**
     * <p>Specifies an authentication credential for the external key store proxy (XKS
     * proxy). This parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * <code>XksProxyAuthenticationCredential</code> has two required elements:
     * <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a
     * unique identifier for the <code>RawSecretAccessKey</code>. For character
     * requirements, see <a
     * href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p>
     * <p>KMS uses this authentication credential to sign requests to the external key
     * store proxy on your behalf. This credential is unrelated to Identity and Access
     * Management (IAM) and Amazon Web Services credentials.</p> <p>This parameter
     * doesn't set or change the authentication credentials on the XKS proxy. It just
     * tells KMS the credential that you established on your external key store proxy.
     * If you rotate your proxy authentication credential, use the
     * <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
     */
    inline const XksProxyAuthenticationCredentialType& GetXksProxyAuthenticationCredential() const{ return m_xksProxyAuthenticationCredential; }

    /**
     * <p>Specifies an authentication credential for the external key store proxy (XKS
     * proxy). This parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * <code>XksProxyAuthenticationCredential</code> has two required elements:
     * <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a
     * unique identifier for the <code>RawSecretAccessKey</code>. For character
     * requirements, see <a
     * href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p>
     * <p>KMS uses this authentication credential to sign requests to the external key
     * store proxy on your behalf. This credential is unrelated to Identity and Access
     * Management (IAM) and Amazon Web Services credentials.</p> <p>This parameter
     * doesn't set or change the authentication credentials on the XKS proxy. It just
     * tells KMS the credential that you established on your external key store proxy.
     * If you rotate your proxy authentication credential, use the
     * <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
     */
    inline bool XksProxyAuthenticationCredentialHasBeenSet() const { return m_xksProxyAuthenticationCredentialHasBeenSet; }

    /**
     * <p>Specifies an authentication credential for the external key store proxy (XKS
     * proxy). This parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * <code>XksProxyAuthenticationCredential</code> has two required elements:
     * <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a
     * unique identifier for the <code>RawSecretAccessKey</code>. For character
     * requirements, see <a
     * href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p>
     * <p>KMS uses this authentication credential to sign requests to the external key
     * store proxy on your behalf. This credential is unrelated to Identity and Access
     * Management (IAM) and Amazon Web Services credentials.</p> <p>This parameter
     * doesn't set or change the authentication credentials on the XKS proxy. It just
     * tells KMS the credential that you established on your external key store proxy.
     * If you rotate your proxy authentication credential, use the
     * <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
     */
    inline void SetXksProxyAuthenticationCredential(const XksProxyAuthenticationCredentialType& value) { m_xksProxyAuthenticationCredentialHasBeenSet = true; m_xksProxyAuthenticationCredential = value; }

    /**
     * <p>Specifies an authentication credential for the external key store proxy (XKS
     * proxy). This parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * <code>XksProxyAuthenticationCredential</code> has two required elements:
     * <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a
     * unique identifier for the <code>RawSecretAccessKey</code>. For character
     * requirements, see <a
     * href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p>
     * <p>KMS uses this authentication credential to sign requests to the external key
     * store proxy on your behalf. This credential is unrelated to Identity and Access
     * Management (IAM) and Amazon Web Services credentials.</p> <p>This parameter
     * doesn't set or change the authentication credentials on the XKS proxy. It just
     * tells KMS the credential that you established on your external key store proxy.
     * If you rotate your proxy authentication credential, use the
     * <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
     */
    inline void SetXksProxyAuthenticationCredential(XksProxyAuthenticationCredentialType&& value) { m_xksProxyAuthenticationCredentialHasBeenSet = true; m_xksProxyAuthenticationCredential = std::move(value); }

    /**
     * <p>Specifies an authentication credential for the external key store proxy (XKS
     * proxy). This parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * <code>XksProxyAuthenticationCredential</code> has two required elements:
     * <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a
     * unique identifier for the <code>RawSecretAccessKey</code>. For character
     * requirements, see <a
     * href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p>
     * <p>KMS uses this authentication credential to sign requests to the external key
     * store proxy on your behalf. This credential is unrelated to Identity and Access
     * Management (IAM) and Amazon Web Services credentials.</p> <p>This parameter
     * doesn't set or change the authentication credentials on the XKS proxy. It just
     * tells KMS the credential that you established on your external key store proxy.
     * If you rotate your proxy authentication credential, use the
     * <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyAuthenticationCredential(const XksProxyAuthenticationCredentialType& value) { SetXksProxyAuthenticationCredential(value); return *this;}

    /**
     * <p>Specifies an authentication credential for the external key store proxy (XKS
     * proxy). This parameter is required for all custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>The
     * <code>XksProxyAuthenticationCredential</code> has two required elements:
     * <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a
     * unique identifier for the <code>RawSecretAccessKey</code>. For character
     * requirements, see <a
     * href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p>
     * <p>KMS uses this authentication credential to sign requests to the external key
     * store proxy on your behalf. This credential is unrelated to Identity and Access
     * Management (IAM) and Amazon Web Services credentials.</p> <p>This parameter
     * doesn't set or change the authentication credentials on the XKS proxy. It just
     * tells KMS the credential that you established on your external key store proxy.
     * If you rotate your proxy authentication credential, use the
     * <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyAuthenticationCredential(XksProxyAuthenticationCredentialType&& value) { SetXksProxyAuthenticationCredential(std::move(value)); return *this;}


    /**
     * <p>Indicates how KMS communicates with the external key store proxy. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>If
     * the external key store proxy uses a public endpoint, specify
     * <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC
     * endpoint service for communication with KMS, specify
     * <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing
     * a connectivity option</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>An Amazon VPC endpoint service keeps your communication with
     * KMS in a private address space entirely within Amazon Web Services, but it
     * requires more configuration, including establishing a Amazon VPC with multiple
     * subnets, a VPC endpoint service, a network load balancer, and a verified private
     * DNS name. A public endpoint is simpler to set up, but it might be slower and
     * might not fulfill your security requirements. You might consider testing with a
     * public endpoint, and then establishing a VPC endpoint service for production
     * tasks. Note that this choice does not determine the location of the external key
     * store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted
     * within the VPC or outside of Amazon Web Services such as in your corporate data
     * center.</p>
     */
    inline const XksProxyConnectivityType& GetXksProxyConnectivity() const{ return m_xksProxyConnectivity; }

    /**
     * <p>Indicates how KMS communicates with the external key store proxy. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>If
     * the external key store proxy uses a public endpoint, specify
     * <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC
     * endpoint service for communication with KMS, specify
     * <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing
     * a connectivity option</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>An Amazon VPC endpoint service keeps your communication with
     * KMS in a private address space entirely within Amazon Web Services, but it
     * requires more configuration, including establishing a Amazon VPC with multiple
     * subnets, a VPC endpoint service, a network load balancer, and a verified private
     * DNS name. A public endpoint is simpler to set up, but it might be slower and
     * might not fulfill your security requirements. You might consider testing with a
     * public endpoint, and then establishing a VPC endpoint service for production
     * tasks. Note that this choice does not determine the location of the external key
     * store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted
     * within the VPC or outside of Amazon Web Services such as in your corporate data
     * center.</p>
     */
    inline bool XksProxyConnectivityHasBeenSet() const { return m_xksProxyConnectivityHasBeenSet; }

    /**
     * <p>Indicates how KMS communicates with the external key store proxy. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>If
     * the external key store proxy uses a public endpoint, specify
     * <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC
     * endpoint service for communication with KMS, specify
     * <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing
     * a connectivity option</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>An Amazon VPC endpoint service keeps your communication with
     * KMS in a private address space entirely within Amazon Web Services, but it
     * requires more configuration, including establishing a Amazon VPC with multiple
     * subnets, a VPC endpoint service, a network load balancer, and a verified private
     * DNS name. A public endpoint is simpler to set up, but it might be slower and
     * might not fulfill your security requirements. You might consider testing with a
     * public endpoint, and then establishing a VPC endpoint service for production
     * tasks. Note that this choice does not determine the location of the external key
     * store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted
     * within the VPC or outside of Amazon Web Services such as in your corporate data
     * center.</p>
     */
    inline void SetXksProxyConnectivity(const XksProxyConnectivityType& value) { m_xksProxyConnectivityHasBeenSet = true; m_xksProxyConnectivity = value; }

    /**
     * <p>Indicates how KMS communicates with the external key store proxy. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>If
     * the external key store proxy uses a public endpoint, specify
     * <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC
     * endpoint service for communication with KMS, specify
     * <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing
     * a connectivity option</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>An Amazon VPC endpoint service keeps your communication with
     * KMS in a private address space entirely within Amazon Web Services, but it
     * requires more configuration, including establishing a Amazon VPC with multiple
     * subnets, a VPC endpoint service, a network load balancer, and a verified private
     * DNS name. A public endpoint is simpler to set up, but it might be slower and
     * might not fulfill your security requirements. You might consider testing with a
     * public endpoint, and then establishing a VPC endpoint service for production
     * tasks. Note that this choice does not determine the location of the external key
     * store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted
     * within the VPC or outside of Amazon Web Services such as in your corporate data
     * center.</p>
     */
    inline void SetXksProxyConnectivity(XksProxyConnectivityType&& value) { m_xksProxyConnectivityHasBeenSet = true; m_xksProxyConnectivity = std::move(value); }

    /**
     * <p>Indicates how KMS communicates with the external key store proxy. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>If
     * the external key store proxy uses a public endpoint, specify
     * <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC
     * endpoint service for communication with KMS, specify
     * <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing
     * a connectivity option</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>An Amazon VPC endpoint service keeps your communication with
     * KMS in a private address space entirely within Amazon Web Services, but it
     * requires more configuration, including establishing a Amazon VPC with multiple
     * subnets, a VPC endpoint service, a network load balancer, and a verified private
     * DNS name. A public endpoint is simpler to set up, but it might be slower and
     * might not fulfill your security requirements. You might consider testing with a
     * public endpoint, and then establishing a VPC endpoint service for production
     * tasks. Note that this choice does not determine the location of the external key
     * store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted
     * within the VPC or outside of Amazon Web Services such as in your corporate data
     * center.</p>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyConnectivity(const XksProxyConnectivityType& value) { SetXksProxyConnectivity(value); return *this;}

    /**
     * <p>Indicates how KMS communicates with the external key store proxy. This
     * parameter is required for custom key stores with a
     * <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p> <p>If
     * the external key store proxy uses a public endpoint, specify
     * <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC
     * endpoint service for communication with KMS, specify
     * <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing
     * a connectivity option</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>An Amazon VPC endpoint service keeps your communication with
     * KMS in a private address space entirely within Amazon Web Services, but it
     * requires more configuration, including establishing a Amazon VPC with multiple
     * subnets, a VPC endpoint service, a network load balancer, and a verified private
     * DNS name. A public endpoint is simpler to set up, but it might be slower and
     * might not fulfill your security requirements. You might consider testing with a
     * public endpoint, and then establishing a VPC endpoint service for production
     * tasks. Note that this choice does not determine the location of the external key
     * store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted
     * within the VPC or outside of Amazon Web Services such as in your corporate data
     * center.</p>
     */
    inline CreateCustomKeyStoreRequest& WithXksProxyConnectivity(XksProxyConnectivityType&& value) { SetXksProxyConnectivity(std::move(value)); return *this;}

  private:

    Aws::String m_customKeyStoreName;
    bool m_customKeyStoreNameHasBeenSet = false;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet = false;

    Aws::String m_trustAnchorCertificate;
    bool m_trustAnchorCertificateHasBeenSet = false;

    Aws::String m_keyStorePassword;
    bool m_keyStorePasswordHasBeenSet = false;

    CustomKeyStoreType m_customKeyStoreType;
    bool m_customKeyStoreTypeHasBeenSet = false;

    Aws::String m_xksProxyUriEndpoint;
    bool m_xksProxyUriEndpointHasBeenSet = false;

    Aws::String m_xksProxyUriPath;
    bool m_xksProxyUriPathHasBeenSet = false;

    Aws::String m_xksProxyVpcEndpointServiceName;
    bool m_xksProxyVpcEndpointServiceNameHasBeenSet = false;

    XksProxyAuthenticationCredentialType m_xksProxyAuthenticationCredential;
    bool m_xksProxyAuthenticationCredentialHasBeenSet = false;

    XksProxyConnectivityType m_xksProxyConnectivity;
    bool m_xksProxyConnectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
