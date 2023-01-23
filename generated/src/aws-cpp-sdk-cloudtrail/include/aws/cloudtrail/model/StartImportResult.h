/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/ImportSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/ImportStatus.h>
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
namespace CloudTrail
{
namespace Model
{
  class StartImportResult
  {
  public:
    AWS_CLOUDTRAIL_API StartImportResult();
    AWS_CLOUDTRAIL_API StartImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API StartImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the import. </p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p> The ID of the import. </p>
     */
    inline void SetImportId(const Aws::String& value) { m_importId = value; }

    /**
     * <p> The ID of the import. </p>
     */
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }

    /**
     * <p> The ID of the import. </p>
     */
    inline void SetImportId(const char* value) { m_importId.assign(value); }

    /**
     * <p> The ID of the import. </p>
     */
    inline StartImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p> The ID of the import. </p>
     */
    inline StartImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p> The ID of the import. </p>
     */
    inline StartImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}


    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinations = value; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinations = std::move(value); }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StartImportResult& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StartImportResult& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StartImportResult& AddDestinations(const Aws::String& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StartImportResult& AddDestinations(Aws::String&& value) { m_destinations.push_back(std::move(value)); return *this; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StartImportResult& AddDestinations(const char* value) { m_destinations.push_back(value); return *this; }


    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline const ImportSource& GetImportSource() const{ return m_importSource; }

    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline void SetImportSource(const ImportSource& value) { m_importSource = value; }

    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline void SetImportSource(ImportSource&& value) { m_importSource = std::move(value); }

    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline StartImportResult& WithImportSource(const ImportSource& value) { SetImportSource(value); return *this;}

    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline StartImportResult& WithImportSource(ImportSource&& value) { SetImportSource(std::move(value)); return *this;}


    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline const Aws::Utils::DateTime& GetStartEventTime() const{ return m_startEventTime; }

    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline void SetStartEventTime(const Aws::Utils::DateTime& value) { m_startEventTime = value; }

    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline void SetStartEventTime(Aws::Utils::DateTime&& value) { m_startEventTime = std::move(value); }

    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline StartImportResult& WithStartEventTime(const Aws::Utils::DateTime& value) { SetStartEventTime(value); return *this;}

    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline StartImportResult& WithStartEventTime(Aws::Utils::DateTime&& value) { SetStartEventTime(std::move(value)); return *this;}


    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline const Aws::Utils::DateTime& GetEndEventTime() const{ return m_endEventTime; }

    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline void SetEndEventTime(const Aws::Utils::DateTime& value) { m_endEventTime = value; }

    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline void SetEndEventTime(Aws::Utils::DateTime&& value) { m_endEventTime = std::move(value); }

    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline StartImportResult& WithEndEventTime(const Aws::Utils::DateTime& value) { SetEndEventTime(value); return *this;}

    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline StartImportResult& WithEndEventTime(Aws::Utils::DateTime&& value) { SetEndEventTime(std::move(value)); return *this;}


    /**
     * <p> Shows the status of the import after a <code>StartImport</code> request. An
     * import finishes with a status of <code>COMPLETED</code> if there were no
     * failures, or <code>FAILED</code> if there were failures. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p> Shows the status of the import after a <code>StartImport</code> request. An
     * import finishes with a status of <code>COMPLETED</code> if there were no
     * failures, or <code>FAILED</code> if there were failures. </p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }

    /**
     * <p> Shows the status of the import after a <code>StartImport</code> request. An
     * import finishes with a status of <code>COMPLETED</code> if there were no
     * failures, or <code>FAILED</code> if there were failures. </p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }

    /**
     * <p> Shows the status of the import after a <code>StartImport</code> request. An
     * import finishes with a status of <code>COMPLETED</code> if there were no
     * failures, or <code>FAILED</code> if there were failures. </p>
     */
    inline StartImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p> Shows the status of the import after a <code>StartImport</code> request. An
     * import finishes with a status of <code>COMPLETED</code> if there were no
     * failures, or <code>FAILED</code> if there were failures. </p>
     */
    inline StartImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p> The timestamp for the import's creation. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp for the import's creation. </p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p> The timestamp for the import's creation. </p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp for the import's creation. </p>
     */
    inline StartImportResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp for the import's creation. </p>
     */
    inline StartImportResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the import's last update, if applicable. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p> The timestamp of the import's last update, if applicable. </p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestamp = value; }

    /**
     * <p> The timestamp of the import's last update, if applicable. </p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestamp = std::move(value); }

    /**
     * <p> The timestamp of the import's last update, if applicable. </p>
     */
    inline StartImportResult& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp of the import's last update, if applicable. </p>
     */
    inline StartImportResult& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_importId;

    Aws::Vector<Aws::String> m_destinations;

    ImportSource m_importSource;

    Aws::Utils::DateTime m_startEventTime;

    Aws::Utils::DateTime m_endEventTime;

    ImportStatus m_importStatus;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_updatedTimestamp;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
