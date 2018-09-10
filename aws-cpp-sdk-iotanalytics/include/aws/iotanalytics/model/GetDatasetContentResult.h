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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/DatasetContentStatus.h>
#include <aws/iotanalytics/model/DatasetEntry.h>
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
  class AWS_IOTANALYTICS_API GetDatasetContentResult
  {
  public:
    GetDatasetContentResult();
    GetDatasetContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDatasetContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline const Aws::Vector<DatasetEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline void SetEntries(const Aws::Vector<DatasetEntry>& value) { m_entries = value; }

    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline void SetEntries(Aws::Vector<DatasetEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline GetDatasetContentResult& WithEntries(const Aws::Vector<DatasetEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline GetDatasetContentResult& WithEntries(Aws::Vector<DatasetEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline GetDatasetContentResult& AddEntries(const DatasetEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>A list of "DatasetEntry" objects.</p>
     */
    inline GetDatasetContentResult& AddEntries(DatasetEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time when the request was made.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }

    /**
     * <p>The time when the request was made.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }

    /**
     * <p>The time when the request was made.</p>
     */
    inline GetDatasetContentResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time when the request was made.</p>
     */
    inline GetDatasetContentResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the data set content.</p>
     */
    inline const DatasetContentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data set content.</p>
     */
    inline void SetStatus(const DatasetContentStatus& value) { m_status = value; }

    /**
     * <p>The status of the data set content.</p>
     */
    inline void SetStatus(DatasetContentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the data set content.</p>
     */
    inline GetDatasetContentResult& WithStatus(const DatasetContentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data set content.</p>
     */
    inline GetDatasetContentResult& WithStatus(DatasetContentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<DatasetEntry> m_entries;

    Aws::Utils::DateTime m_timestamp;

    DatasetContentStatus m_status;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
