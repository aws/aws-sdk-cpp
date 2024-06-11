﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyDescription.h>
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
namespace EMR
{
namespace Model
{
  class PutAutoScalingPolicyResult
  {
  public:
    AWS_EMR_API PutAutoScalingPolicyResult();
    AWS_EMR_API PutAutoScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API PutAutoScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline void SetClusterId(const Aws::String& value) { m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterId.assign(value); }
    inline PutAutoScalingPolicyResult& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline PutAutoScalingPolicyResult& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline PutAutoScalingPolicyResult& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the instance group to which the scaling policy is
     * applied.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupId = value; }
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupId = std::move(value); }
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupId.assign(value); }
    inline PutAutoScalingPolicyResult& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}
    inline PutAutoScalingPolicyResult& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}
    inline PutAutoScalingPolicyResult& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automatic scaling policy definition.</p>
     */
    inline const AutoScalingPolicyDescription& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }
    inline void SetAutoScalingPolicy(const AutoScalingPolicyDescription& value) { m_autoScalingPolicy = value; }
    inline void SetAutoScalingPolicy(AutoScalingPolicyDescription&& value) { m_autoScalingPolicy = std::move(value); }
    inline PutAutoScalingPolicyResult& WithAutoScalingPolicy(const AutoScalingPolicyDescription& value) { SetAutoScalingPolicy(value); return *this;}
    inline PutAutoScalingPolicyResult& WithAutoScalingPolicy(AutoScalingPolicyDescription&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline PutAutoScalingPolicyResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline PutAutoScalingPolicyResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline PutAutoScalingPolicyResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutAutoScalingPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutAutoScalingPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutAutoScalingPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;

    Aws::String m_instanceGroupId;

    AutoScalingPolicyDescription m_autoScalingPolicy;

    Aws::String m_clusterArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
