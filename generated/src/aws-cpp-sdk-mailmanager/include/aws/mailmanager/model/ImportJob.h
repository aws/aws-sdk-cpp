/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ImportJobStatus.h>
#include <aws/mailmanager/model/ImportDataFormat.h>
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
    AWS_MAILMANAGER_API ImportJob() = default;
    AWS_MAILMANAGER_API ImportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ImportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the import job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    ImportJob& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the import job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImportJob& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline ImportJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ImportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportJob& WithStatus(ImportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URL target for uploading the input file.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    ImportJob& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of addresses in the input that were successfully imported into the
     * address list.</p>
     */
    inline int GetImportedItemsCount() const { return m_importedItemsCount; }
    inline bool ImportedItemsCountHasBeenSet() const { return m_importedItemsCountHasBeenSet; }
    inline void SetImportedItemsCount(int value) { m_importedItemsCountHasBeenSet = true; m_importedItemsCount = value; }
    inline ImportJob& WithImportedItemsCount(int value) { SetImportedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of addresses in the input that failed to get imported into address
     * list.</p>
     */
    inline int GetFailedItemsCount() const { return m_failedItemsCount; }
    inline bool FailedItemsCountHasBeenSet() const { return m_failedItemsCountHasBeenSet; }
    inline void SetFailedItemsCount(int value) { m_failedItemsCountHasBeenSet = true; m_failedItemsCount = value; }
    inline ImportJob& WithFailedItemsCount(int value) { SetFailedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input for the import job.</p>
     */
    inline const ImportDataFormat& GetImportDataFormat() const { return m_importDataFormat; }
    inline bool ImportDataFormatHasBeenSet() const { return m_importDataFormatHasBeenSet; }
    template<typename ImportDataFormatT = ImportDataFormat>
    void SetImportDataFormat(ImportDataFormatT&& value) { m_importDataFormatHasBeenSet = true; m_importDataFormat = std::forward<ImportDataFormatT>(value); }
    template<typename ImportDataFormatT = ImportDataFormat>
    ImportJob& WithImportDataFormat(ImportDataFormatT&& value) { SetImportDataFormat(std::forward<ImportDataFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the address list the import job was created for.</p>
     */
    inline const Aws::String& GetAddressListId() const { return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    template<typename AddressListIdT = Aws::String>
    void SetAddressListId(AddressListIdT&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::forward<AddressListIdT>(value); }
    template<typename AddressListIdT = Aws::String>
    ImportJob& WithAddressListId(AddressListIdT&& value) { SetAddressListId(std::forward<AddressListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ImportJob& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    ImportJob& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
    inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    void SetCompletedTimestamp(CompletedTimestampT&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::forward<CompletedTimestampT>(value); }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    ImportJob& WithCompletedTimestamp(CompletedTimestampT&& value) { SetCompletedTimestamp(std::forward<CompletedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for failure of an import job.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    ImportJob& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ImportJobStatus m_status{ImportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    int m_importedItemsCount{0};
    bool m_importedItemsCountHasBeenSet = false;

    int m_failedItemsCount{0};
    bool m_failedItemsCountHasBeenSet = false;

    ImportDataFormat m_importDataFormat;
    bool m_importDataFormatHasBeenSet = false;

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp{};
    bool m_completedTimestampHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
