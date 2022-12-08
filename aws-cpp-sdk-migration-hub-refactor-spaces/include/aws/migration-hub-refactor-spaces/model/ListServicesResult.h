/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceSummary.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class ListServicesResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListServicesResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServiceSummaryList() const{ return m_serviceSummaryList; }

    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline void SetServiceSummaryList(const Aws::Vector<ServiceSummary>& value) { m_serviceSummaryList = value; }

    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline void SetServiceSummaryList(Aws::Vector<ServiceSummary>&& value) { m_serviceSummaryList = std::move(value); }

    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline ListServicesResult& WithServiceSummaryList(const Aws::Vector<ServiceSummary>& value) { SetServiceSummaryList(value); return *this;}

    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline ListServicesResult& WithServiceSummaryList(Aws::Vector<ServiceSummary>&& value) { SetServiceSummaryList(std::move(value)); return *this;}

    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline ListServicesResult& AddServiceSummaryList(const ServiceSummary& value) { m_serviceSummaryList.push_back(value); return *this; }

    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline ListServicesResult& AddServiceSummaryList(ServiceSummary&& value) { m_serviceSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceSummary> m_serviceSummaryList;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
