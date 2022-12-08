/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/route53-recovery-readiness/model/Message.h>
#include <aws/route53-recovery-readiness/model/ResourceResult.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class GetReadinessCheckStatusResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckStatusResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }

    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline GetReadinessCheckStatusResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline GetReadinessCheckStatusResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline GetReadinessCheckStatusResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>Top level messages for readiness check status</p>
     */
    inline GetReadinessCheckStatusResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The readiness at rule level.</p>
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * <p>The readiness at rule level.</p>
     */
    inline void SetReadiness(const Readiness& value) { m_readiness = value; }

    /**
     * <p>The readiness at rule level.</p>
     */
    inline void SetReadiness(Readiness&& value) { m_readiness = std::move(value); }

    /**
     * <p>The readiness at rule level.</p>
     */
    inline GetReadinessCheckStatusResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * <p>The readiness at rule level.</p>
     */
    inline GetReadinessCheckStatusResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline const Aws::Vector<ResourceResult>& GetResources() const{ return m_resources; }

    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline void SetResources(const Aws::Vector<ResourceResult>& value) { m_resources = value; }

    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline void SetResources(Aws::Vector<ResourceResult>&& value) { m_resources = std::move(value); }

    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline GetReadinessCheckStatusResult& WithResources(const Aws::Vector<ResourceResult>& value) { SetResources(value); return *this;}

    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline GetReadinessCheckStatusResult& WithResources(Aws::Vector<ResourceResult>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline GetReadinessCheckStatusResult& AddResources(const ResourceResult& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>Summary of the readiness of resources.</p>
     */
    inline GetReadinessCheckStatusResult& AddResources(ResourceResult&& value) { m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Message> m_messages;

    Aws::String m_nextToken;

    Readiness m_readiness;

    Aws::Vector<ResourceResult> m_resources;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
