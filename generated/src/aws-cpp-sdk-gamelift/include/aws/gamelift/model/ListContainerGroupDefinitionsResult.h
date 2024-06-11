/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerGroupDefinition.h>
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
  class ListContainerGroupDefinitionsResult
  {
  public:
    AWS_GAMELIFT_API ListContainerGroupDefinitionsResult();
    AWS_GAMELIFT_API ListContainerGroupDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListContainerGroupDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A result set of container group definitions that match the request.</p>
     */
    inline const Aws::Vector<ContainerGroupDefinition>& GetContainerGroupDefinitions() const{ return m_containerGroupDefinitions; }
    inline void SetContainerGroupDefinitions(const Aws::Vector<ContainerGroupDefinition>& value) { m_containerGroupDefinitions = value; }
    inline void SetContainerGroupDefinitions(Aws::Vector<ContainerGroupDefinition>&& value) { m_containerGroupDefinitions = std::move(value); }
    inline ListContainerGroupDefinitionsResult& WithContainerGroupDefinitions(const Aws::Vector<ContainerGroupDefinition>& value) { SetContainerGroupDefinitions(value); return *this;}
    inline ListContainerGroupDefinitionsResult& WithContainerGroupDefinitions(Aws::Vector<ContainerGroupDefinition>&& value) { SetContainerGroupDefinitions(std::move(value)); return *this;}
    inline ListContainerGroupDefinitionsResult& AddContainerGroupDefinitions(const ContainerGroupDefinition& value) { m_containerGroupDefinitions.push_back(value); return *this; }
    inline ListContainerGroupDefinitionsResult& AddContainerGroupDefinitions(ContainerGroupDefinition&& value) { m_containerGroupDefinitions.push_back(std::move(value)); return *this; }
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
    inline ListContainerGroupDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContainerGroupDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContainerGroupDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContainerGroupDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContainerGroupDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContainerGroupDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerGroupDefinition> m_containerGroupDefinitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
