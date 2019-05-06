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
  class AWS_KMS_API UpdateCustomKeyStoreRequest : public KMSRequest
  {
  public:
    UpdateCustomKeyStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomKeyStore"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>Identifies the custom key store that you want to update. Enter the ID of the
     * custom key store. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline const Aws::String& GetNewCustomKeyStoreName() const{ return m_newCustomKeyStoreName; }

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline bool NewCustomKeyStoreNameHasBeenSet() const { return m_newCustomKeyStoreNameHasBeenSet; }

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline void SetNewCustomKeyStoreName(const Aws::String& value) { m_newCustomKeyStoreNameHasBeenSet = true; m_newCustomKeyStoreName = value; }

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline void SetNewCustomKeyStoreName(Aws::String&& value) { m_newCustomKeyStoreNameHasBeenSet = true; m_newCustomKeyStoreName = std::move(value); }

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline void SetNewCustomKeyStoreName(const char* value) { m_newCustomKeyStoreNameHasBeenSet = true; m_newCustomKeyStoreName.assign(value); }

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithNewCustomKeyStoreName(const Aws::String& value) { SetNewCustomKeyStoreName(value); return *this;}

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithNewCustomKeyStoreName(Aws::String&& value) { SetNewCustomKeyStoreName(std::move(value)); return *this;}

    /**
     * <p>Changes the friendly name of the custom key store to the value that you
     * specify. The custom key store name must be unique in the AWS account.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithNewCustomKeyStoreName(const char* value) { SetNewCustomKeyStoreName(value); return *this;}


    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline const Aws::String& GetKeyStorePassword() const{ return m_keyStorePassword; }

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline bool KeyStorePasswordHasBeenSet() const { return m_keyStorePasswordHasBeenSet; }

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline void SetKeyStorePassword(const Aws::String& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = value; }

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline void SetKeyStorePassword(Aws::String&& value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword = std::move(value); }

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline void SetKeyStorePassword(const char* value) { m_keyStorePasswordHasBeenSet = true; m_keyStorePassword.assign(value); }

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithKeyStorePassword(const Aws::String& value) { SetKeyStorePassword(value); return *this;}

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithKeyStorePassword(Aws::String&& value) { SetKeyStorePassword(std::move(value)); return *this;}

    /**
     * <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in
     * the AWS CloudHSM cluster that is associated with the custom key store.</p>
     * <p>This parameter tells AWS KMS the current password of the <code>kmsuser</code>
     * crypto user (CU). It does not set or change the password of any users in the AWS
     * CloudHSM cluster.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithKeyStorePassword(const char* value) { SetKeyStorePassword(value); return *this;}


    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>Associates the custom key store with a related AWS CloudHSM cluster. </p>
     * <p>Enter the cluster ID of the cluster that you used to create the custom key
     * store or a cluster that shares a backup history and has the same cluster
     * certificate as the original cluster. You cannot use this parameter to associate
     * a custom key store with an unrelated cluster. In addition, the replacement
     * cluster must <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill
     * the requirements</a> for a cluster associated with a custom key store. To view
     * the cluster certificate of a cluster, use the <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
     * operation.</p>
     */
    inline UpdateCustomKeyStoreRequest& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}

  private:

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet;

    Aws::String m_newCustomKeyStoreName;
    bool m_newCustomKeyStoreNameHasBeenSet;

    Aws::String m_keyStorePassword;
    bool m_keyStorePasswordHasBeenSet;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
