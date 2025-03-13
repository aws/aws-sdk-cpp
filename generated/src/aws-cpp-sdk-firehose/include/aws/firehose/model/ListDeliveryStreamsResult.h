/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Firehose
{
namespace Model
{
  class ListDeliveryStreamsResult
  {
  public:
    AWS_FIREHOSE_API ListDeliveryStreamsResult() = default;
    AWS_FIREHOSE_API ListDeliveryStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API ListDeliveryStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the Firehose streams.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeliveryStreamNames() const { return m_deliveryStreamNames; }
    template<typename DeliveryStreamNamesT = Aws::Vector<Aws::String>>
    void SetDeliveryStreamNames(DeliveryStreamNamesT&& value) { m_deliveryStreamNamesHasBeenSet = true; m_deliveryStreamNames = std::forward<DeliveryStreamNamesT>(value); }
    template<typename DeliveryStreamNamesT = Aws::Vector<Aws::String>>
    ListDeliveryStreamsResult& WithDeliveryStreamNames(DeliveryStreamNamesT&& value) { SetDeliveryStreamNames(std::forward<DeliveryStreamNamesT>(value)); return *this;}
    template<typename DeliveryStreamNamesT = Aws::String>
    ListDeliveryStreamsResult& AddDeliveryStreamNames(DeliveryStreamNamesT&& value) { m_deliveryStreamNamesHasBeenSet = true; m_deliveryStreamNames.emplace_back(std::forward<DeliveryStreamNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more Firehose streams available to list.</p>
     */
    inline bool GetHasMoreDeliveryStreams() const { return m_hasMoreDeliveryStreams; }
    inline void SetHasMoreDeliveryStreams(bool value) { m_hasMoreDeliveryStreamsHasBeenSet = true; m_hasMoreDeliveryStreams = value; }
    inline ListDeliveryStreamsResult& WithHasMoreDeliveryStreams(bool value) { SetHasMoreDeliveryStreams(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeliveryStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deliveryStreamNames;
    bool m_deliveryStreamNamesHasBeenSet = false;

    bool m_hasMoreDeliveryStreams{false};
    bool m_hasMoreDeliveryStreamsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
