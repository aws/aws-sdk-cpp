/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/DeliveryStreamDescription.h>
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
  class DescribeDeliveryStreamResult
  {
  public:
    AWS_FIREHOSE_API DescribeDeliveryStreamResult() = default;
    AWS_FIREHOSE_API DescribeDeliveryStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API DescribeDeliveryStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Firehose stream.</p>
     */
    inline const DeliveryStreamDescription& GetDeliveryStreamDescription() const { return m_deliveryStreamDescription; }
    template<typename DeliveryStreamDescriptionT = DeliveryStreamDescription>
    void SetDeliveryStreamDescription(DeliveryStreamDescriptionT&& value) { m_deliveryStreamDescriptionHasBeenSet = true; m_deliveryStreamDescription = std::forward<DeliveryStreamDescriptionT>(value); }
    template<typename DeliveryStreamDescriptionT = DeliveryStreamDescription>
    DescribeDeliveryStreamResult& WithDeliveryStreamDescription(DeliveryStreamDescriptionT&& value) { SetDeliveryStreamDescription(std::forward<DeliveryStreamDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeliveryStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeliveryStreamDescription m_deliveryStreamDescription;
    bool m_deliveryStreamDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
