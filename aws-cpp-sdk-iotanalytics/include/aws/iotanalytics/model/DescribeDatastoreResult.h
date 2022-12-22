/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Datastore.h>
#include <aws/iotanalytics/model/DatastoreStatistics.h>
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
    AWS_IOTANALYTICS_API DescribeDatastoreResult();
    AWS_IOTANALYTICS_API DescribeDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribeDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the data store.</p>
     */
    inline const Datastore& GetDatastore() const{ return m_datastore; }

    /**
     * <p>Information about the data store.</p>
     */
    inline void SetDatastore(const Datastore& value) { m_datastore = value; }

    /**
     * <p>Information about the data store.</p>
     */
    inline void SetDatastore(Datastore&& value) { m_datastore = std::move(value); }

    /**
     * <p>Information about the data store.</p>
     */
    inline DescribeDatastoreResult& WithDatastore(const Datastore& value) { SetDatastore(value); return *this;}

    /**
     * <p>Information about the data store.</p>
     */
    inline DescribeDatastoreResult& WithDatastore(Datastore&& value) { SetDatastore(std::move(value)); return *this;}


    /**
     * <p>Additional statistical information about the data store. Included if the
     * <code>includeStatistics</code> parameter is set to <code>true</code> in the
     * request.</p>
     */
    inline const DatastoreStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Additional statistical information about the data store. Included if the
     * <code>includeStatistics</code> parameter is set to <code>true</code> in the
     * request.</p>
     */
    inline void SetStatistics(const DatastoreStatistics& value) { m_statistics = value; }

    /**
     * <p>Additional statistical information about the data store. Included if the
     * <code>includeStatistics</code> parameter is set to <code>true</code> in the
     * request.</p>
     */
    inline void SetStatistics(DatastoreStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>Additional statistical information about the data store. Included if the
     * <code>includeStatistics</code> parameter is set to <code>true</code> in the
     * request.</p>
     */
    inline DescribeDatastoreResult& WithStatistics(const DatastoreStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Additional statistical information about the data store. Included if the
     * <code>includeStatistics</code> parameter is set to <code>true</code> in the
     * request.</p>
     */
    inline DescribeDatastoreResult& WithStatistics(DatastoreStatistics&& value) { SetStatistics(std::move(value)); return *this;}

  private:

    Datastore m_datastore;

    DatastoreStatistics m_statistics;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
