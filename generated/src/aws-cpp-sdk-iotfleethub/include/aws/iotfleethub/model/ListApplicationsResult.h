/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleethub/model/ApplicationSummary.h>
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
namespace IoTFleetHub
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_IOTFLEETHUB_API ListApplicationsResult();
    AWS_IOTFLEETHUB_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETHUB_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaries() const{ return m_applicationSummaries; }

    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline void SetApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { m_applicationSummaries = value; }

    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline void SetApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { m_applicationSummaries = std::move(value); }

    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline ListApplicationsResult& WithApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { SetApplicationSummaries(value); return *this;}

    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline ListApplicationsResult& WithApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { SetApplicationSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline ListApplicationsResult& AddApplicationSummaries(const ApplicationSummary& value) { m_applicationSummaries.push_back(value); return *this; }

    /**
     * <p>An array of objects that provide summaries of information about the web
     * applications in the list.</p>
     */
    inline ListApplicationsResult& AddApplicationSummaries(ApplicationSummary&& value) { m_applicationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
