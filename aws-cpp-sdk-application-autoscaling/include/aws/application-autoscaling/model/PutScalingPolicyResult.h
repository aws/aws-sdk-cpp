/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace ApplicationAutoScaling
{
namespace Model
{
  class AWS_APPLICATIONAUTOSCALING_API PutScalingPolicyResult
  {
  public:
    PutScalingPolicyResult();
    PutScalingPolicyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutScalingPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline void SetPolicyARN(Aws::String&& value) { m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline void SetPolicyARN(const char* value) { m_policyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(Aws::String&& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resulting scaling policy.</p>
     */
    inline PutScalingPolicyResult& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}

  private:
    Aws::String m_policyARN;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
