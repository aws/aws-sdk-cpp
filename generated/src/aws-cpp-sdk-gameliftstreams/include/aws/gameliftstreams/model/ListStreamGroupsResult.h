/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/StreamGroupSummary.h>
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
namespace GameLiftStreams
{
namespace Model
{
  class ListStreamGroupsResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API ListStreamGroupsResult();
    AWS_GAMELIFTSTREAMS_API ListStreamGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API ListStreamGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of Amazon GameLift Streams stream groups that are associated
     * with the Amazon Web Services account in use. Each item includes stream group
     * metadata and status, but doesn't include capacity information.</p>
     */
    inline const Aws::Vector<StreamGroupSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<StreamGroupSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<StreamGroupSummary>&& value) { m_items = std::move(value); }
    inline ListStreamGroupsResult& WithItems(const Aws::Vector<StreamGroupSummary>& value) { SetItems(value); return *this;}
    inline ListStreamGroupsResult& WithItems(Aws::Vector<StreamGroupSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListStreamGroupsResult& AddItems(const StreamGroupSummary& value) { m_items.push_back(value); return *this; }
    inline ListStreamGroupsResult& AddItems(StreamGroupSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that marks the start of the next sequential page of results. If an
     * operation doesn't return a token, you've reached the end of the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStreamGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStreamGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStreamGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStreamGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStreamGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStreamGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StreamGroupSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
