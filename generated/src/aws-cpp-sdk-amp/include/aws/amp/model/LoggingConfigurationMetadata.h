/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/LoggingConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Contains information about the current rules and alerting logging
   * configuration for the workspace.</p>  <p>These logging configurations are
   * only for rules and alerting logs.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/LoggingConfigurationMetadata">AWS
   * API Reference</a></p>
   */
  class LoggingConfigurationMetadata
  {
  public:
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationMetadata() = default;
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline const LoggingConfigurationStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = LoggingConfigurationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = LoggingConfigurationStatus>
    LoggingConfigurationMetadata& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace the logging configuration is for.</p>
     */
    inline const Aws::String& GetWorkspace() const { return m_workspace; }
    inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
    template<typename WorkspaceT = Aws::String>
    void SetWorkspace(WorkspaceT&& value) { m_workspaceHasBeenSet = true; m_workspace = std::forward<WorkspaceT>(value); }
    template<typename WorkspaceT = Aws::String>
    LoggingConfigurationMetadata& WithWorkspace(WorkspaceT&& value) { SetWorkspace(std::forward<WorkspaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudWatch log group to which the vended log data will be
     * published.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    LoggingConfigurationMetadata& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the logging configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LoggingConfigurationMetadata& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the logging configuration was most recently
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    LoggingConfigurationMetadata& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}
  private:

    LoggingConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workspace;
    bool m_workspaceHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
