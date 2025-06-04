/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>A managed secret that contains the credentials for installing vCenter Server,
   * NSX, and SDDC Manager. During environment creation, the Amazon EVS control plane
   * uses Amazon Web Services Secrets Manager to create, encrypt, validate, and store
   * secrets. If you choose to delete your environment, Amazon EVS also deletes the
   * secrets that are associated with your environment. Amazon EVS does not provide
   * managed rotation of secrets. We recommend that you rotate secrets regularly to
   * ensure that secrets are not long-lived.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Secret">AWS API
   * Reference</a></p>
   */
  class Secret
  {
  public:
    AWS_EVS_API Secret() = default;
    AWS_EVS_API Secret(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Secret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    Secret& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
