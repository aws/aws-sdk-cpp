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
    AWS_ATHENA_API SessionConfiguration();
    AWS_ATHENA_API SessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API SessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline SessionConfiguration& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline SessionConfiguration& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the execution role used for the session.</p>
     */
    inline SessionConfiguration& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline SessionConfiguration& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline SessionConfiguration& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location that stores information for the notebook.</p>
     */
    inline SessionConfiguration& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>The idle timeout in seconds for the session.</p>
     */
    inline long long GetIdleTimeoutSeconds() const{ return m_idleTimeoutSeconds; }

    /**
     * <p>The idle timeout in seconds for the session.</p>
     */
    inline bool IdleTimeoutSecondsHasBeenSet() const { return m_idleTimeoutSecondsHasBeenSet; }

    /**
     * <p>The idle timeout in seconds for the session.</p>
     */
    inline void SetIdleTimeoutSeconds(long long value) { m_idleTimeoutSecondsHasBeenSet = true; m_idleTimeoutSeconds = value; }

    /**
     * <p>The idle timeout in seconds for the session.</p>
     */
    inline SessionConfiguration& WithIdleTimeoutSeconds(long long value) { SetIdleTimeoutSeconds(value); return *this;}


    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    
    inline SessionConfiguration& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    
    inline SessionConfiguration& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    long long m_idleTimeoutSeconds;
    bool m_idleTimeoutSecondsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
