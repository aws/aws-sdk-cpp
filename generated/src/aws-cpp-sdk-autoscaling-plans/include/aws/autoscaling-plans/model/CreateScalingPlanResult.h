/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
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
namespace AutoScalingPlans
{
namespace Model
{
  class CreateScalingPlanResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API CreateScalingPlanResult();
    AWS_AUTOSCALINGPLANS_API CreateScalingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API CreateScalingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version number of the scaling plan. This value is always <code>1</code>.
     * Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan. This value is always <code>1</code>.
     * Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan. This value is always <code>1</code>.
     * Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline CreateScalingPlanResult& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateScalingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateScalingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateScalingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_scalingPlanVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
