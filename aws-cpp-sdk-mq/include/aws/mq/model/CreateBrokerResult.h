/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API CreateBrokerResult
  {
  public:
    CreateBrokerResult();
    CreateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(const char* value) { m_brokerArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline CreateBrokerResult& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline CreateBrokerResult& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline CreateBrokerResult& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}


    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline CreateBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline CreateBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline CreateBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}

  private:

    Aws::String m_brokerArn;

    Aws::String m_brokerId;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
