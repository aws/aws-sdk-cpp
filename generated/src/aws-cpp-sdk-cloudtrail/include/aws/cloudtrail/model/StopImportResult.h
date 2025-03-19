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
    AWS_CLOUDTRAIL_API StopImportResult() = default;
    AWS_CLOUDTRAIL_API StopImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API StopImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID for the import. </p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    StopImportResult& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source S3 bucket for the import. </p>
     */
    inline const ImportSource& GetImportSource() const { return m_importSource; }
    template<typename ImportSourceT = ImportSource>
    void SetImportSource(ImportSourceT&& value) { m_importSourceHasBeenSet = true; m_importSource = std::forward<ImportSourceT>(value); }
    template<typename ImportSourceT = ImportSource>
    StopImportResult& WithImportSource(ImportSourceT&& value) { SetImportSource(std::forward<ImportSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const { return m_destinations; }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    StopImportResult& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Aws::String>
    StopImportResult& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of the import. </p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline StopImportResult& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the import's creation. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    StopImportResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the import's last update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    StopImportResult& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used with <code>EndEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline const Aws::Utils::DateTime& GetStartEventTime() const { return m_startEventTime; }
    template<typename StartEventTimeT = Aws::Utils::DateTime>
    void SetStartEventTime(StartEventTimeT&& value) { m_startEventTimeHasBeenSet = true; m_startEventTime = std::forward<StartEventTimeT>(value); }
    template<typename StartEventTimeT = Aws::Utils::DateTime>
    StopImportResult& WithStartEventTime(StartEventTimeT&& value) { SetStartEventTime(std::forward<StartEventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used with <code>StartEventTime</code> to bound a <code>StartImport</code>
     * request, and limit imported trail events to only those events logged within a
     * specified time period. </p>
     */
    inline const Aws::Utils::DateTime& GetEndEventTime() const { return m_endEventTime; }
    template<typename EndEventTimeT = Aws::Utils::DateTime>
    void SetEndEventTime(EndEventTimeT&& value) { m_endEventTimeHasBeenSet = true; m_endEventTime = std::forward<EndEventTimeT>(value); }
    template<typename EndEventTimeT = Aws::Utils::DateTime>
    StopImportResult& WithEndEventTime(EndEventTimeT&& value) { SetEndEventTime(std::forward<EndEventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns information on the stopped import. </p>
     */
    inline const ImportStatistics& GetImportStatistics() const { return m_importStatistics; }
    template<typename ImportStatisticsT = ImportStatistics>
    void SetImportStatistics(ImportStatisticsT&& value) { m_importStatisticsHasBeenSet = true; m_importStatistics = std::forward<ImportStatisticsT>(value); }
    template<typename ImportStatisticsT = ImportStatistics>
    StopImportResult& WithImportStatistics(ImportStatisticsT&& value) { SetImportStatistics(std::forward<ImportStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportSource m_importSource;
    bool m_importSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_startEventTime{};
    bool m_startEventTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endEventTime{};
    bool m_endEventTimeHasBeenSet = false;

    ImportStatistics m_importStatistics;
    bool m_importStatisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
