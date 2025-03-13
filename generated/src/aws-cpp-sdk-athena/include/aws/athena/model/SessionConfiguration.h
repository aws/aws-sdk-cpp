/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EncryptionConfiguration.h>
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
   * <p>Contains session configuration information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/SessionConfiguration">AWS
   * API Reference</a></p>
   */
  class SessionConfiguration
  {
  public:
    AWS_ATHENA_API SessionConfiguration() = default;
    AWS_ATHENA_API SessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API SessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the execution role used to access user resources for Spark
     * sessions and Identity Center enabled workgroups. This property applies only to
     * Spark enabled workgroups and Identity Center enabled workgroups.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    SessionConfiguration& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    SessionConfiguration& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idle timeout in seconds for the session.</p>
     */
    inline long long GetIdleTimeoutSeconds() const { return m_idleTimeoutSeconds; }
    inline bool IdleTimeoutSecondsHasBeenSet() const { return m_idleTimeoutSecondsHasBeenSet; }
    inline void SetIdleTimeoutSeconds(long long value) { m_idleTimeoutSecondsHasBeenSet = true; m_idleTimeoutSeconds = value; }
    inline SessionConfiguration& WithIdleTimeoutSeconds(long long value) { SetIdleTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    SessionConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    long long m_idleTimeoutSeconds{0};
    bool m_idleTimeoutSecondsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
