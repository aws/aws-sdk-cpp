/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The managed log persistence configuration for a job run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ManagedPersistenceMonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class ManagedPersistenceMonitoringConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API ManagedPersistenceMonitoringConfiguration();
    AWS_EMRSERVERLESS_API ManagedPersistenceMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API ManagedPersistenceMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables managed logging and defaults to true. If set to false, managed
     * logging will be turned off.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables managed logging and defaults to true. If set to false, managed
     * logging will be turned off.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables managed logging and defaults to true. If set to false, managed
     * logging will be turned off.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables managed logging and defaults to true. If set to false, managed
     * logging will be turned off.</p>
     */
    inline ManagedPersistenceMonitoringConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline ManagedPersistenceMonitoringConfiguration& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline ManagedPersistenceMonitoringConfiguration& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
     */
    inline ManagedPersistenceMonitoringConfiguration& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
