/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amp/model/WorkspaceStatus.h>
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
   * <p>Represents the properties of a workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/WorkspaceDescription">AWS
   * API Reference</a></p>
   */
  class AWS_PROMETHEUSSERVICE_API WorkspaceDescription
  {
  public:
    WorkspaceDescription();
    WorkspaceDescription(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Alias of this workspace.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>Alias of this workspace.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>Alias of this workspace.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>Alias of this workspace.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>Alias of this workspace.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>Alias of this workspace.</p>
     */
    inline WorkspaceDescription& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>Alias of this workspace.</p>
     */
    inline WorkspaceDescription& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>Alias of this workspace.</p>
     */
    inline WorkspaceDescription& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline WorkspaceDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline WorkspaceDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this workspace.</p>
     */
    inline WorkspaceDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time when the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the workspace was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the workspace was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the workspace was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the workspace was created.</p>
     */
    inline WorkspaceDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the workspace was created.</p>
     */
    inline WorkspaceDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline const Aws::String& GetPrometheusEndpoint() const{ return m_prometheusEndpoint; }

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline bool PrometheusEndpointHasBeenSet() const { return m_prometheusEndpointHasBeenSet; }

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline void SetPrometheusEndpoint(const Aws::String& value) { m_prometheusEndpointHasBeenSet = true; m_prometheusEndpoint = value; }

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline void SetPrometheusEndpoint(Aws::String&& value) { m_prometheusEndpointHasBeenSet = true; m_prometheusEndpoint = std::move(value); }

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline void SetPrometheusEndpoint(const char* value) { m_prometheusEndpointHasBeenSet = true; m_prometheusEndpoint.assign(value); }

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline WorkspaceDescription& WithPrometheusEndpoint(const Aws::String& value) { SetPrometheusEndpoint(value); return *this;}

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline WorkspaceDescription& WithPrometheusEndpoint(Aws::String&& value) { SetPrometheusEndpoint(std::move(value)); return *this;}

    /**
     * <p>Prometheus endpoint URI.</p>
     */
    inline WorkspaceDescription& WithPrometheusEndpoint(const char* value) { SetPrometheusEndpoint(value); return *this;}


    /**
     * <p>The status of this workspace.</p>
     */
    inline const WorkspaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this workspace.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this workspace.</p>
     */
    inline void SetStatus(const WorkspaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this workspace.</p>
     */
    inline void SetStatus(WorkspaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this workspace.</p>
     */
    inline WorkspaceDescription& WithStatus(const WorkspaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this workspace.</p>
     */
    inline WorkspaceDescription& WithStatus(WorkspaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline WorkspaceDescription& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline WorkspaceDescription& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>Unique string identifying this workspace.</p>
     */
    inline WorkspaceDescription& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_prometheusEndpoint;
    bool m_prometheusEndpointHasBeenSet;

    WorkspaceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
