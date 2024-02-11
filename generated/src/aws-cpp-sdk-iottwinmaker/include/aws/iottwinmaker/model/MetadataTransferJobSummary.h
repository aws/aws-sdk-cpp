/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/MetadataTransferJobStatus.h>
#include <aws/iottwinmaker/model/MetadataTransferJobProgress.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The metadata transfer job summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/MetadataTransferJobSummary">AWS
   * API Reference</a></p>
   */
  class MetadataTransferJobSummary
  {
  public:
    AWS_IOTTWINMAKER_API MetadataTransferJobSummary();
    AWS_IOTTWINMAKER_API MetadataTransferJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API MetadataTransferJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const{ return m_metadataTransferJobId; }

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline bool MetadataTransferJobIdHasBeenSet() const { return m_metadataTransferJobIdHasBeenSet; }

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline void SetMetadataTransferJobId(const Aws::String& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = value; }

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline void SetMetadataTransferJobId(Aws::String&& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = std::move(value); }

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline void SetMetadataTransferJobId(const char* value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId.assign(value); }

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline MetadataTransferJobSummary& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline MetadataTransferJobSummary& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline MetadataTransferJobSummary& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}


    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline MetadataTransferJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline MetadataTransferJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline MetadataTransferJobSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline MetadataTransferJobSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline MetadataTransferJobSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline MetadataTransferJobSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline MetadataTransferJobSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline const MetadataTransferJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline void SetStatus(const MetadataTransferJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline void SetStatus(MetadataTransferJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline MetadataTransferJobSummary& WithStatus(const MetadataTransferJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline MetadataTransferJobSummary& WithStatus(MetadataTransferJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline const MetadataTransferJobProgress& GetProgress() const{ return m_progress; }

    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline void SetProgress(const MetadataTransferJobProgress& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline void SetProgress(MetadataTransferJobProgress&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline MetadataTransferJobSummary& WithProgress(const MetadataTransferJobProgress& value) { SetProgress(value); return *this;}

    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline MetadataTransferJobSummary& WithProgress(MetadataTransferJobProgress&& value) { SetProgress(std::move(value)); return *this;}

  private:

    Aws::String m_metadataTransferJobId;
    bool m_metadataTransferJobIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;

    MetadataTransferJobStatus m_status;
    bool m_statusHasBeenSet = false;

    MetadataTransferJobProgress m_progress;
    bool m_progressHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
