/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerGroupDefinition.h>
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
  class DescribeContainerGroupDefinitionResult
  {
  public:
    AWS_GAMELIFT_API DescribeContainerGroupDefinitionResult() = default;
    AWS_GAMELIFT_API DescribeContainerGroupDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeContainerGroupDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the requested container group definition resource.</p>
     */
    inline const ContainerGroupDefinition& GetContainerGroupDefinition() const { return m_containerGroupDefinition; }
    template<typename ContainerGroupDefinitionT = ContainerGroupDefinition>
    void SetContainerGroupDefinition(ContainerGroupDefinitionT&& value) { m_containerGroupDefinitionHasBeenSet = true; m_containerGroupDefinition = std::forward<ContainerGroupDefinitionT>(value); }
    template<typename ContainerGroupDefinitionT = ContainerGroupDefinition>
    DescribeContainerGroupDefinitionResult& WithContainerGroupDefinition(ContainerGroupDefinitionT&& value) { SetContainerGroupDefinition(std::forward<ContainerGroupDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContainerGroupDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContainerGroupDefinition m_containerGroupDefinition;
    bool m_containerGroupDefinitionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
