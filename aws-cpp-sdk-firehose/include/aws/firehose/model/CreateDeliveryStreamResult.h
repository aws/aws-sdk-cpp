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
    AWS_FIREHOSE_API CreateDeliveryStreamResult();
    AWS_FIREHOSE_API CreateDeliveryStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API CreateDeliveryStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }

    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARN = value; }

    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARN = std::move(value); }

    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARN.assign(value); }

    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline CreateDeliveryStreamResult& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}

    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline CreateDeliveryStreamResult& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the delivery stream.</p>
     */
    inline CreateDeliveryStreamResult& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}

  private:

    Aws::String m_deliveryStreamARN;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
