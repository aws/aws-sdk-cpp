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
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API CreateCustomKeyStoreRequest : public KMSRequest
  {
  public:
    CreateCustomKeyStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomKeyStore"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline const Aws::String& GetCustomKeyStoreName() const{ return m_customKeyStoreName; }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline bool CustomKeyStoreNameHasBeenSet() const { return m_customKeyStoreNameHasBeenSet; }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline void SetCustomKeyStoreName(const Aws::String& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = value; }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline void SetCustomKeyStoreName(Aws::String&& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = std::move(value); }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline void SetCustomKeyStoreName(const char* value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName.assign(value); }

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreName(const Aws::String& value) { SetCustomKeyStoreName(value); return *this;}

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreName(Aws::String&& value) { SetCustomKeyStoreName(std::move(value)); return *this;}

    /**
     * <p>Specifies a friendly name for the custom key store. The name must be unique
     * in your AWS account.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCustomKeyStoreName(const char* value) { SetCustomKeyStoreName(value); return *this;}


    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>Identifies the AWS CloudHSM cluster for the custom key store. Enter the
     * cluster ID of any active AWS CloudHSM cluster that is not already associated
     * with a custom key store. To find the cluster ID, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline CreateCustomKeyStoreRequest& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}


    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline const Aws::String& GetTrustAnchorCertificate() const{ return m_trustAnchorCertificate; }

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline bool TrustAnchorCertificateHasBeenSet() const { return m_trustAnchorCertificateHasBeenSet; }

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline void SetTrustAnchorCertificate(const Aws::String& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = value; }

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline void SetTrustAnchorCertificate(Aws::String&& value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate = std::move(value); }

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline void SetTrustAnchorCertificate(const char* value) { m_trustAnchorCertificateHasBeenSet = true; m_trustAnchorCertificate.assign(value); }

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline CreateCustomKeyStoreRequest& WithTrustAnchorCertificate(const Aws::String& value) { SetTrustAnchorCertificate(value); return *this;}

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline CreateCustomKeyStoreRequest& WithTrustAnchorCertificate(Aws::String&& value) { SetTrustAnchorCertificate(std::move(value)); return *this;}

    /**
     * <p>Enter the content of the trust anchor certificate for the cluster. This is
     * the content of the <code>customerCA.crt</code> file that you created when you <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized
     * the cluster</a>.</p>
     */
    inline CreateCustomKeyStoreRequest& WithTrustAnchorCertificate(const char* value) { SetTrustAnchorCertificate(value); return *this;}


    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline const Aws::String& GetKeyStorePassword() const{ return m_keyStorePassword; }

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline bool KeyStorePasswordHasBeenSet() const { return m_keyStorePasswordHasBeenSet; }

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline void SetKeyStorePassword(const Aws::String& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = value; }

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline void SetKeyStorePassword(Aws::String&& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = std::move(value); }

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline void SetKeyStorePassword(const char* value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword.assign(value); }

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline CreateCustomKeyStoreRequest& WithKeyStorePassword(const Aws::String& value) { SetKeyStorePassword(value); return *this;}

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline CreateCustomKeyStoreRequest& WithKeyStorePassword(Aws::String&& value) { SetKeyStorePassword(std::move(value)); return *this;}

    /**
     * <p>Enter the password of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
     * <code>kmsuser</code> crypto user (CU) account</a> in the specified AWS CloudHSM
     * cluster. AWS KMS logs into the cluster as this user to manage key material on
     * your behalf.</p> <p>This parameter tells AWS KMS the <code>kmsuser</code>
     * account password; it does not change the password in the AWS CloudHSM
     * cluster.</p>
     */
    inline CreateCustomKeyStoreRequest& WithKeyStorePassword(const char* value) { SetKeyStorePassword(value); return *this;}

  private:

    Aws::String m_customKeyStoreName;
    bool m_customKeyStoreNameHasBeenSet;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet;

    Aws::String m_trustAnchorCertificate;
    bool m_trustAnchorCertificateHasBeenSet;

    Aws::String m_keyStorePassword;
    bool m_keyStorePasswordHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
