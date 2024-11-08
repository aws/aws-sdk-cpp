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
    AWS_FIREHOSE_API SecretsManagerConfiguration();
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
    inline const Aws::String& GetSecretARN() const{ return m_secretARN; }
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }
    inline void SetSecretARN(const Aws::String& value) { m_secretARNHasBeenSet = true; m_secretARN = value; }
    inline void SetSecretARN(Aws::String&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::move(value); }
    inline void SetSecretARN(const char* value) { m_secretARNHasBeenSet = true; m_secretARN.assign(value); }
    inline SecretsManagerConfiguration& WithSecretARN(const Aws::String& value) { SetSecretARN(value); return *this;}
    inline SecretsManagerConfiguration& WithSecretARN(Aws::String&& value) { SetSecretARN(std::move(value)); return *this;}
    inline SecretsManagerConfiguration& WithSecretARN(const char* value) { SetSecretARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the role that Firehose assumes when calling the Secrets Manager
     * API operation. When you provide the role, it overrides any destination specific
     * role defined in the destination configuration. If you do not provide the then we
     * use the destination specific role. This parameter is required for Splunk. </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline SecretsManagerConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline SecretsManagerConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline SecretsManagerConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want to use the secrets manager feature. When set as
     * <code>True</code> the secrets manager configuration overwrites the existing
     * secrets in the destination configuration. When it's set to <code>False</code>
     * Firehose falls back to the credentials in the destination configuration.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SecretsManagerConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_secretARN;
    bool m_secretARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
