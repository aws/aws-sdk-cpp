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
  class AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult
  {
  public:
    ListResourceSetsResult();
    ListResourceSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourceSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListResourceSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListResourceSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListResourceSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of ResourceSets associated with the account
     */
    inline const Aws::Vector<ResourceSetOutput>& GetResourceSets() const{ return m_resourceSets; }

    /**
     * A list of ResourceSets associated with the account
     */
    inline void SetResourceSets(const Aws::Vector<ResourceSetOutput>& value) { m_resourceSets = value; }

    /**
     * A list of ResourceSets associated with the account
     */
    inline void SetResourceSets(Aws::Vector<ResourceSetOutput>&& value) { m_resourceSets = std::move(value); }

    /**
     * A list of ResourceSets associated with the account
     */
    inline ListResourceSetsResult& WithResourceSets(const Aws::Vector<ResourceSetOutput>& value) { SetResourceSets(value); return *this;}

    /**
     * A list of ResourceSets associated with the account
     */
    inline ListResourceSetsResult& WithResourceSets(Aws::Vector<ResourceSetOutput>&& value) { SetResourceSets(std::move(value)); return *this;}

    /**
     * A list of ResourceSets associated with the account
     */
    inline ListResourceSetsResult& AddResourceSets(const ResourceSetOutput& value) { m_resourceSets.push_back(value); return *this; }

    /**
     * A list of ResourceSets associated with the account
     */
    inline ListResourceSetsResult& AddResourceSets(ResourceSetOutput&& value) { m_resourceSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceSetOutput> m_resourceSets;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
