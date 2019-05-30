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
#include <aws/iotevents-data/model/BatchPutMessageErrorEntry.h>
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
  class AWS_IOTEVENTSDATA_API BatchPutMessageResult
  {
  public:
    BatchPutMessageResult();
    BatchPutMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchPutMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline const Aws::Vector<BatchPutMessageErrorEntry>& GetBatchPutMessageErrorEntries() const{ return m_batchPutMessageErrorEntries; }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline void SetBatchPutMessageErrorEntries(const Aws::Vector<BatchPutMessageErrorEntry>& value) { m_batchPutMessageErrorEntries = value; }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline void SetBatchPutMessageErrorEntries(Aws::Vector<BatchPutMessageErrorEntry>&& value) { m_batchPutMessageErrorEntries = std::move(value); }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& WithBatchPutMessageErrorEntries(const Aws::Vector<BatchPutMessageErrorEntry>& value) { SetBatchPutMessageErrorEntries(value); return *this;}

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& WithBatchPutMessageErrorEntries(Aws::Vector<BatchPutMessageErrorEntry>&& value) { SetBatchPutMessageErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& AddBatchPutMessageErrorEntries(const BatchPutMessageErrorEntry& value) { m_batchPutMessageErrorEntries.push_back(value); return *this; }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& AddBatchPutMessageErrorEntries(BatchPutMessageErrorEntry&& value) { m_batchPutMessageErrorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPutMessageErrorEntry> m_batchPutMessageErrorEntries;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
