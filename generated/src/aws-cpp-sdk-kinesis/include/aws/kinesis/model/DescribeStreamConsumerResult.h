/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ConsumerDescription.h>
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
namespace Kinesis
{
namespace Model
{
  class DescribeStreamConsumerResult
  {
  public:
    AWS_KINESIS_API DescribeStreamConsumerResult() = default;
    AWS_KINESIS_API DescribeStreamConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeStreamConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that represents the details of the consumer.</p>
     */
    inline const ConsumerDescription& GetConsumerDescription() const { return m_consumerDescription; }
    template<typename ConsumerDescriptionT = ConsumerDescription>
    void SetConsumerDescription(ConsumerDescriptionT&& value) { m_consumerDescriptionHasBeenSet = true; m_consumerDescription = std::forward<ConsumerDescriptionT>(value); }
    template<typename ConsumerDescriptionT = ConsumerDescription>
    DescribeStreamConsumerResult& WithConsumerDescription(ConsumerDescriptionT&& value) { SetConsumerDescription(std::forward<ConsumerDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStreamConsumerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConsumerDescription m_consumerDescription;
    bool m_consumerDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
