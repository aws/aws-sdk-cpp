/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies configuration information for a customer-managed Secrets Manager
   * secret where a storage location authentication token or secret key is stored in
   * plain text. This configuration includes the secret ARN, and the ARN for an IAM
   * role that provides access to the secret.</p>  <p>You can use either
   * <code>CmkSecretConfig</code> or <code>CustomSecretConfig</code> to provide
   * credentials for a <code>CreateLocation</code> request. Do not provide both
   * parameters for the same request.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CustomSecretConfig">AWS
   * API Reference</a></p>
   */
  class CustomSecretConfig
  {
  public:
    AWS_DATASYNC_API CustomSecretConfig() = default;
    AWS_DATASYNC_API CustomSecretConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API CustomSecretConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ARN for an Secrets Manager secret.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    CustomSecretConfig& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN for the Identity and Access Management role that DataSync
     * uses to access the secret specified for <code>SecretArn</code>.</p>
     */
    inline const Aws::String& GetSecretAccessRoleArn() const { return m_secretAccessRoleArn; }
    inline bool SecretAccessRoleArnHasBeenSet() const { return m_secretAccessRoleArnHasBeenSet; }
    template<typename SecretAccessRoleArnT = Aws::String>
    void SetSecretAccessRoleArn(SecretAccessRoleArnT&& value) { m_secretAccessRoleArnHasBeenSet = true; m_secretAccessRoleArn = std::forward<SecretAccessRoleArnT>(value); }
    template<typename SecretAccessRoleArnT = Aws::String>
    CustomSecretConfig& WithSecretAccessRoleArn(SecretAccessRoleArnT&& value) { SetSecretAccessRoleArn(std::forward<SecretAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_secretAccessRoleArn;
    bool m_secretAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
