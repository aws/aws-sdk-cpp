/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/ImportStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/ImportStatistics.h>
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
  class StopImportResult
  {
  public:
    AWS_CLOUDTRAIL_API StopImportResult();
    AWS_CLOUDTRAIL_API StopImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API StopImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID for the import. </p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p> The ID for the import. </p>
     */
    inline void SetImportId(const Aws::String& value) { m_importId = value; }

    /**
     * <p> The ID for the import. </p>
     */
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }

    /**
     * <p> The ID for the import. </p>
     */
    inline void SetImportId(const char* value) { m_importId.assign(value); }

    /**
     * <p> The ID for the import. </p>
     */
    inline StopImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p> The ID for the import. </p>
     */
    inline StopImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p> The ID for the import. </p>
     */
    inline StopImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}


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
    inline StopImportResult& WithImportSource(const ImportSource& value) { SetImportSource(value); return *this;}

    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline StopImportResult& WithImportSource(ImportSource&& value) { SetImportSource(std::move(value)); return *this;}


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
    inline StopImportResult& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StopImportResult& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StopImportResult& AddDestinations(const Aws::String& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StopImportResult& AddDestinations(Aws::String&& value) { m_destinations.push_back(std::move(value)); return *this; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline StopImportResult& AddDestinations(const char* value) { m_destinations.push_back(value); return *this; }


    /**
     * <p> The status of the import. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }

    /**
     * <p> The status of the import. </p>
     */
    inline StopImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p> The status of the import. </p>
     */
    inline StopImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline StopImportResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline StopImportResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestamp = value; }

    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestamp = std::move(value); }

    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline StopImportResult& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline StopImportResult& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


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
    inline StopImportResult& WithStartEventTime(const Aws::Utils::DateTime& value) { SetStartEventTime(value); return *this;}

    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline StopImportResult& WithStartEventTime(Aws::Utils::DateTime&& value) { SetStartEventTime(std::move(value)); return *this;}


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
    inline StopImportResult& WithEndEventTime(const Aws::Utils::DateTime& value) { SetEndEventTime(value); return *this;}

    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline StopImportResult& WithEndEventTime(Aws::Utils::DateTime&& value) { SetEndEventTime(std::move(value)); return *this;}


    /**
     * <p> Returns information on the stopped import. </p>
     */
    inline const ImportStatistics& GetImportStatistics() const{ return m_importStatistics; }

    /**
     * <p> Returns information on the stopped import. </p>
     */
    inline void SetImportStatistics(const ImportStatistics& value) { m_importStatistics = value; }

    /**
     * <p> Returns information on the stopped import. </p>
     */
    inline void SetImportStatistics(ImportStatistics&& value) { m_importStatistics = std::move(value); }

    /**
     * <p> Returns information on the stopped import. </p>
     */
    inline StopImportResult& WithImportStatistics(const ImportStatistics& value) { SetImportStatistics(value); return *this;}

    /**
     * <p> Returns information on the stopped import. </p>
     */
    inline StopImportResult& WithImportStatistics(ImportStatistics&& value) { SetImportStatistics(std::move(value)); return *this;}

  private:

    Aws::String m_importId;

    ImportSource m_importSource;

    Aws::Vector<Aws::String> m_destinations;

    ImportStatus m_importStatus;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_updatedTimestamp;

    Aws::Utils::DateTime m_startEventTime;

    Aws::Utils::DateTime m_endEventTime;

    ImportStatistics m_importStatistics;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
