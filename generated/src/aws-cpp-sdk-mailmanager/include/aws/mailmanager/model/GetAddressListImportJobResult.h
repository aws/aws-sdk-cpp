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
    AWS_MAILMANAGER_API GetAddressListImportJobResult();
    AWS_MAILMANAGER_API GetAddressListImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddressListImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the address list the import job was created for.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListId.assign(value); }
    inline GetAddressListImportJobResult& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline GetAddressListImportJobResult& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline GetAddressListImportJobResult& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestamp = value; }
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestamp = std::move(value); }
    inline GetAddressListImportJobResult& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}
    inline GetAddressListImportJobResult& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetAddressListImportJobResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetAddressListImportJobResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for failure of an import job.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline GetAddressListImportJobResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline GetAddressListImportJobResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline GetAddressListImportJobResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input addresses that failed to be imported into the address
     * list.</p>
     */
    inline int GetFailedItemsCount() const{ return m_failedItemsCount; }
    inline void SetFailedItemsCount(int value) { m_failedItemsCount = value; }
    inline GetAddressListImportJobResult& WithFailedItemsCount(int value) { SetFailedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input for an import job.</p>
     */
    inline const ImportDataFormat& GetImportDataFormat() const{ return m_importDataFormat; }
    inline void SetImportDataFormat(const ImportDataFormat& value) { m_importDataFormat = value; }
    inline void SetImportDataFormat(ImportDataFormat&& value) { m_importDataFormat = std::move(value); }
    inline GetAddressListImportJobResult& WithImportDataFormat(const ImportDataFormat& value) { SetImportDataFormat(value); return *this;}
    inline GetAddressListImportJobResult& WithImportDataFormat(ImportDataFormat&& value) { SetImportDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input addresses successfully imported into the address
     * list.</p>
     */
    inline int GetImportedItemsCount() const{ return m_importedItemsCount; }
    inline void SetImportedItemsCount(int value) { m_importedItemsCount = value; }
    inline GetAddressListImportJobResult& WithImportedItemsCount(int value) { SetImportedItemsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the import job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetAddressListImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetAddressListImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetAddressListImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the import job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetAddressListImportJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAddressListImportJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAddressListImportJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URL target for uploading the input file.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrl = value; }
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrl = std::move(value); }
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrl.assign(value); }
    inline GetAddressListImportJobResult& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}
    inline GetAddressListImportJobResult& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}
    inline GetAddressListImportJobResult& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the import job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestamp = std::move(value); }
    inline GetAddressListImportJobResult& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline GetAddressListImportJobResult& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline const ImportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ImportJobStatus& value) { m_status = value; }
    inline void SetStatus(ImportJobStatus&& value) { m_status = std::move(value); }
    inline GetAddressListImportJobResult& WithStatus(const ImportJobStatus& value) { SetStatus(value); return *this;}
    inline GetAddressListImportJobResult& WithStatus(ImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAddressListImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAddressListImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAddressListImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;

    Aws::Utils::DateTime m_completedTimestamp;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_error;

    int m_failedItemsCount;

    ImportDataFormat m_importDataFormat;

    int m_importedItemsCount;

    Aws::String m_jobId;

    Aws::String m_name;

    Aws::String m_preSignedUrl;

    Aws::Utils::DateTime m_startTimestamp;

    ImportJobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
