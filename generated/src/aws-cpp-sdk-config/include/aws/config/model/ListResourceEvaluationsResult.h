/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ResourceEvaluation.h>
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
namespace ConfigService
{
namespace Model
{
  class ListResourceEvaluationsResult
  {
  public:
    AWS_CONFIGSERVICE_API ListResourceEvaluationsResult();
    AWS_CONFIGSERVICE_API ListResourceEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListResourceEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline const Aws::Vector<ResourceEvaluation>& GetResourceEvaluations() const{ return m_resourceEvaluations; }

    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline void SetResourceEvaluations(const Aws::Vector<ResourceEvaluation>& value) { m_resourceEvaluations = value; }

    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline void SetResourceEvaluations(Aws::Vector<ResourceEvaluation>&& value) { m_resourceEvaluations = std::move(value); }

    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline ListResourceEvaluationsResult& WithResourceEvaluations(const Aws::Vector<ResourceEvaluation>& value) { SetResourceEvaluations(value); return *this;}

    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline ListResourceEvaluationsResult& WithResourceEvaluations(Aws::Vector<ResourceEvaluation>&& value) { SetResourceEvaluations(std::move(value)); return *this;}

    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline ListResourceEvaluationsResult& AddResourceEvaluations(const ResourceEvaluation& value) { m_resourceEvaluations.push_back(value); return *this; }

    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline ListResourceEvaluationsResult& AddResourceEvaluations(ResourceEvaluation&& value) { m_resourceEvaluations.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline ListResourceEvaluationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline ListResourceEvaluationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline ListResourceEvaluationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceEvaluation> m_resourceEvaluations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
