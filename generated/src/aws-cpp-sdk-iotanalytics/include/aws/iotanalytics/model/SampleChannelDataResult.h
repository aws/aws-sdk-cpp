/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SampleChannelDataResult
  {
  public:
    AWS_IOTANALYTICS_API SampleChannelDataResult();
    AWS_IOTANALYTICS_API SampleChannelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API SampleChannelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
