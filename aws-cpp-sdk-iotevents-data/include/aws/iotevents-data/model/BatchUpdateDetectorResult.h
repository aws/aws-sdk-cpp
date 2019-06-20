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
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorErrorEntry.h>
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
namespace IoTEventsData
{
namespace Model
{
  class AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult
  {
  public:
    BatchUpdateDetectorResult();
    BatchUpdateDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchUpdateDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline const Aws::Vector<BatchUpdateDetectorErrorEntry>& GetBatchUpdateDetectorErrorEntries() const{ return m_batchUpdateDetectorErrorEntries; }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline void SetBatchUpdateDetectorErrorEntries(const Aws::Vector<BatchUpdateDetectorErrorEntry>& value) { m_batchUpdateDetectorErrorEntries = value; }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline void SetBatchUpdateDetectorErrorEntries(Aws::Vector<BatchUpdateDetectorErrorEntry>&& value) { m_batchUpdateDetectorErrorEntries = std::move(value); }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& WithBatchUpdateDetectorErrorEntries(const Aws::Vector<BatchUpdateDetectorErrorEntry>& value) { SetBatchUpdateDetectorErrorEntries(value); return *this;}

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& WithBatchUpdateDetectorErrorEntries(Aws::Vector<BatchUpdateDetectorErrorEntry>&& value) { SetBatchUpdateDetectorErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& AddBatchUpdateDetectorErrorEntries(const BatchUpdateDetectorErrorEntry& value) { m_batchUpdateDetectorErrorEntries.push_back(value); return *this; }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& AddBatchUpdateDetectorErrorEntries(BatchUpdateDetectorErrorEntry&& value) { m_batchUpdateDetectorErrorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchUpdateDetectorErrorEntry> m_batchUpdateDetectorErrorEntries;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
