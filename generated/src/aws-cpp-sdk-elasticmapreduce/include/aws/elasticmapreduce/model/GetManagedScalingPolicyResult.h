/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
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
namespace EMR
{
namespace Model
{
  class GetManagedScalingPolicyResult
  {
  public:
    AWS_EMR_API GetManagedScalingPolicyResult() = default;
    AWS_EMR_API GetManagedScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetManagedScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const { return m_managedScalingPolicy; }
    template<typename ManagedScalingPolicyT = ManagedScalingPolicy>
    void SetManagedScalingPolicy(ManagedScalingPolicyT&& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = std::forward<ManagedScalingPolicyT>(value); }
    template<typename ManagedScalingPolicyT = ManagedScalingPolicy>
    GetManagedScalingPolicyResult& WithManagedScalingPolicy(ManagedScalingPolicyT&& value) { SetManagedScalingPolicy(std::forward<ManagedScalingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedScalingPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ManagedScalingPolicy m_managedScalingPolicy;
    bool m_managedScalingPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
