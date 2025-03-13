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
    AWS_EKS_API Provider() = default;
    AWS_EKS_API Provider(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Provider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) or alias of the KMS key. The KMS key must be
     * symmetric and created in the same Amazon Web Services Region as the cluster. If
     * the KMS key was created in a different account, the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html">IAM
     * principal</a> must have access to the KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-modifying-external-accounts.html">Allowing
     * users in other accounts to use a KMS key</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    Provider& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
