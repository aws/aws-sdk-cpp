/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/LoggingConfigurationStatus.h>
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
   * <p>Represents the properties of a logging configuration metadata.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/LoggingConfigurationMetadata">AWS
   * API Reference</a></p>
   */
  class LoggingConfigurationMetadata
  {
  public:
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationMetadata();
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the logging configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the logging configuration was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the logging configuration was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the logging configuration was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the logging configuration was created.</p>
     */
    inline LoggingConfigurationMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the logging configuration was created.</p>
     */
    inline LoggingConfigurationMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline LoggingConfigurationMetadata& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline LoggingConfigurationMetadata& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CW log group to which the vended log data will be
     * published.</p>
     */
    inline LoggingConfigurationMetadata& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}


    /**
     * <p>The time when the logging configuration was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The time when the logging configuration was modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The time when the logging configuration was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The time when the logging configuration was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The time when the logging configuration was modified.</p>
     */
    inline LoggingConfigurationMetadata& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The time when the logging configuration was modified.</p>
     */
    inline LoggingConfigurationMetadata& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the logging configuration.</p>
     */
    inline const LoggingConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline void SetStatus(const LoggingConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline void SetStatus(LoggingConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline LoggingConfigurationMetadata& WithStatus(const LoggingConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the logging configuration.</p>
     */
    inline LoggingConfigurationMetadata& WithStatus(LoggingConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline const Aws::String& GetWorkspace() const{ return m_workspace; }

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline void SetWorkspace(const Aws::String& value) { m_workspaceHasBeenSet = true; m_workspace = value; }

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline void SetWorkspace(Aws::String&& value) { m_workspaceHasBeenSet = true; m_workspace = std::move(value); }

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline void SetWorkspace(const char* value) { m_workspaceHasBeenSet = true; m_workspace.assign(value); }

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline LoggingConfigurationMetadata& WithWorkspace(const Aws::String& value) { SetWorkspace(value); return *this;}

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline LoggingConfigurationMetadata& WithWorkspace(Aws::String&& value) { SetWorkspace(std::move(value)); return *this;}

    /**
     * <p>The workspace where the logging configuration exists.</p>
     */
    inline LoggingConfigurationMetadata& WithWorkspace(const char* value) { SetWorkspace(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    LoggingConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workspace;
    bool m_workspaceHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
