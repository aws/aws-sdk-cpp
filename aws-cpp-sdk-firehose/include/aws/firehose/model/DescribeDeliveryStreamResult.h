/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/DeliveryStreamDescription.h>
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
    AWS_FIREHOSE_API DescribeDeliveryStreamResult();
    AWS_FIREHOSE_API DescribeDeliveryStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API DescribeDeliveryStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the delivery stream.</p>
     */
    inline const DeliveryStreamDescription& GetDeliveryStreamDescription() const{ return m_deliveryStreamDescription; }

    /**
     * <p>Information about the delivery stream.</p>
     */
    inline void SetDeliveryStreamDescription(const DeliveryStreamDescription& value) { m_deliveryStreamDescription = value; }

    /**
     * <p>Information about the delivery stream.</p>
     */
    inline void SetDeliveryStreamDescription(DeliveryStreamDescription&& value) { m_deliveryStreamDescription = std::move(value); }

    /**
     * <p>Information about the delivery stream.</p>
     */
    inline DescribeDeliveryStreamResult& WithDeliveryStreamDescription(const DeliveryStreamDescription& value) { SetDeliveryStreamDescription(value); return *this;}

    /**
     * <p>Information about the delivery stream.</p>
     */
    inline DescribeDeliveryStreamResult& WithDeliveryStreamDescription(DeliveryStreamDescription&& value) { SetDeliveryStreamDescription(std::move(value)); return *this;}

  private:

    DeliveryStreamDescription m_deliveryStreamDescription;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
