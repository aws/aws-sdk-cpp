/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/SourceStatus.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Log status for the Security Lake account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/LogsStatus">AWS
   * API Reference</a></p>
   */
  class LogsStatus
  {
  public:
    AWS_SECURITYLAKE_API LogsStatus();
    AWS_SECURITYLAKE_API LogsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API LogsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Health status of services including error codes and patterns.</p>
     */
    inline const SourceStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>Health status of services including error codes and patterns.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>Health status of services including error codes and patterns.</p>
     */
    inline void SetHealthStatus(const SourceStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>Health status of services including error codes and patterns.</p>
     */
    inline void SetHealthStatus(SourceStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>Health status of services including error codes and patterns.</p>
     */
    inline LogsStatus& WithHealthStatus(const SourceStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>Health status of services including error codes and patterns.</p>
     */
    inline LogsStatus& WithHealthStatus(SourceStatus&& value) { SetHealthStatus(std::move(value)); return *this;}


    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline const Aws::String& GetPathToLogs() const{ return m_pathToLogs; }

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline bool PathToLogsHasBeenSet() const { return m_pathToLogsHasBeenSet; }

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline void SetPathToLogs(const Aws::String& value) { m_pathToLogsHasBeenSet = true; m_pathToLogs = value; }

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline void SetPathToLogs(Aws::String&& value) { m_pathToLogsHasBeenSet = true; m_pathToLogs = std::move(value); }

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline void SetPathToLogs(const char* value) { m_pathToLogsHasBeenSet = true; m_pathToLogs.assign(value); }

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline LogsStatus& WithPathToLogs(const Aws::String& value) { SetPathToLogs(value); return *this;}

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline LogsStatus& WithPathToLogs(Aws::String&& value) { SetPathToLogs(std::move(value)); return *this;}

    /**
     * <p>Defines path the stored logs are available which has information on your
     * systems, applications, and services. </p>
     */
    inline LogsStatus& WithPathToLogs(const char* value) { SetPathToLogs(value); return *this;}

  private:

    SourceStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_pathToLogs;
    bool m_pathToLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
