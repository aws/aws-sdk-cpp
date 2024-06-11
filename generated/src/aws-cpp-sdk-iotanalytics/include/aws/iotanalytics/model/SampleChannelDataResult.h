﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const{ return m_payloads; }
    inline void SetPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_payloads = value; }
    inline void SetPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_payloads = std::move(value); }
    inline SampleChannelDataResult& WithPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetPayloads(value); return *this;}
    inline SampleChannelDataResult& WithPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetPayloads(std::move(value)); return *this;}
    inline SampleChannelDataResult& AddPayloads(const Aws::Utils::ByteBuffer& value) { m_payloads.push_back(value); return *this; }
    inline SampleChannelDataResult& AddPayloads(Aws::Utils::ByteBuffer&& value) { m_payloads.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SampleChannelDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SampleChannelDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SampleChannelDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
