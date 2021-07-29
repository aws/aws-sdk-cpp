﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListAssociatedRoute53HealthChecksResult
  {
  public:
    ListAssociatedRoute53HealthChecksResult();
    ListAssociatedRoute53HealthChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssociatedRoute53HealthChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHealthCheckIds() const{ return m_healthCheckIds; }

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline void SetHealthCheckIds(const Aws::Vector<Aws::String>& value) { m_healthCheckIds = value; }

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline void SetHealthCheckIds(Aws::Vector<Aws::String>&& value) { m_healthCheckIds = std::move(value); }

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& WithHealthCheckIds(const Aws::Vector<Aws::String>& value) { SetHealthCheckIds(value); return *this;}

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& WithHealthCheckIds(Aws::Vector<Aws::String>&& value) { SetHealthCheckIds(std::move(value)); return *this;}

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& AddHealthCheckIds(const Aws::String& value) { m_healthCheckIds.push_back(value); return *this; }

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& AddHealthCheckIds(Aws::String&& value) { m_healthCheckIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& AddHealthCheckIds(const char* value) { m_healthCheckIds.push_back(value); return *this; }


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
    inline ListAssociatedRoute53HealthChecksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListAssociatedRoute53HealthChecksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_healthCheckIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
