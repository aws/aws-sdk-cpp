/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{
  class ListFleetsResult
  {
  public:
    AWS_GAMELIFT_API ListFleetsResult();
    AWS_GAMELIFT_API ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of fleet IDs that match the list request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const{ return m_fleetIds; }
    inline void SetFleetIds(const Aws::Vector<Aws::String>& value) { m_fleetIds = value; }
    inline void SetFleetIds(Aws::Vector<Aws::String>&& value) { m_fleetIds = std::move(value); }
    inline ListFleetsResult& WithFleetIds(const Aws::Vector<Aws::String>& value) { SetFleetIds(value); return *this;}
    inline ListFleetsResult& WithFleetIds(Aws::Vector<Aws::String>&& value) { SetFleetIds(std::move(value)); return *this;}
    inline ListFleetsResult& AddFleetIds(const Aws::String& value) { m_fleetIds.push_back(value); return *this; }
    inline ListFleetsResult& AddFleetIds(Aws::String&& value) { m_fleetIds.push_back(std::move(value)); return *this; }
    inline ListFleetsResult& AddFleetIds(const char* value) { m_fleetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fleetIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
