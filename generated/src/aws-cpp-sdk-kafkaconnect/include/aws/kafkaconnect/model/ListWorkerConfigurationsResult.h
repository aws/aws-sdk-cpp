/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerConfigurationSummary.h>
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
namespace KafkaConnect
{
namespace Model
{
  class ListWorkerConfigurationsResult
  {
  public:
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult();
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListWorkerConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListWorkerConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListWorkerConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline const Aws::Vector<WorkerConfigurationSummary>& GetWorkerConfigurations() const{ return m_workerConfigurations; }

    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline void SetWorkerConfigurations(const Aws::Vector<WorkerConfigurationSummary>& value) { m_workerConfigurations = value; }

    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline void SetWorkerConfigurations(Aws::Vector<WorkerConfigurationSummary>&& value) { m_workerConfigurations = std::move(value); }

    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline ListWorkerConfigurationsResult& WithWorkerConfigurations(const Aws::Vector<WorkerConfigurationSummary>& value) { SetWorkerConfigurations(value); return *this;}

    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline ListWorkerConfigurationsResult& WithWorkerConfigurations(Aws::Vector<WorkerConfigurationSummary>&& value) { SetWorkerConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline ListWorkerConfigurationsResult& AddWorkerConfigurations(const WorkerConfigurationSummary& value) { m_workerConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline ListWorkerConfigurationsResult& AddWorkerConfigurations(WorkerConfigurationSummary&& value) { m_workerConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkerConfigurationSummary> m_workerConfigurations;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
