/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerFleet.h>
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
  class ListContainerFleetsResult
  {
  public:
    AWS_GAMELIFT_API ListContainerFleetsResult();
    AWS_GAMELIFT_API ListContainerFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListContainerFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of container fleet objects for all fleets that match the request
     * criteria.</p>
     */
    inline const Aws::Vector<ContainerFleet>& GetContainerFleets() const{ return m_containerFleets; }
    inline void SetContainerFleets(const Aws::Vector<ContainerFleet>& value) { m_containerFleets = value; }
    inline void SetContainerFleets(Aws::Vector<ContainerFleet>&& value) { m_containerFleets = std::move(value); }
    inline ListContainerFleetsResult& WithContainerFleets(const Aws::Vector<ContainerFleet>& value) { SetContainerFleets(value); return *this;}
    inline ListContainerFleetsResult& WithContainerFleets(Aws::Vector<ContainerFleet>&& value) { SetContainerFleets(std::move(value)); return *this;}
    inline ListContainerFleetsResult& AddContainerFleets(const ContainerFleet& value) { m_containerFleets.push_back(value); return *this; }
    inline ListContainerFleetsResult& AddContainerFleets(ContainerFleet&& value) { m_containerFleets.push_back(std::move(value)); return *this; }
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
    inline ListContainerFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContainerFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContainerFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContainerFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContainerFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContainerFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerFleet> m_containerFleets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
