/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/VersionSummary.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult
  {
  public:
    ListApplicationVersionsResult();
    ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline const Aws::Vector<VersionSummary>& GetVersions() const{ return m_versions; }

    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline void SetVersions(const Aws::Vector<VersionSummary>& value) { m_versions = value; }

    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline void SetVersions(Aws::Vector<VersionSummary>&& value) { m_versions = std::move(value); }

    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline ListApplicationVersionsResult& WithVersions(const Aws::Vector<VersionSummary>& value) { SetVersions(value); return *this;}

    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline ListApplicationVersionsResult& WithVersions(Aws::Vector<VersionSummary>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline ListApplicationVersionsResult& AddVersions(const VersionSummary& value) { m_versions.push_back(value); return *this; }

    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline ListApplicationVersionsResult& AddVersions(VersionSummary&& value) { m_versions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VersionSummary> m_versions;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
