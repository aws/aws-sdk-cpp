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
  class DescribeContainerFleetResult
  {
  public:
    AWS_GAMELIFT_API DescribeContainerFleetResult();
    AWS_GAMELIFT_API DescribeContainerFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeContainerFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties for the requested container fleet, including current
     * status.</p>
     */
    inline const ContainerFleet& GetContainerFleet() const{ return m_containerFleet; }
    inline void SetContainerFleet(const ContainerFleet& value) { m_containerFleet = value; }
    inline void SetContainerFleet(ContainerFleet&& value) { m_containerFleet = std::move(value); }
    inline DescribeContainerFleetResult& WithContainerFleet(const ContainerFleet& value) { SetContainerFleet(value); return *this;}
    inline DescribeContainerFleetResult& WithContainerFleet(ContainerFleet&& value) { SetContainerFleet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeContainerFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeContainerFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeContainerFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContainerFleet m_containerFleet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
