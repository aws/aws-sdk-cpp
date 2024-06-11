﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/SignalDecoder.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListDecoderManifestSignalsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListDecoderManifestSignalsResult();
    AWS_IOTFLEETWISE_API ListDecoderManifestSignalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListDecoderManifestSignalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about a list of signals to decode. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecoders() const{ return m_signalDecoders; }
    inline void SetSignalDecoders(const Aws::Vector<SignalDecoder>& value) { m_signalDecoders = value; }
    inline void SetSignalDecoders(Aws::Vector<SignalDecoder>&& value) { m_signalDecoders = std::move(value); }
    inline ListDecoderManifestSignalsResult& WithSignalDecoders(const Aws::Vector<SignalDecoder>& value) { SetSignalDecoders(value); return *this;}
    inline ListDecoderManifestSignalsResult& WithSignalDecoders(Aws::Vector<SignalDecoder>&& value) { SetSignalDecoders(std::move(value)); return *this;}
    inline ListDecoderManifestSignalsResult& AddSignalDecoders(const SignalDecoder& value) { m_signalDecoders.push_back(value); return *this; }
    inline ListDecoderManifestSignalsResult& AddSignalDecoders(SignalDecoder&& value) { m_signalDecoders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDecoderManifestSignalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDecoderManifestSignalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDecoderManifestSignalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDecoderManifestSignalsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDecoderManifestSignalsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDecoderManifestSignalsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SignalDecoder> m_signalDecoders;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
