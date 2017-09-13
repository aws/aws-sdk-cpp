/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LEXMODELBUILDINGSERVICE_API GetExportResult
  {
  public:
    GetExportResult();
    GetExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the bot being exported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot being exported.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the bot being exported.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the bot being exported.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the bot being exported.</p>
     */
    inline GetExportResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot being exported.</p>
     */
    inline GetExportResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot being exported.</p>
     */
    inline GetExportResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the bot being exported.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the bot being exported.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the bot being exported.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the bot being exported.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the bot being exported.</p>
     */
    inline GetExportResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the bot being exported.</p>
     */
    inline GetExportResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot being exported.</p>
     */
    inline GetExportResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The type of the exported resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the exported resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }

    /**
     * <p>The type of the exported resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The type of the exported resource.</p>
     */
    inline GetExportResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the exported resource.</p>
     */
    inline GetExportResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The format of the exported data.</p>
     */
    inline const ExportType& GetExportType() const{ return m_exportType; }

    /**
     * <p>The format of the exported data.</p>
     */
    inline void SetExportType(const ExportType& value) { m_exportType = value; }

    /**
     * <p>The format of the exported data.</p>
     */
    inline void SetExportType(ExportType&& value) { m_exportType = std::move(value); }

    /**
     * <p>The format of the exported data.</p>
     */
    inline GetExportResult& WithExportType(const ExportType& value) { SetExportType(value); return *this;}

    /**
     * <p>The format of the exported data.</p>
     */
    inline GetExportResult& WithExportType(ExportType&& value) { SetExportType(std::move(value)); return *this;}


    /**
     * <p>The status of the export. </p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * export is in progress.</p> </li> <li> <p> <code>READY</code> - The export is
     * complete.</p> </li> <li> <p> <code>FAILED</code> - The export could not be
     * completed.</p> </li> </ul>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the export. </p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * export is in progress.</p> </li> <li> <p> <code>READY</code> - The export is
     * complete.</p> </li> <li> <p> <code>FAILED</code> - The export could not be
     * completed.</p> </li> </ul>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The status of the export. </p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * export is in progress.</p> </li> <li> <p> <code>READY</code> - The export is
     * complete.</p> </li> <li> <p> <code>FAILED</code> - The export could not be
     * completed.</p> </li> </ul>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The status of the export. </p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * export is in progress.</p> </li> <li> <p> <code>READY</code> - The export is
     * complete.</p> </li> <li> <p> <code>FAILED</code> - The export could not be
     * completed.</p> </li> </ul>
     */
    inline GetExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the export. </p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * export is in progress.</p> </li> <li> <p> <code>READY</code> - The export is
     * complete.</p> </li> <li> <p> <code>FAILED</code> - The export could not be
     * completed.</p> </li> </ul>
     */
    inline GetExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline GetExportResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline GetExportResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to export the resource.</p>
     */
    inline GetExportResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline GetExportResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline GetExportResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>An S3 pre-signed URL that provides the location of the exported resource. The
     * exported resource is a ZIP archive that contains the exported resource in JSON
     * format. The structure of the archive may change. Your code should not rely on
     * the archive structure.</p>
     */
    inline GetExportResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_version;

    ResourceType m_resourceType;

    ExportType m_exportType;

    ExportStatus m_exportStatus;

    Aws::String m_failureReason;

    Aws::String m_url;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
