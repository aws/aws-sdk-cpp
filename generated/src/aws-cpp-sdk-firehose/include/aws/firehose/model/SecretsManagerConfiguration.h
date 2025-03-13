/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The structure that defines how Firehose accesses the secret.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SecretsManagerConfiguration">AWS
   * API Reference</a></p>
   */
  class SecretsManagerConfiguration
  {
  public:
    AWS_FIREHOSE_API SecretsManagerConfiguration() = default;
    AWS_FIREHOSE_API SecretsManagerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SecretsManagerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the secret that stores your credentials. It must be in the same
     * region as the Firehose stream and the role. The secret ARN can reside in a
     * different account than the Firehose stream and role as Firehose supports
     * cross-account secret access. This parameter is required when <b>Enabled</b> is
     * set to <code>True</code>.</p>
     */
    inline const Aws::String& GetSecretARN() const { return m_secretARN; }
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }
    template<typename SecretARNT = Aws::String>
    void SetSecretARN(SecretARNT&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::forward<SecretARNT>(value); }
    template<typename SecretARNT = Aws::String>
    SecretsManagerConfiguration& WithSecretARN(SecretARNT&& value) { SetSecretARN(std::forward<SecretARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the role that Firehose assumes when calling the Secrets Manager
     * API operation. When you provide the role, it overrides any destination specific
     * role defined in the destination configuration. If you do not provide the then we
     * use the destination specific role. This parameter is required for Splunk. </p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    SecretsManagerConfiguration& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want to use the secrets manager feature. When set as
     * <code>True</code> the secrets manager configuration overwrites the existing
     * secrets in the destination configuration. When it's set to <code>False</code>
     * Firehose falls back to the credentials in the destination configuration.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SecretsManagerConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_secretARN;
    bool m_secretARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
