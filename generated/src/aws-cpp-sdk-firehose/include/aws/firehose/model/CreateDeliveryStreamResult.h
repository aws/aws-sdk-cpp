/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
  class CreateDeliveryStreamResult
  {
  public:
    AWS_FIREHOSE_API CreateDeliveryStreamResult() = default;
    AWS_FIREHOSE_API CreateDeliveryStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API CreateDeliveryStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const { return m_deliveryStreamARN; }
    template<typename DeliveryStreamARNT = Aws::String>
    void SetDeliveryStreamARN(DeliveryStreamARNT&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::forward<DeliveryStreamARNT>(value); }
    template<typename DeliveryStreamARNT = Aws::String>
    CreateDeliveryStreamResult& WithDeliveryStreamARN(DeliveryStreamARNT&& value) { SetDeliveryStreamARN(std::forward<DeliveryStreamARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDeliveryStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
