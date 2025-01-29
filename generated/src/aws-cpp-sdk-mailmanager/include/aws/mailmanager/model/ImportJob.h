/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/ImportDataFormat.h>
#include <aws/mailmanager/model/ImportJobStatus.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>Details about an import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ImportJob">AWS
   * API Reference</a></p>
   */
  class ImportJob
  {
  public:
    AWS_MAILMANAGER_API ImportJob();
    AWS_MAILMANAGER_API ImportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ImportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the address list the import job was created for.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListIdHasBeenSet = true; m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListIdHasBeenSet = true; m_addressListId.assign(value); }
    inline ImportJob& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline ImportJob& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline ImportJob& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }
    inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = value; }
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::move(value); }
    inline ImportJob& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}
    inline ImportJob& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ImportJob& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ImportJob& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for failure of an import job.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline ImportJob& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline ImportJob& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline ImportJob& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of addresses in the input that failed to get imported into address
     * list.</p>
     */
    inline int GetFailedItemsCount() const{ return m_failedItemsCount; }
    inline bool FailedItemsCountHasBeenSet() const { return m_failedItemsCountHasBeenSet; }
    inline void SetFailedItemsCount(int value) { m_failedItemsCountHasBeenSet = true; m_failedItemsCount = value; }
    inline ImportJob& WithFailedItemsCount(int value) { SetFailedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input for the import job.</p>
     */
    inline const ImportDataFormat& GetImportDataFormat() const{ return m_importDataFormat; }
    inline bool ImportDataFormatHasBeenSet() const { return m_importDataFormatHasBeenSet; }
    inline void SetImportDataFormat(const ImportDataFormat& value) { m_importDataFormatHasBeenSet = true; m_importDataFormat = value; }
    inline void SetImportDataFormat(ImportDataFormat&& value) { m_importDataFormatHasBeenSet = true; m_importDataFormat = std::move(value); }
    inline ImportJob& WithImportDataFormat(const ImportDataFormat& value) { SetImportDataFormat(value); return *this;}
    inline ImportJob& WithImportDataFormat(ImportDataFormat&& value) { SetImportDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of addresses in the input that were successfully imported into the
     * address list.</p>
     */
    inline int GetImportedItemsCount() const{ return m_importedItemsCount; }
    inline bool ImportedItemsCountHasBeenSet() const { return m_importedItemsCountHasBeenSet; }
    inline void SetImportedItemsCount(int value) { m_importedItemsCountHasBeenSet = true; m_importedItemsCount = value; }
    inline ImportJob& WithImportedItemsCount(int value) { SetImportedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the import job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline ImportJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ImportJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ImportJob& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the import job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImportJob& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImportJob& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImportJob& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URL target for uploading the input file.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }
    inline ImportJob& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}
    inline ImportJob& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}
    inline ImportJob& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline ImportJob& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline ImportJob& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline const ImportJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ImportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ImportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImportJob& WithStatus(const ImportJobStatus& value) { SetStatus(value); return *this;}
    inline ImportJob& WithStatus(ImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp;
    bool m_completedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    int m_failedItemsCount;
    bool m_failedItemsCountHasBeenSet = false;

    ImportDataFormat m_importDataFormat;
    bool m_importDataFormatHasBeenSet = false;

    int m_importedItemsCount;
    bool m_importedItemsCountHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    ImportJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
