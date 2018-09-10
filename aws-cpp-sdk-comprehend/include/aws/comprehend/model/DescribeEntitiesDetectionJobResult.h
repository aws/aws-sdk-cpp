/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult
  {
  public:
    DescribeEntitiesDetectionJobResult();
    DescribeEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
