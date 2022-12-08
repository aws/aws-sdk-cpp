/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListApplicationVersionsResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
