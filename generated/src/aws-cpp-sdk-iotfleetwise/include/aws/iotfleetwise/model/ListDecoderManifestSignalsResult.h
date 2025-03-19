/**
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
    AWS_IOTFLEETWISE_API ListDecoderManifestSignalsResult() = default;
    AWS_IOTFLEETWISE_API ListDecoderManifestSignalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListDecoderManifestSignalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about a list of signals to decode. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecoders() const { return m_signalDecoders; }
    template<typename SignalDecodersT = Aws::Vector<SignalDecoder>>
    void SetSignalDecoders(SignalDecodersT&& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders = std::forward<SignalDecodersT>(value); }
    template<typename SignalDecodersT = Aws::Vector<SignalDecoder>>
    ListDecoderManifestSignalsResult& WithSignalDecoders(SignalDecodersT&& value) { SetSignalDecoders(std::forward<SignalDecodersT>(value)); return *this;}
    template<typename SignalDecodersT = SignalDecoder>
    ListDecoderManifestSignalsResult& AddSignalDecoders(SignalDecodersT&& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders.emplace_back(std::forward<SignalDecodersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDecoderManifestSignalsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDecoderManifestSignalsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SignalDecoder> m_signalDecoders;
    bool m_signalDecodersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
