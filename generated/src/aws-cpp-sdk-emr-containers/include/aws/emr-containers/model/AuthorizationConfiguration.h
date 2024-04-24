/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/LakeFormationConfiguration.h>
#include <aws/emr-containers/model/EncryptionConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Authorization-related configuration inputs for the security
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/AuthorizationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthorizationConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API AuthorizationConfiguration();
    AWS_EMRCONTAINERS_API AuthorizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API AuthorizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lake Formation related configuration inputs for the security
     * configuration.</p>
     */
    inline const LakeFormationConfiguration& GetLakeFormationConfiguration() const{ return m_lakeFormationConfiguration; }

    /**
     * <p>Lake Formation related configuration inputs for the security
     * configuration.</p>
     */
    inline bool LakeFormationConfigurationHasBeenSet() const { return m_lakeFormationConfigurationHasBeenSet; }

    /**
     * <p>Lake Formation related configuration inputs for the security
     * configuration.</p>
     */
    inline void SetLakeFormationConfiguration(const LakeFormationConfiguration& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = value; }

    /**
     * <p>Lake Formation related configuration inputs for the security
     * configuration.</p>
     */
    inline void SetLakeFormationConfiguration(LakeFormationConfiguration&& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = std::move(value); }

    /**
     * <p>Lake Formation related configuration inputs for the security
     * configuration.</p>
     */
    inline AuthorizationConfiguration& WithLakeFormationConfiguration(const LakeFormationConfiguration& value) { SetLakeFormationConfiguration(value); return *this;}

    /**
     * <p>Lake Formation related configuration inputs for the security
     * configuration.</p>
     */
    inline AuthorizationConfiguration& WithLakeFormationConfiguration(LakeFormationConfiguration&& value) { SetLakeFormationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Encryption-related configuration input for the security configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>Encryption-related configuration input for the security configuration.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>Encryption-related configuration input for the security configuration.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>Encryption-related configuration input for the security configuration.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>Encryption-related configuration input for the security configuration.</p>
     */
    inline AuthorizationConfiguration& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>Encryption-related configuration input for the security configuration.</p>
     */
    inline AuthorizationConfiguration& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    LakeFormationConfiguration m_lakeFormationConfiguration;
    bool m_lakeFormationConfigurationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
