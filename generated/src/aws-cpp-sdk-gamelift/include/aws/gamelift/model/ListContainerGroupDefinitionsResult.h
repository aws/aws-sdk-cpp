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
    AWS_GAMELIFT_API ListContainerGroupDefinitionsResult() = default;
    AWS_GAMELIFT_API ListContainerGroupDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListContainerGroupDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A result set of container group definitions that match the request.</p>
     */
    inline const Aws::Vector<ContainerGroupDefinition>& GetContainerGroupDefinitions() const { return m_containerGroupDefinitions; }
    template<typename ContainerGroupDefinitionsT = Aws::Vector<ContainerGroupDefinition>>
    void SetContainerGroupDefinitions(ContainerGroupDefinitionsT&& value) { m_containerGroupDefinitionsHasBeenSet = true; m_containerGroupDefinitions = std::forward<ContainerGroupDefinitionsT>(value); }
    template<typename ContainerGroupDefinitionsT = Aws::Vector<ContainerGroupDefinition>>
    ListContainerGroupDefinitionsResult& WithContainerGroupDefinitions(ContainerGroupDefinitionsT&& value) { SetContainerGroupDefinitions(std::forward<ContainerGroupDefinitionsT>(value)); return *this;}
    template<typename ContainerGroupDefinitionsT = ContainerGroupDefinition>
    ListContainerGroupDefinitionsResult& AddContainerGroupDefinitions(ContainerGroupDefinitionsT&& value) { m_containerGroupDefinitionsHasBeenSet = true; m_containerGroupDefinitions.emplace_back(std::forward<ContainerGroupDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContainerGroupDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContainerGroupDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerGroupDefinition> m_containerGroupDefinitions;
    bool m_containerGroupDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
