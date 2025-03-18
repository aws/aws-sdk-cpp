/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EntitiesDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeEntitiesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline const EntitiesDetectionJobProperties& GetEntitiesDetectionJobProperties() const { return m_entitiesDetectionJobProperties; }
    template<typename EntitiesDetectionJobPropertiesT = EntitiesDetectionJobProperties>
    void SetEntitiesDetectionJobProperties(EntitiesDetectionJobPropertiesT&& value) { m_entitiesDetectionJobPropertiesHasBeenSet = true; m_entitiesDetectionJobProperties = std::forward<EntitiesDetectionJobPropertiesT>(value); }
    template<typename EntitiesDetectionJobPropertiesT = EntitiesDetectionJobProperties>
    DescribeEntitiesDetectionJobResult& WithEntitiesDetectionJobProperties(EntitiesDetectionJobPropertiesT&& value) { SetEntitiesDetectionJobProperties(std::forward<EntitiesDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEntitiesDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EntitiesDetectionJobProperties m_entitiesDetectionJobProperties;
    bool m_entitiesDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
