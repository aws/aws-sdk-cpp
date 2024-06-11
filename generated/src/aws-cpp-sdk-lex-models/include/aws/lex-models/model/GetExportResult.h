/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/ResourceType.h>
#include <aws/lex-models/model/ExportType.h>
#include <aws/lex-models/model/ExportStatus.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetExportResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetExportResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot being exported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetExportResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetExportResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetExportResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot being exported.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline GetExportResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GetExportResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GetExportResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the exported resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }
    inline GetExportResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetExportResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data.</p>
     */
    inline const ExportType& GetExportType() const{ return m_exportType; }
    inline void SetExportType(const ExportType& value) { m_exportType = value; }
    inline void SetExportType(ExportType&& value) { m_exportType = std::move(value); }
    inline GetExportResult& WithExportType(const ExportType& value) { SetExportType(value); return *this;}
    inline GetExportResult& WithExportType(ExportType&& value) { SetExportType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export. </p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * export is in progress.</p> </li> <li> <p> <code>READY</code> - The export is
     * complete.</p> </li> <li> <p> <code>FAILED</code> - The export could not be
     * completed.</p> </li> </ul>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }
    inline GetExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}
    inline GetExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetExportResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetExportResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetExportResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline GetExportResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline GetExportResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline GetExportResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_version;

    ResourceType m_resourceType;

    ExportType m_exportType;

    ExportStatus m_exportStatus;

    Aws::String m_failureReason;

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
