﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ResourceSetSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListResourceSetsResult
  {
  public:
    AWS_FMS_API ListResourceSetsResult();
    AWS_FMS_API ListResourceSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListResourceSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ResourceSetSummary</code> objects.</p>
     */
    inline const Aws::Vector<ResourceSetSummary>& GetResourceSets() const{ return m_resourceSets; }
    inline void SetResourceSets(const Aws::Vector<ResourceSetSummary>& value) { m_resourceSets = value; }
    inline void SetResourceSets(Aws::Vector<ResourceSetSummary>&& value) { m_resourceSets = std::move(value); }
    inline ListResourceSetsResult& WithResourceSets(const Aws::Vector<ResourceSetSummary>& value) { SetResourceSets(value); return *this;}
    inline ListResourceSetsResult& WithResourceSets(Aws::Vector<ResourceSetSummary>&& value) { SetResourceSets(std::move(value)); return *this;}
    inline ListResourceSetsResult& AddResourceSets(const ResourceSetSummary& value) { m_resourceSets.push_back(value); return *this; }
    inline ListResourceSetsResult& AddResourceSets(ResourceSetSummary&& value) { m_resourceSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceSetSummary> m_resourceSets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
