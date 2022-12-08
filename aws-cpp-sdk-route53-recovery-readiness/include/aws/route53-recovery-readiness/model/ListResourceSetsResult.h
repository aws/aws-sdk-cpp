/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/ResourceSetOutput.h>
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
  class ListResourceSetsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListResourceSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListResourceSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListResourceSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline const Aws::Vector<ResourceSetOutput>& GetResourceSets() const{ return m_resourceSets; }

    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline void SetResourceSets(const Aws::Vector<ResourceSetOutput>& value) { m_resourceSets = value; }

    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline void SetResourceSets(Aws::Vector<ResourceSetOutput>&& value) { m_resourceSets = std::move(value); }

    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline ListResourceSetsResult& WithResourceSets(const Aws::Vector<ResourceSetOutput>& value) { SetResourceSets(value); return *this;}

    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline ListResourceSetsResult& WithResourceSets(Aws::Vector<ResourceSetOutput>&& value) { SetResourceSets(std::move(value)); return *this;}

    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline ListResourceSetsResult& AddResourceSets(const ResourceSetOutput& value) { m_resourceSets.push_back(value); return *this; }

    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline ListResourceSetsResult& AddResourceSets(ResourceSetOutput&& value) { m_resourceSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceSetOutput> m_resourceSets;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
