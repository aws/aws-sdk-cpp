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
    AWS_GAMELIFT_API DescribeContainerGroupDefinitionResult();
    AWS_GAMELIFT_API DescribeContainerGroupDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeContainerGroupDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the requested container group definition resource.</p>
     */
    inline const ContainerGroupDefinition& GetContainerGroupDefinition() const{ return m_containerGroupDefinition; }
    inline void SetContainerGroupDefinition(const ContainerGroupDefinition& value) { m_containerGroupDefinition = value; }
    inline void SetContainerGroupDefinition(ContainerGroupDefinition&& value) { m_containerGroupDefinition = std::move(value); }
    inline DescribeContainerGroupDefinitionResult& WithContainerGroupDefinition(const ContainerGroupDefinition& value) { SetContainerGroupDefinition(value); return *this;}
    inline DescribeContainerGroupDefinitionResult& WithContainerGroupDefinition(ContainerGroupDefinition&& value) { SetContainerGroupDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeContainerGroupDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeContainerGroupDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeContainerGroupDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContainerGroupDefinition m_containerGroupDefinition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
