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
  class AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckStatusResult
  {
  public:
    GetReadinessCheckStatusResult();
    GetReadinessCheckStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetReadinessCheckStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Top level messages for readiness check status
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * Top level messages for readiness check status
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    /**
     * Top level messages for readiness check status
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }

    /**
     * Top level messages for readiness check status
     */
    inline GetReadinessCheckStatusResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * Top level messages for readiness check status
     */
    inline GetReadinessCheckStatusResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * Top level messages for readiness check status
     */
    inline GetReadinessCheckStatusResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    /**
     * Top level messages for readiness check status
     */
    inline GetReadinessCheckStatusResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetReadinessCheckStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetReadinessCheckStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetReadinessCheckStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The readiness at rule level.
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * The readiness at rule level.
     */
    inline void SetReadiness(const Readiness& value) { m_readiness = value; }

    /**
     * The readiness at rule level.
     */
    inline void SetReadiness(Readiness&& value) { m_readiness = std::move(value); }

    /**
     * The readiness at rule level.
     */
    inline GetReadinessCheckStatusResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * The readiness at rule level.
     */
    inline GetReadinessCheckStatusResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * Summary of resources's readiness
     */
    inline const Aws::Vector<ResourceResult>& GetResources() const{ return m_resources; }

    /**
     * Summary of resources's readiness
     */
    inline void SetResources(const Aws::Vector<ResourceResult>& value) { m_resources = value; }

    /**
     * Summary of resources's readiness
     */
    inline void SetResources(Aws::Vector<ResourceResult>&& value) { m_resources = std::move(value); }

    /**
     * Summary of resources's readiness
     */
    inline GetReadinessCheckStatusResult& WithResources(const Aws::Vector<ResourceResult>& value) { SetResources(value); return *this;}

    /**
     * Summary of resources's readiness
     */
    inline GetReadinessCheckStatusResult& WithResources(Aws::Vector<ResourceResult>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * Summary of resources's readiness
     */
    inline GetReadinessCheckStatusResult& AddResources(const ResourceResult& value) { m_resources.push_back(value); return *this; }

    /**
     * Summary of resources's readiness
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
