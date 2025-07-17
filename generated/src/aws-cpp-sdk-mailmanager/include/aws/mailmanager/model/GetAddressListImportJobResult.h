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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MailManager
{
namespace Model
{
  class GetAddressListImportJobResult
  {
  public:
    AWS_MAILMANAGER_API GetAddressListImportJobResult() = default;
    AWS_MAILMANAGER_API GetAddressListImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddressListImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the import job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetAddressListImportJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the import job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetAddressListImportJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline ImportJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ImportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAddressListImportJobResult& WithStatus(ImportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URL target for uploading the input file.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    GetAddressListImportJobResult& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input addresses successfully imported into the address
     * list.</p>
     */
    inline int GetImportedItemsCount() const { return m_importedItemsCount; }
    inline void SetImportedItemsCount(int value) { m_importedItemsCountHasBeenSet = true; m_importedItemsCount = value; }
    inline GetAddressListImportJobResult& WithImportedItemsCount(int value) { SetImportedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input addresses that failed to be imported into the address
     * list.</p>
     */
    inline int GetFailedItemsCount() const { return m_failedItemsCount; }
    inline void SetFailedItemsCount(int value) { m_failedItemsCountHasBeenSet = true; m_failedItemsCount = value; }
    inline GetAddressListImportJobResult& WithFailedItemsCount(int value) { SetFailedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input for an import job.</p>
     */
    inline const ImportDataFormat& GetImportDataFormat() const { return m_importDataFormat; }
    template<typename ImportDataFormatT = ImportDataFormat>
    void SetImportDataFormat(ImportDataFormatT&& value) { m_importDataFormatHasBeenSet = true; m_importDataFormat = std::forward<ImportDataFormatT>(value); }
    template<typename ImportDataFormatT = ImportDataFormat>
    GetAddressListImportJobResult& WithImportDataFormat(ImportDataFormatT&& value) { SetImportDataFormat(std::forward<ImportDataFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the address list the import job was created for.</p>
     */
    inline const Aws::String& GetAddressListId() const { return m_addressListId; }
    template<typename AddressListIdT = Aws::String>
    void SetAddressListId(AddressListIdT&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::forward<AddressListIdT>(value); }
    template<typename AddressListIdT = Aws::String>
    GetAddressListImportJobResult& WithAddressListId(AddressListIdT&& value) { SetAddressListId(std::forward<AddressListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetAddressListImportJobResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    GetAddressListImportJobResult& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    void SetCompletedTimestamp(CompletedTimestampT&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::forward<CompletedTimestampT>(value); }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    GetAddressListImportJobResult& WithCompletedTimestamp(CompletedTimestampT&& value) { SetCompletedTimestamp(std::forward<CompletedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for failure of an import job.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    GetAddressListImportJobResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAddressListImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
