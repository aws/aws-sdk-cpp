/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Datastore.h>
#include <aws/iotanalytics/model/DatastoreStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class DescribeDatastoreResult
  {
  public:
    AWS_IOTANALYTICS_API DescribeDatastoreResult() = default;
    AWS_IOTANALYTICS_API DescribeDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribeDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the data store.</p>
     */
    inline const Datastore& GetDatastore() const { return m_datastore; }
    template<typename DatastoreT = Datastore>
    void SetDatastore(DatastoreT&& value) { m_datastoreHasBeenSet = true; m_datastore = std::forward<DatastoreT>(value); }
    template<typename DatastoreT = Datastore>
    DescribeDatastoreResult& WithDatastore(DatastoreT&& value) { SetDatastore(std::forward<DatastoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional statistical information about the data store. Included if the
     * <code>includeStatistics</code> parameter is set to <code>true</code> in the
     * request.</p>
     */
    inline const DatastoreStatistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = DatastoreStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = DatastoreStatistics>
    DescribeDatastoreResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatastoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Datastore m_datastore;
    bool m_datastoreHasBeenSet = false;

    DatastoreStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
