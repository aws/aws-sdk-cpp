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
  class AWS_IOTANALYTICS_API DescribeDatastoreResult
  {
  public:
    DescribeDatastoreResult();
    DescribeDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * 'includeStatistics' parameter is set to true in the request.</p>
     */
    inline const DatastoreStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Additional statistical information about the data store. Included if the
     * 'includeStatistics' parameter is set to true in the request.</p>
     */
    inline void SetStatistics(const DatastoreStatistics& value) { m_statistics = value; }

    /**
     * <p>Additional statistical information about the data store. Included if the
     * 'includeStatistics' parameter is set to true in the request.</p>
     */
    inline void SetStatistics(DatastoreStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>Additional statistical information about the data store. Included if the
     * 'includeStatistics' parameter is set to true in the request.</p>
     */
    inline DescribeDatastoreResult& WithStatistics(const DatastoreStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Additional statistical information about the data store. Included if the
     * 'includeStatistics' parameter is set to true in the request.</p>
     */
    inline DescribeDatastoreResult& WithStatistics(DatastoreStatistics&& value) { SetStatistics(std::move(value)); return *this;}

  private:

    Datastore m_datastore;

    DatastoreStatistics m_statistics;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
