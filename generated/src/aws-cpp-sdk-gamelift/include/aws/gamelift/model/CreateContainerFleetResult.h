/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerFleet.h>
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
  class CreateContainerFleetResult
  {
  public:
    AWS_GAMELIFT_API CreateContainerFleetResult();
    AWS_GAMELIFT_API CreateContainerFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateContainerFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties for the new container fleet, including current status. All
     * fleets are initially placed in <code>PENDING</code> status. </p>
     */
    inline const ContainerFleet& GetContainerFleet() const{ return m_containerFleet; }
    inline void SetContainerFleet(const ContainerFleet& value) { m_containerFleet = value; }
    inline void SetContainerFleet(ContainerFleet&& value) { m_containerFleet = std::move(value); }
    inline CreateContainerFleetResult& WithContainerFleet(const ContainerFleet& value) { SetContainerFleet(value); return *this;}
    inline CreateContainerFleetResult& WithContainerFleet(ContainerFleet&& value) { SetContainerFleet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContainerFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContainerFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContainerFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContainerFleet m_containerFleet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
