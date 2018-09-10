/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESIS_API DescribeStreamConsumerResult
  {
  public:
    DescribeStreamConsumerResult();
    DescribeStreamConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStreamConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
