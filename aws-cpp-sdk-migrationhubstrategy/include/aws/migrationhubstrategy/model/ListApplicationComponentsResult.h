/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class ListApplicationComponentsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline const Aws::Vector<ApplicationComponentDetail>& GetApplicationComponentInfos() const{ return m_applicationComponentInfos; }

    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline void SetApplicationComponentInfos(const Aws::Vector<ApplicationComponentDetail>& value) { m_applicationComponentInfos = value; }

    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline void SetApplicationComponentInfos(Aws::Vector<ApplicationComponentDetail>&& value) { m_applicationComponentInfos = std::move(value); }

    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline ListApplicationComponentsResult& WithApplicationComponentInfos(const Aws::Vector<ApplicationComponentDetail>& value) { SetApplicationComponentInfos(value); return *this;}

    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline ListApplicationComponentsResult& WithApplicationComponentInfos(Aws::Vector<ApplicationComponentDetail>&& value) { SetApplicationComponentInfos(std::move(value)); return *this;}

    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline ListApplicationComponentsResult& AddApplicationComponentInfos(const ApplicationComponentDetail& value) { m_applicationComponentInfos.push_back(value); return *this; }

    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline ListApplicationComponentsResult& AddApplicationComponentInfos(ApplicationComponentDetail&& value) { m_applicationComponentInfos.push_back(std::move(value)); return *this; }


    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListApplicationComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListApplicationComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListApplicationComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationComponentDetail> m_applicationComponentInfos;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
