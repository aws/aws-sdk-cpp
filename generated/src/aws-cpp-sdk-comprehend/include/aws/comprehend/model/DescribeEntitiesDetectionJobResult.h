/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EntitiesDetectionJobProperties.h>
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
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult();
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline const EntitiesDetectionJobProperties& GetEntitiesDetectionJobProperties() const{ return m_entitiesDetectionJobProperties; }

    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline void SetEntitiesDetectionJobProperties(const EntitiesDetectionJobProperties& value) { m_entitiesDetectionJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline void SetEntitiesDetectionJobProperties(EntitiesDetectionJobProperties&& value) { m_entitiesDetectionJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline DescribeEntitiesDetectionJobResult& WithEntitiesDetectionJobProperties(const EntitiesDetectionJobProperties& value) { SetEntitiesDetectionJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline DescribeEntitiesDetectionJobResult& WithEntitiesDetectionJobProperties(EntitiesDetectionJobProperties&& value) { SetEntitiesDetectionJobProperties(std::move(value)); return *this;}

  private:

    EntitiesDetectionJobProperties m_entitiesDetectionJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
