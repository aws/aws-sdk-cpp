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


    ///@{
    /**
     * <p>The metadata transfer job summary Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const{ return m_metadataTransferJobId; }
    inline bool MetadataTransferJobIdHasBeenSet() const { return m_metadataTransferJobIdHasBeenSet; }
    inline void SetMetadataTransferJobId(const Aws::String& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = value; }
    inline void SetMetadataTransferJobId(Aws::String&& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = std::move(value); }
    inline void SetMetadataTransferJobId(const char* value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId.assign(value); }
    inline MetadataTransferJobSummary& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}
    inline MetadataTransferJobSummary& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}
    inline MetadataTransferJobSummary& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job summary ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline MetadataTransferJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline MetadataTransferJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline MetadataTransferJobSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job summary creation DateTime object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline MetadataTransferJobSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline MetadataTransferJobSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job summary update DateTime object</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }
    inline MetadataTransferJobSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}
    inline MetadataTransferJobSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job summary status.</p>
     */
    inline const MetadataTransferJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MetadataTransferJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MetadataTransferJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MetadataTransferJobSummary& WithStatus(const MetadataTransferJobStatus& value) { SetStatus(value); return *this;}
    inline MetadataTransferJobSummary& WithStatus(MetadataTransferJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job summary progess.</p>
     */
    inline const MetadataTransferJobProgress& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const MetadataTransferJobProgress& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(MetadataTransferJobProgress&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline MetadataTransferJobSummary& WithProgress(const MetadataTransferJobProgress& value) { SetProgress(value); return *this;}
    inline MetadataTransferJobSummary& WithProgress(MetadataTransferJobProgress&& value) { SetProgress(std::move(value)); return *this;}
    ///@}
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
