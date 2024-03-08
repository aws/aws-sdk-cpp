/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanroomsml/model/AudienceGenerationJobStatus.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides information about the configured audience generation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceGenerationJobSummary">AWS
   * API Reference</a></p>
   */
  class AudienceGenerationJobSummary
  {
  public:
    AWS_CLEANROOMSML_API AudienceGenerationJobSummary();
    AWS_CLEANROOMSML_API AudienceGenerationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceGenerationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const{ return m_audienceGenerationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline bool AudienceGenerationJobArnHasBeenSet() const { return m_audienceGenerationJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(const Aws::String& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(Aws::String&& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(const char* value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithAudienceGenerationJobArn(const Aws::String& value) { SetAudienceGenerationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithAudienceGenerationJobArn(Aws::String&& value) { SetAudienceGenerationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithAudienceGenerationJobArn(const char* value) { SetAudienceGenerationJobArn(value); return *this;}


    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline AudienceGenerationJobSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline AudienceGenerationJobSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the collaboration that contains this audience generation
     * job.</p>
     */
    inline AudienceGenerationJobSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline AudienceGenerationJobSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the audience generation job was created.</p>
     */
    inline AudienceGenerationJobSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the audience generation job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the audience generation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline AudienceGenerationJobSummary& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline AudienceGenerationJobSummary& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The AWS Account that submitted the job.</p>
     */
    inline AudienceGenerationJobSummary& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The status of the audience generation job.</p>
     */
    inline const AudienceGenerationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline void SetStatus(const AudienceGenerationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline void SetStatus(AudienceGenerationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithStatus(const AudienceGenerationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the audience generation job.</p>
     */
    inline AudienceGenerationJobSummary& WithStatus(AudienceGenerationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline AudienceGenerationJobSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the audience generation job was updated.</p>
     */
    inline AudienceGenerationJobSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_audienceGenerationJobArn;
    bool m_audienceGenerationJobArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    AudienceGenerationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
