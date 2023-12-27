/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/SyncConfiguration.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class ListSyncConfigurationsResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListSyncConfigurationsResult();
    AWS_CODESTARCONNECTIONS_API ListSyncConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API ListSyncConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline const Aws::Vector<SyncConfiguration>& GetSyncConfigurations() const{ return m_syncConfigurations; }

    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline void SetSyncConfigurations(const Aws::Vector<SyncConfiguration>& value) { m_syncConfigurations = value; }

    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline void SetSyncConfigurations(Aws::Vector<SyncConfiguration>&& value) { m_syncConfigurations = std::move(value); }

    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline ListSyncConfigurationsResult& WithSyncConfigurations(const Aws::Vector<SyncConfiguration>& value) { SetSyncConfigurations(value); return *this;}

    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline ListSyncConfigurationsResult& WithSyncConfigurations(Aws::Vector<SyncConfiguration>&& value) { SetSyncConfigurations(std::move(value)); return *this;}

    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline ListSyncConfigurationsResult& AddSyncConfigurations(const SyncConfiguration& value) { m_syncConfigurations.push_back(value); return *this; }

    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline ListSyncConfigurationsResult& AddSyncConfigurations(SyncConfiguration&& value) { m_syncConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListSyncConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListSyncConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListSyncConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSyncConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSyncConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSyncConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SyncConfiguration> m_syncConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
