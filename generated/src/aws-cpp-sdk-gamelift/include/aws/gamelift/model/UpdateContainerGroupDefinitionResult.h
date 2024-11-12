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
  class UpdateContainerGroupDefinitionResult
  {
  public:
    AWS_GAMELIFT_API UpdateContainerGroupDefinitionResult();
    AWS_GAMELIFT_API UpdateContainerGroupDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateContainerGroupDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the updated container group definition version.</p>
     */
    inline const ContainerGroupDefinition& GetContainerGroupDefinition() const{ return m_containerGroupDefinition; }
    inline void SetContainerGroupDefinition(const ContainerGroupDefinition& value) { m_containerGroupDefinition = value; }
    inline void SetContainerGroupDefinition(ContainerGroupDefinition&& value) { m_containerGroupDefinition = std::move(value); }
    inline UpdateContainerGroupDefinitionResult& WithContainerGroupDefinition(const ContainerGroupDefinition& value) { SetContainerGroupDefinition(value); return *this;}
    inline UpdateContainerGroupDefinitionResult& WithContainerGroupDefinition(ContainerGroupDefinition&& value) { SetContainerGroupDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateContainerGroupDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateContainerGroupDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateContainerGroupDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContainerGroupDefinition m_containerGroupDefinition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
