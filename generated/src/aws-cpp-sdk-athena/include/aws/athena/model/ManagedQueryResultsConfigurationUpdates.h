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
   * <p>Updates the configuration for managed query results.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ManagedQueryResultsConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class ManagedQueryResultsConfigurationUpdates
  {
  public:
    AWS_ATHENA_API ManagedQueryResultsConfigurationUpdates() = default;
    AWS_ATHENA_API ManagedQueryResultsConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ManagedQueryResultsConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to true, specifies that Athena manages query results in Athena owned
     * storage.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ManagedQueryResultsConfigurationUpdates& WithEnabled(bool value) { SetEnabled(value); return *this;}
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
    ManagedQueryResultsConfigurationUpdates& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, it removes workgroup from Athena owned storage. The existing
     * query results are cleaned up after 24hrs. You must provide query results in
     * location specified under <code>ResultConfiguration$OutputLocation</code>.</p>
     */
    inline bool GetRemoveEncryptionConfiguration() const { return m_removeEncryptionConfiguration; }
    inline bool RemoveEncryptionConfigurationHasBeenSet() const { return m_removeEncryptionConfigurationHasBeenSet; }
    inline void SetRemoveEncryptionConfiguration(bool value) { m_removeEncryptionConfigurationHasBeenSet = true; m_removeEncryptionConfiguration = value; }
    inline ManagedQueryResultsConfigurationUpdates& WithRemoveEncryptionConfiguration(bool value) { SetRemoveEncryptionConfiguration(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    ManagedQueryResultsEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    bool m_removeEncryptionConfiguration{false};
    bool m_removeEncryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
