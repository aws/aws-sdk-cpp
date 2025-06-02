/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ManagedQueryResultsEncryptionConfiguration.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p> The configuration for storing results in Athena owned storage, which
   * includes whether this feature is enabled; whether encryption configuration, if
   * any, is used for encrypting query results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ManagedQueryResultsConfiguration">AWS
   * API Reference</a></p>
   */
  class ManagedQueryResultsConfiguration
  {
  public:
    AWS_ATHENA_API ManagedQueryResultsConfiguration() = default;
    AWS_ATHENA_API ManagedQueryResultsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ManagedQueryResultsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to true, allows you to store query results in Athena owned storage. If
     * set to false, workgroup member stores query results in location specified under
     * <code>ResultConfiguration$OutputLocation</code>. The default is false. A
     * workgroup cannot have the <code>ResultConfiguration$OutputLocation</code>
     * parameter when you set this field to true. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ManagedQueryResultsConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you encrypt query and calculation results in Athena owned storage, this
     * field indicates the encryption option (for example, SSE_KMS or CSE_KMS) and key
     * information.</p>
     */
    inline const ManagedQueryResultsEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = ManagedQueryResultsEncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = ManagedQueryResultsEncryptionConfiguration>
    ManagedQueryResultsConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    ManagedQueryResultsEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
