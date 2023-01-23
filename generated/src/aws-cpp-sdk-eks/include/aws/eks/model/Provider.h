/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Identifies the Key Management Service (KMS) key used to encrypt the
   * secrets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Provider">AWS API
   * Reference</a></p>
   */
  class Provider
  {
  public:
    AWS_EKS_API Provider();
    AWS_EKS_API Provider(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Provider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline Provider& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline Provider& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric, created in the same region as the cluster, and if the KMS key was
     * created in a different account, the user must have access to the KMS key. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * Users in Other Accounts to Use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline Provider& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}

  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
