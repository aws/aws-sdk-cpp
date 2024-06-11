﻿/**
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
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult();
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with an entities detection
     * job.</p>
     */
    inline const EntitiesDetectionJobProperties& GetEntitiesDetectionJobProperties() const{ return m_entitiesDetectionJobProperties; }
    inline void SetEntitiesDetectionJobProperties(const EntitiesDetectionJobProperties& value) { m_entitiesDetectionJobProperties = value; }
    inline void SetEntitiesDetectionJobProperties(EntitiesDetectionJobProperties&& value) { m_entitiesDetectionJobProperties = std::move(value); }
    inline DescribeEntitiesDetectionJobResult& WithEntitiesDetectionJobProperties(const EntitiesDetectionJobProperties& value) { SetEntitiesDetectionJobProperties(value); return *this;}
    inline DescribeEntitiesDetectionJobResult& WithEntitiesDetectionJobProperties(EntitiesDetectionJobProperties&& value) { SetEntitiesDetectionJobProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEntitiesDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEntitiesDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEntitiesDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EntitiesDetectionJobProperties m_entitiesDetectionJobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
