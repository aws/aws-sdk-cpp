/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/CreatedArtifact.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListCreatedArtifactsResult
  {
  public:
    AWS_MIGRATIONHUB_API ListCreatedArtifactsResult();
    AWS_MIGRATIONHUB_API ListCreatedArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListCreatedArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListCreatedArtifactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListCreatedArtifactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListCreatedArtifactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline const Aws::Vector<CreatedArtifact>& GetCreatedArtifactList() const{ return m_createdArtifactList; }

    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline void SetCreatedArtifactList(const Aws::Vector<CreatedArtifact>& value) { m_createdArtifactList = value; }

    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline void SetCreatedArtifactList(Aws::Vector<CreatedArtifact>&& value) { m_createdArtifactList = std::move(value); }

    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline ListCreatedArtifactsResult& WithCreatedArtifactList(const Aws::Vector<CreatedArtifact>& value) { SetCreatedArtifactList(value); return *this;}

    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline ListCreatedArtifactsResult& WithCreatedArtifactList(Aws::Vector<CreatedArtifact>&& value) { SetCreatedArtifactList(std::move(value)); return *this;}

    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline ListCreatedArtifactsResult& AddCreatedArtifactList(const CreatedArtifact& value) { m_createdArtifactList.push_back(value); return *this; }

    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline ListCreatedArtifactsResult& AddCreatedArtifactList(CreatedArtifact&& value) { m_createdArtifactList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<CreatedArtifact> m_createdArtifactList;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
