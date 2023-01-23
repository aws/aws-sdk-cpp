/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ConsumerDescription.h>
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
    AWS_KINESIS_API DescribeStreamConsumerResult();
    AWS_KINESIS_API DescribeStreamConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeStreamConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that represents the details of the consumer.</p>
     */
    inline const ConsumerDescription& GetConsumerDescription() const{ return m_consumerDescription; }

    /**
     * <p>An object that represents the details of the consumer.</p>
     */
    inline void SetConsumerDescription(const ConsumerDescription& value) { m_consumerDescription = value; }

    /**
     * <p>An object that represents the details of the consumer.</p>
     */
    inline void SetConsumerDescription(ConsumerDescription&& value) { m_consumerDescription = std::move(value); }

    /**
     * <p>An object that represents the details of the consumer.</p>
     */
    inline DescribeStreamConsumerResult& WithConsumerDescription(const ConsumerDescription& value) { SetConsumerDescription(value); return *this;}

    /**
     * <p>An object that represents the details of the consumer.</p>
     */
    inline DescribeStreamConsumerResult& WithConsumerDescription(ConsumerDescription&& value) { SetConsumerDescription(std::move(value)); return *this;}

  private:

    ConsumerDescription m_consumerDescription;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
