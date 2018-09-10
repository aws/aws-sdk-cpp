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
#include <aws/core/utils/Array.h>
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
  class AWS_IOTANALYTICS_API SampleChannelDataResult
  {
  public:
    SampleChannelDataResult();
    SampleChannelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SampleChannelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const{ return m_payloads; }

    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline void SetPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_payloads = value; }

    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline void SetPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_payloads = std::move(value); }

    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline SampleChannelDataResult& WithPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetPayloads(value); return *this;}

    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline SampleChannelDataResult& WithPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetPayloads(std::move(value)); return *this;}

    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline SampleChannelDataResult& AddPayloads(const Aws::Utils::ByteBuffer& value) { m_payloads.push_back(value); return *this; }

    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline SampleChannelDataResult& AddPayloads(Aws::Utils::ByteBuffer&& value) { m_payloads.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
