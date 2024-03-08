/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceSize.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanroomsml/model/AudienceExportJobStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
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
   * <p>Provides information about the audience export job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceExportJobSummary">AWS
   * API Reference</a></p>
   */
  class AudienceExportJobSummary
  {
  public:
    AWS_CLEANROOMSML_API AudienceExportJobSummary();
    AWS_CLEANROOMSML_API AudienceExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const{ return m_audienceGenerationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline bool AudienceGenerationJobArnHasBeenSet() const { return m_audienceGenerationJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline void SetAudienceGenerationJobArn(const Aws::String& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline void SetAudienceGenerationJobArn(Aws::String&& value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline void SetAudienceGenerationJobArn(const char* value) { m_audienceGenerationJobArnHasBeenSet = true; m_audienceGenerationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline AudienceExportJobSummary& WithAudienceGenerationJobArn(const Aws::String& value) { SetAudienceGenerationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline AudienceExportJobSummary& WithAudienceGenerationJobArn(Aws::String&& value) { SetAudienceGenerationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job that was
     * exported.</p>
     */
    inline AudienceExportJobSummary& WithAudienceGenerationJobArn(const char* value) { SetAudienceGenerationJobArn(value); return *this;}


    
    inline const AudienceSize& GetAudienceSize() const{ return m_audienceSize; }

    
    inline bool AudienceSizeHasBeenSet() const { return m_audienceSizeHasBeenSet; }

    
    inline void SetAudienceSize(const AudienceSize& value) { m_audienceSizeHasBeenSet = true; m_audienceSize = value; }

    
    inline void SetAudienceSize(AudienceSize&& value) { m_audienceSizeHasBeenSet = true; m_audienceSize = std::move(value); }

    
    inline AudienceExportJobSummary& WithAudienceSize(const AudienceSize& value) { SetAudienceSize(value); return *this;}

    
    inline AudienceExportJobSummary& WithAudienceSize(AudienceSize&& value) { SetAudienceSize(std::move(value)); return *this;}


    /**
     * <p>The time at which the audience export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the audience export job was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the audience export job was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the audience export job was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the audience export job was created.</p>
     */
    inline AudienceExportJobSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the audience export job was created.</p>
     */
    inline AudienceExportJobSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the audience export job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the audience export job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline AudienceExportJobSummary& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline AudienceExportJobSummary& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket where the audience export is stored.</p>
     */
    inline AudienceExportJobSummary& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>The status of the audience export job.</p>
     */
    inline const AudienceExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the audience export job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the audience export job.</p>
     */
    inline void SetStatus(const AudienceExportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the audience export job.</p>
     */
    inline void SetStatus(AudienceExportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithStatus(const AudienceExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the audience export job.</p>
     */
    inline AudienceExportJobSummary& WithStatus(AudienceExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }

    
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    
    inline AudienceExportJobSummary& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}

    
    inline AudienceExportJobSummary& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}


    /**
     * <p>The most recent time at which the audience export job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the audience export job was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The most recent time at which the audience export job was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The most recent time at which the audience export job was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the audience export job was updated.</p>
     */
    inline AudienceExportJobSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the audience export job was updated.</p>
     */
    inline AudienceExportJobSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_audienceGenerationJobArn;
    bool m_audienceGenerationJobArnHasBeenSet = false;

    AudienceSize m_audienceSize;
    bool m_audienceSizeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    AudienceExportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
