/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amp/model/WorkspaceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The full details about one Amazon Managed Service for Prometheus workspace in
   * your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/WorkspaceDescription">AWS
   * API Reference</a></p>
   */
  class WorkspaceDescription
  {
  public:
    AWS_PROMETHEUSSERVICE_API WorkspaceDescription();
    AWS_PROMETHEUSSERVICE_API WorkspaceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API WorkspaceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline WorkspaceDescription& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline WorkspaceDescription& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that is assigned to this workspace to help identify it. It may not
     * be unique.</p>
     */
    inline WorkspaceDescription& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The ARN of the workspace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline WorkspaceDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline WorkspaceDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline WorkspaceDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the workspace was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the workspace was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the workspace was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the workspace was created.</p>
     */
    inline WorkspaceDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the workspace was created.</p>
     */
    inline WorkspaceDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline WorkspaceDescription& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline WorkspaceDescription& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline WorkspaceDescription& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline const Aws::String& GetPrometheusEndpoint() const{ return m_prometheusEndpoint; }

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline bool PrometheusEndpointHasBeenSet() const { return m_prometheusEndpointHasBeenSet; }

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline void SetPrometheusEndpoint(const Aws::String& value) { m_prometheusEndpointHasBeenSet = true; m_prometheusEndpoint = value; }

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline void SetPrometheusEndpoint(Aws::String&& value) { m_prometheusEndpointHasBeenSet = true; m_prometheusEndpoint = std::move(value); }

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline void SetPrometheusEndpoint(const char* value) { m_prometheusEndpointHasBeenSet = true; m_prometheusEndpoint.assign(value); }

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline WorkspaceDescription& WithPrometheusEndpoint(const Aws::String& value) { SetPrometheusEndpoint(value); return *this;}

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline WorkspaceDescription& WithPrometheusEndpoint(Aws::String&& value) { SetPrometheusEndpoint(std::move(value)); return *this;}

    /**
     * <p>The Prometheus endpoint available for this workspace. </p>
     */
    inline WorkspaceDescription& WithPrometheusEndpoint(const char* value) { SetPrometheusEndpoint(value); return *this;}


    /**
     * <p>The current status of the workspace.</p>
     */
    inline const WorkspaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline void SetStatus(const WorkspaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline void SetStatus(WorkspaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline WorkspaceDescription& WithStatus(const WorkspaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the workspace.</p>
     */
    inline WorkspaceDescription& WithStatus(WorkspaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline WorkspaceDescription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline WorkspaceDescription& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline WorkspaceDescription& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the workspace.</p>
     */
    inline WorkspaceDescription& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_prometheusEndpoint;
    bool m_prometheusEndpointHasBeenSet = false;

    WorkspaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
