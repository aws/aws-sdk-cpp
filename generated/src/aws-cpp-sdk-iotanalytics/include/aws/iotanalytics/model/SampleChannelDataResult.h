/**
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
    AWS_IOTANALYTICS_API SampleChannelDataResult() = default;
    AWS_IOTANALYTICS_API SampleChannelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API SampleChannelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of message samples. Each sample message is returned as a
     * base64-encoded string.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const { return m_payloads; }
    template<typename PayloadsT = Aws::Vector<Aws::Utils::ByteBuffer>>
    void SetPayloads(PayloadsT&& value) { m_payloadsHasBeenSet = true; m_payloads = std::forward<PayloadsT>(value); }
    template<typename PayloadsT = Aws::Vector<Aws::Utils::ByteBuffer>>
    SampleChannelDataResult& WithPayloads(PayloadsT&& value) { SetPayloads(std::forward<PayloadsT>(value)); return *this;}
    template<typename PayloadsT = Aws::Utils::ByteBuffer>
    SampleChannelDataResult& AddPayloads(PayloadsT&& value) { m_payloadsHasBeenSet = true; m_payloads.emplace_back(std::forward<PayloadsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SampleChannelDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;
    bool m_payloadsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
