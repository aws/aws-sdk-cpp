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
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>

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
  class AWS_AUTOSCALINGPLANS_API CreateScalingPlanResult
  {
  public:
    CreateScalingPlanResult();
    CreateScalingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateScalingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version number of the scaling plan. This value is always 1.</p>
     * <p>Currently, you cannot specify multiple scaling plan versions.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan. This value is always 1.</p>
     * <p>Currently, you cannot specify multiple scaling plan versions.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan. This value is always 1.</p>
     * <p>Currently, you cannot specify multiple scaling plan versions.</p>
     */
    inline CreateScalingPlanResult& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}

  private:

    long long m_scalingPlanVersion;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
